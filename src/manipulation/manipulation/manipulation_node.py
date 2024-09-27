#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from manipulation_interfaces.srv import MoveArm
from geometry_msgs.msg import Point
import qi  # NAOqi SDK

class ManipulationNode(Node):
    def __init__(self):
        super().__init__('manipulation_node')
        self.srv = self.create_service(MoveArm, 'move_arm', self.move_arm_callback)
        self.get_logger().info('Manipulation node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'  # Replace with your NAO's IP
        self.nao_port = 9559

        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
            self.motion = self.session.service('ALMotion')
            self.posture = self.session.service('ALRobotPosture')
            self.get_logger().info('Connected to NAOqi.')
        except RuntimeError as e:
            self.get_logger().error(f"Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}")
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

def main(args=None):
    rclpy.init(args=args)
    node = ManipulationNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
