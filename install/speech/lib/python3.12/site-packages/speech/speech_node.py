#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from speech_interfaces.srv import Speak, PlaySong
import qi  # NAOqi SDK

class SpeechNode(Node):
    def __init__(self):
        super().__init__('speech_node')
        self.speak_srv = self.create_service(Speak, 'speak', self.speak_callback)
        self.play_song_srv = self.create_service(PlaySong, 'play_song', self.play_song_callback)
        self.get_logger().info('Speech node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'  # Replace with your NAO's IP
        self.nao_port = 9559

        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
            self.tts = self.session.service('ALTextToSpeech')
            self.audio = self.session.service('ALAudioPlayer')
            self.get_logger().info('Connected to NAOqi.')
        except RuntimeError as e:
            self.get_logger().error(f"Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}")
            raise e

    def speak_callback(self, request, response):
        try:
            text = request.text
            self.get_logger().info(f"Speaking: {text}")
            self.tts.say(text)
            response.success = True
        except Exception as e:
            self.get_logger().error(f"Failed to speak: {e}")
            response.success = False
        return response

    def play_song_callback(self, request, response):
        try:
            song_path = request.song_path
            self.get_logger().info(f"Playing song: {song_path}")
            self.audio.playFile(song_path)
            response.success = True
            response.message = "Song is playing."
        except Exception as e:
            self.get_logger().error(f"Failed to play song: {e}")
            response.success = False
            response.message = str(e)
        return response

def main(args=None):
    rclpy.init(args=args)
    node = SpeechNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
