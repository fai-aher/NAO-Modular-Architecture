#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects, SetEyeColor
from manipulation_interfaces.srv import MoveArm, StandUp, SetPosture, SetMode, DetectHeadTouch
from geometry_msgs.msg import Point, PoseStamped
from speech_interfaces.srv import Speak, PlaySong, LiveConversation, LiveConversationWithTranscription, TranscribeAudio, StartAudioRecording, StopAudioRecording
from rclpy.action import ActionClient
import time
import os
import requests

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
        self.set_eye_color_client = self.create_client(SetEyeColor, 'set_eye_color')
        self.live_conversation_with_transcription_client = self.create_client(LiveConversationWithTranscription, 'live_conversation_with_transcription')

        self.move_arm_client = self.create_client(MoveArm, 'move_arm')
        self.stand_up_client = self.create_client(StandUp, 'stand_up')
        self.set_posture_client = self.create_client(SetPosture, 'set_posture')
        self.detect_head_touch_client = self.create_client(DetectHeadTouch, 'detect_head_touch')

        self.transcribe_audio_client = self.create_client(TranscribeAudio, 'transcribe_audio')
        self.start_audio_recording_client = self.create_client(StartAudioRecording, 'start_audio_recording')
        self.stop_audio_recording_client = self.create_client(StopAudioRecording, 'stop_audio_recording')
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
            (self.live_conversation_with_transcription_client, 'live_conversation_with_transcription'),
            (self.set_eye_color_client, 'SetEyeColor'),
            (self.detect_head_touch_client, 'DetectHeadTouch'),
            (self.start_audio_recording_client, 'StartAudioRecording'),
            (self.stop_audio_recording_client, 'StopAudioRecording'),
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
        
    def live_conversation_with_transcription(self, transcription):
        if not self.live_conversation_with_transcription_client.service_is_ready():
            self.get_logger().error('LiveConversationWithTranscription service is not available.')
            return False, "Service unavailable"

        req = LiveConversationWithTranscription.Request()
        req.transcription = transcription

        try:
            future = self.live_conversation_with_transcription_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            if future.result() is not None:
                response = future.result()
                return response.success, response.bot_response
            else:
                self.get_logger().error('Failed to call LiveConversationWithTranscription service')
                return False, "Error in processing"
        except Exception as e:
            self.get_logger().error(f"LiveConversationWithTranscription service call failed: {e}")
            return False, str(e)

        
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
        
    def detect_head_touch(self):
        if not self.detect_head_touch_client.service_is_ready():
            self.get_logger().error('DetectHeadTouch service is not available.')
            return False
        request = DetectHeadTouch.Request()
        try:
            future = self.detect_head_touch_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.done():
                response = future.result()
                self.get_logger().info(f"Head touch detection result: {response.message}")
                return response.success
            else:
                self.get_logger().error('DetectHeadTouch service call timed out.')
                return False
        except Exception as e:
            self.get_logger().error(f"DetectHeadTouch service call failed: {e}")
            return False
        
    def start_audio_recording(self, filename):
        if not self.start_audio_recording_client.service_is_ready():
            self.get_logger().error('StartAudioRecording service is not available.')
            return False

        request = StartAudioRecording.Request()
        request.filename = filename

        try:
            future = self.start_audio_recording_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.result().success:
                self.get_logger().info(f"Audio recording started on NAO: {filename}")
                return True
            else:
                self.get_logger().error('Failed to start audio recording on NAO.')
                return False
        except Exception as e:
            self.get_logger().error(f"StartAudioRecording service call failed: {e}")
            return False


    def stop_audio_recording(self):
        if not self.stop_audio_recording_client.service_is_ready():
            self.get_logger().error('StopAudioRecording service is not available.')
            return False

        request = StopAudioRecording.Request()  # No filename required
        try:
            future = self.stop_audio_recording_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            if future.result().success:
                self.get_logger().info("Audio recording stopped successfully.")
                return True
            else:
                self.get_logger().error('Failed to stop audio recording.')
                return False
        except Exception as e:
            self.get_logger().error(f"StopAudioRecording service call failed: {e}")
            return False


    def retrieve_audio_from_nao(self, remote_filename, local_path):
        try:
            nao_ip = '192.168.212.6'  # IP of NAO
            url = f"http://{nao_ip}:5000/{remote_filename}"

            self.get_logger().info(f"Retrieving audio file from {url}")

            response = requests.get(url, stream=True)
            if response.status_code == 200:
                with open(local_path, 'wb') as f:
                    for chunk in response.iter_content(chunk_size=8192):
                        f.write(chunk)
                self.get_logger().info(f"Audio file retrieved and saved to: {local_path}")
                return local_path
            else:
                self.get_logger().error(f"Failed to retrieve file. HTTP Status: {response.status_code}")
                return None
        except Exception as e:
            self.get_logger().error(f"Failed to retrieve audio file from NAO: {e}")
            return None


    def transcribe_audio(self, filename):
        if not self.transcribe_audio_client.service_is_ready():
            self.get_logger().error('TranscribeAudio service is not available.')
            return "Transcription failed."

        local_path = filename

        # Retrieve audio file from NAO
        retrieved_path = self.retrieve_audio_from_nao(filename, local_path)
        if not retrieved_path:
            return "Transcription failed. File retrieval error."

        # Transcription request
        request = TranscribeAudio.Request()
        request.filepath = retrieved_path

        try:
            future = self.transcribe_audio_client.call_async(request)
            rclpy.spin_until_future_complete(self, future, timeout_sec=10.0)
            if future.result() is not None and future.result().success:
                transcription = future.result().transcription
                self.get_logger().info(f"Transcription: {transcription}")
                return transcription
            else:
                self.get_logger().error('Failed to transcribe audio.')
                return "Transcription failed."
        except Exception as e:
            self.get_logger().error(f"TranscribeAudio service call failed: {e}")
            return "Transcription failed."


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