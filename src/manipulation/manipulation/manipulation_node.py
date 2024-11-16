#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from manipulation_interfaces.srv import MoveArm, StandUp, SetPosture, SetMode, ToggleAwareness, DetectHeadTouch
from geometry_msgs.msg import Point
import qi  # NAOqi SDK

class ManipulationNode(Node):
    def __init__(self):
        super().__init__('manipulation_node')
        self.srv = self.create_service(MoveArm, 'move_arm', self.move_arm_callback)
        self.stand_up_srv = self.create_service(StandUp, 'stand_up', self.stand_up_callback)
        self.set_posture_srv = self.create_service(SetPosture, 'set_posture', self.set_posture_callback)
        self.set_mode_srv = self.create_service(SetMode, 'set_mode', self.set_mode_callback)
        self.toggle_awareness_srv = self.create_service(ToggleAwareness, 'toggle_awareness', self.toggle_awareness_callback)
        self.detect_head_touch_srv = self.create_service(DetectHeadTouch, 'detect_head_touch', self.detect_head_touch_callback)

        self.get_logger().info('Manipulation node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'
        self.nao_port = 9559

        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}") 
            self.motion = self.session.service('ALMotion')
            self.posture = self.session.service('ALRobotPosture')
            self.autonomous_life = self.session.service('ALAutonomousLife')
            self.memory = self.session.service("ALMemory")
            self.get_logger().info('Connected to NAOqi.')
        except RuntimeError as e:
            self.get_logger().error(f"Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}")
            self.memory = None
            raise e

    def move_arm_callback(self, request, response):
        try:
            target = request.target_position
            self.get_logger().info(f"Moving arm to position: x={target.x}, y={target.y}, z={target.z}")

            # Example: Move right arm's shoulder pitch
            names = ["RShoulderPitch"]
            angles = [target.x]  # Using x as an example angle
            times = [1.0]

            self.motion.angleInterpolation(names, angles, times, True)
            response.success = True
            self.get_logger().info("Arm moved successfully.")
        except Exception as e:
            self.get_logger().error(f"Failed to move arm: {e}")
            response.success = False
        return response
    
    def stand_up_callback(self, request, response):
        try:
            self.get_logger().info("Received StandUp request.")
            self.posture.goToPosture("Stand", 0.5)
            response.success = True
            self.get_logger().info("NAO stood up successfully.")
        except Exception as e:
            self.get_logger().error(f"Failed to stand up: {e}")
            response.success = False
        return response
    
    def set_posture_callback(self, request, response):
        try:
            posture = request.posture_name
            self.get_logger().info(f"Received SetPosture request: {posture}")
            self.posture.goToPosture(posture, 0.5)
            response.success = True
            self.get_logger().info(f"Posture '{posture}' executed successfully.")
        except Exception as e:
            self.get_logger().error(f"Failed to set posture '{posture}': {e}")
            response.success = False
        return response
    
    def set_mode_callback(self, request, response):
        try:
            mode = request.mode.lower()
            self.get_logger().info(f"Received SetMode request: {mode}")
            if mode == 'rest':
                # First, go to 'Sit' posture
                self.posture.goToPosture("Crouch", 0.5)
                self.get_logger().info("Posture set to 'Sit'.")
                # Then, relax joints
                self.motion.setStiffnesses("Body", 0.0)  # Relax joints
                self.get_logger().info("NAO is now in rest mode.")
                response.success = True
            elif mode == 'wake':
                self.motion.setStiffnesses("Body", 1.0)  # Activate joints
                self.posture.goToPosture("StandInit", 0.5)
                self.get_logger().info("NAO is now in wake up mode.")
                response.success = True
            else:
                self.get_logger().error(f"Unknown mode: {mode}")
                response.success = False
        except Exception as e:
            self.get_logger().error(f"Failed to set mode '{mode}': {e}")
            response.success = False
        return response
    

    def toggle_awareness_callback(self, request, response):
        try:
            enable = request.enable
            self.get_logger().info(f"Received ToggleAwareness request: {enable}")

            if enable:
                self.autonomous_life.setState("interactive")
                self.get_logger().info("NAO has full autonomy now.")
                response.success = True
                response.message = 'Full Awareness ON.'

            else:
                self.autonomous_life.setState("disabled")
                self.get_logger().info("NAO has NO autonomy now.")
                response.success = True
                response.message = 'Full Awareness OFF.'

        except Exception as e:
            self.get_logger().info(f"Failed to change the autonomy of NAO to '{enable}': {e}")
            response.success = False
            response.message = "Error when trying to change the autonomy and awareness of NAO."

        return response
    
    def detect_head_touch_callback(self, request, response):
        """Callback for head touch detection."""
        try:
            front_touch = self.memory.getData("Device/SubDeviceList/Head/Touch/Front/Sensor/Value")
            middle_touch = self.memory.getData("Device/SubDeviceList/Head/Touch/Middle/Sensor/Value")
            rear_touch = self.memory.getData("Device/SubDeviceList/Head/Touch/Rear/Sensor/Value")

            if front_touch or middle_touch or rear_touch:
                self.get_logger().info("Head touch detected.")
                response.success = True
            else:
                response.success = False
        except Exception as e:
            self.get_logger().error(f"Head touch detection failed: {e}")
            response.success = False

        return response
    def on_head_touched(self, eventName, value, message):
        if value > 0:
            self.get_logger().info("Head touch detected!")
        self.memory.unsubscribeToEvent("FrontTactilTouched", "ManipulationNode")


def main(args=None):
    rclpy.init(args=args)
    node = ManipulationNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
