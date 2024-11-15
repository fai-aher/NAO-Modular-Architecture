#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from speech_interfaces.srv import Speak, PlaySong, ChangeVoice, ListVoices
import qi  # NAOqi SDK
import time

class SpeechNode(Node):
    def __init__(self):
        super().__init__('speech_node')
        self.speak_srv = self.create_service(Speak, 'speak', self.speak_callback)
        self.play_song_srv = self.create_service(PlaySong, 'play_song', self.play_song_callback)
        self.change_voice_srv = self.create_service(ChangeVoice, 'change_voice', self.change_voice_callback)
        self.list_voices_srv = self.create_service(ListVoices, 'list_voices', self.list_voices_callback)
        
        self.get_logger().info('Speech node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'
        self.nao_port = 9559

        self.session = qi.Session()
        self.connect_to_naoqi()

    def connect_to_naoqi(self):
        connected = False
        while not connected:
            try:
                self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
                self.tts = self.session.service('ALTextToSpeech')
                self.audio = self.session.service('ALAudioPlayer')
                self.animated_speech = self.session.service("ALAnimatedSpeech")
                self.get_logger().info('Connected to NAOqi.')
                connected = True
            except RuntimeError as e:
                self.get_logger().error(f"Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}")
                self.get_logger().info('Retrying in 5 seconds...')
                time.sleep(5)

    def speak_callback(self, request, response):
        try:
            text = request.text
            animated = request.animated
            self.get_logger().info(f"Received speak request: {text}, animated: {animated}")
            if self.tts:
                if animated:
                    self.animated_speech.say(text)
                else:
                    self.tts.say(text)
                response.success = True
                self.get_logger().info("Speech executed successfully.")
            else:
                self.get_logger().error("ALTextToSpeech service not available.")
                response.success = False
        except Exception as e:
            self.get_logger().error(f"Failed to speak: {e}")
            response.success = False
        return response

    def play_song_callback(self, request, response):
        try:
            song_path = request.song_path
            self.get_logger().info(f"Playing song: {song_path}")
            if self.audio is not None:
                self.audio.playFile(song_path)
                response.success = True
                response.message = "Song is playing."
            else:
                self.get_logger().error("ALAudioPlayer service not available.")
                response.success = False
                response.message = "ALAudioPlayer service not available."
        except Exception as e:
            self.get_logger().error(f"Failed to play song: {e}")
            response.success = False
            response.message = str(e)
        return response
    
    def change_voice_callback(self, request, response):
        try:
            voice_name = request.voice_name
            self.tts.setVoice(voice_name)
            response.success = True
            response.message = f"Voz cambiada a {voice_name}."
        except Exception as e:
            response.success = False
            response.message = f"Error al cambiar voz: {str(e)}"
        return response

    def list_voices_callback(self, request, response):
        try:
            response.voices = self.tts.getAvailableVoices()
        except Exception as e:
            self.get_logger().error(f"Error al listar voces: {str(e)}")
            response.voices = []
        return response

def main(args=None):
    rclpy.init(args=args)
    node = SpeechNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Speech node shutting down.')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
