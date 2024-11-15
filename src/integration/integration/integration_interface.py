#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects, SetEyeColor
from manipulation_interfaces.srv import MoveArm, StandUp, SetPosture, SetMode
from geometry_msgs.msg import Point, PoseStamped
from speech_interfaces.srv import Speak, PlaySong, LiveConversation, StartListening, RecognizeSpeech
from rclpy.action import ActionClient
import time

"""
Steps to re-build the project and load changes to any console:

1. rm -rf build install log 
2. colcon build
3. source install/setup.bash

To build only one separarte ROS2 package: colcon build --packages-select <package_name>
"""

class IntegrationInterface(Node):
    def __init__(self):
        super().__init__('integration_interface')
        self.get_logger().info('Integration interface node started.')

        # Creating service clients
        self.detect_objects_client = self.create_client(DetectObjects, 'detect_objects')

        self.live_conversation_client = self.create_client(LiveConversation, 'live_conversation')
        self.start_listening_client = self.create_client(StartListening, 'start_listening')
        self.recognize_speech_client = self.create_client(RecognizeSpeech, 'recognize_speech')
        self.set_eye_color_client = self.create_client(SetEyeColor, 'set_eye_color')

        self.move_arm_client = self.create_client(MoveArm, 'move_arm')
        self.stand_up_client = self.create_client(StandUp, 'stand_up')
        self.set_posture_client = self.create_client(SetPosture, 'set_posture')

        self.speak_client = self.create_client(Speak, 'speak')
        self.play_song_client = self.create_client(PlaySong, 'play_song')

        # Creating action clients

        # Wait for services and action server
        self.wait_for_services()

    def wait_for_services(self):
        self.get_logger().info('Waiting for services and action server to be available...')
        services = [
            (self.detect_objects_client, 'DetectObjects'),
            (self.move_arm_client, 'MoveArm'),
            (self.speak_client, 'Speak'),
            (self.play_song_client, 'PlaySong'),
            (self.stand_up_client, 'StandUp'),
            (self.set_posture_client, 'SetPosture') ,
            (self.live_conversation_client, 'LiveConversation'),
            (self.start_listening_client, 'StartListening'),
            (self.recognize_speech_client, 'RecognizeSpeech'),
            (self.set_eye_color_client, 'SetEyeColor'),
        ]

        for client, name in services:
            while not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'Waiting for {name} service...')

        self.get_logger().info('All services and action server are available.')

    def speak(self, text, animated=False):
        if not self.speak_client.service_is_ready():
            self.get_logger().error('Speak service is not available.')
            return False
        request = Speak.Request()
        request.text = text
        request.animated = animated

        try:
            future = self.speak_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=20.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"Speak response: success={response.success}")
                return response.success
            else:
                self.get_logger().error('Speak service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"Speak service call failed: {e}")
            return False

    def raise_hands(self):
        if not self.move_arm_client.service_is_ready():
            self.get_logger().error('MoveArm service is not available.')
            return False
        
        request = MoveArm.Request()
        # Define target positions to raise both hands
        target_position = Point()
        target_position.x = 0.0  # Forward (not used in current mapping)
        target_position.y = 0.5  # Sideways to raise arms
        target_position.z = 0.0  # Upwards (not used in current mapping)

        request.target_position = target_position

        try:
            future = self.move_arm_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"MoveArm response: success={response.success}")
                return response.success
            else:
                self.get_logger().error('MoveArm service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"MoveArm service call failed: {e}")
            return False
        

    def stand_up(self):
        if not self.stand_up_client.service_is_ready():
            self.get_logger().error('StandUp service is not available.')
            return False
        request = StandUp.Request()

        try:
            future = self.stand_up_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=30.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"StandUp response: success={response.success}")
                return response.success
            else:
                self.get_logger().error('StandUp service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"StandUp service call failed: {e}")
            return False

    def set_posture(self, posture_name):
        if not self.set_posture_client.service_is_ready():
            self.get_logger().error('SetPosture service is not available.')
            return False
        request = SetPosture.Request()
        request.posture_name = posture_name

        try:
            future = self.set_posture_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=30.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"SetPosture response: success={response.success}")
                return response.success
            else:
                self.get_logger().error('SetPosture service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"SetPosture service call failed: {e}")
            return False
        
    def set_mode(self, mode):
        if not self.set_mode_client.service_is_ready():
            self.get_logger().error('SetMode service is not available.')
            return False
        request = SetMode.Request()
        request.mode = mode

        try:
            future = self.set_mode_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=30.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"SetMode response: success={response.success}")
                return response.success
            else:
                self.get_logger().error('SetMode service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"SetMode service call failed: {e}")
            return False


    def detect_objects(self):
        if not self.detect_objects_client.service_is_ready():
            self.get_logger().error('DetectObjects service is not available.')
            return None
        request = DetectObjects.Request()
        try:
            future = self.detect_objects_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                self.get_logger().info("DetectObjects response received.")
                return response
            else:
                self.get_logger().error('DetectObjects service call timed out.')
                return None
        except Exception as e:
            self.get_logger().error(f"DetectObjects service call failed: {e}")
            return None

    def play_song(self, song_path):
        if not self.play_song_client.service_is_ready():
            self.get_logger().error('PlaySong service is not available.')
            return False
        request = PlaySong.Request()
        request.song_path = song_path
        try:
            future = self.play_song_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"PlaySong response: success={response.success}, message={response.message}")
                return response.success
            else:
                self.get_logger().error('PlaySong service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"PlaySong service call failed: {e}")
            return False
        
    def live_conversation(self, user_input):
        req = LiveConversation.Request()
        req.user_input = user_input
        future = self.live_conversation_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result().bot_response
        else:
            self.get_logger().error('Failed to call live_conversation service')
            return "Error in processing."
        
    def start_listening(self, start_word, stop_word):
        if not self.start_listening_client.service_is_ready():
            self.get_logger().error('StartListening service is not available.')
            return False
        request = StartListening.Request()
        request.start_word = start_word
        request.stop_word = stop_word

        try:
            future = self.start_listening_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            return future.result().success
        except Exception as e:
            self.get_logger().error(f"StartListening service call failed: {e}")
            return False
        
    def recognize_speech(self):
        if not self.recognize_speech_client.service_is_ready():
            self.get_logger().error('RecognizeSpeech service is not available.')
            return False, ""
        request = RecognizeSpeech.Request()

        try:
            future = self.recognize_speech_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                return response.success, response.recognized_text
            else:
                self.get_logger().error('RecognizeSpeech service call timed out.')
                return False, ""
        except Exception as e:
            self.get_logger().error(f"RecognizeSpeech service call failed: {e}")
            return False, ""
        
    def set_eye_color(self, color):
        if not self.set_eye_color_client.service_is_ready():
            self.get_logger().error('SetEyeColor service is not available.')
            return False
        request = SetEyeColor.Request()
        request.color = color
        try:
            future = self.set_eye_color_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"SetEyeColor response: {response.message}")
                return response.success
            else:
                self.get_logger().error('SetEyeColor service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"SetEyeColor service call failed: {e}")
            return False

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Distance remaining: {feedback.distance_remaining}')

def main(args=None):
    rclpy.init(args=args)
    node = IntegrationInterface()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()