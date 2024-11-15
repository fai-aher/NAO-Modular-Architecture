#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from speech_interfaces.srv import Speak, PlaySong, ChangeVoice, ListVoices, SetVoiceParameters, LiveConversation, StartListening, RecognizeSpeech
import qi  # NAOqi SDK
import time
import openai
from threading import Lock
from rclpy.qos import QoSProfile
from std_msgs.msg import String

class SpeechNode(Node):
    def __init__(self):
        super().__init__('speech_node')
        self.speak_srv = self.create_service(Speak, 'speak', self.speak_callback)
        self.play_song_srv = self.create_service(PlaySong, 'play_song', self.play_song_callback)
        self.change_voice_srv = self.create_service(ChangeVoice, 'change_voice', self.change_voice_callback)
        self.list_voices_srv = self.create_service(ListVoices, 'list_voices', self.list_voices_callback)
        self.start_listening_srv = self.create_service(StartListening, 'start_listening', self.start_listening_callback)
        self.recognize_speech_srv = self.create_service(RecognizeSpeech, 'recognize_speech', self.recognize_speech_callback)
        self.set_voice_params_srv = self.create_service(
            SetVoiceParameters,
            'set_voice_parameters',
            self.set_voice_parameters_callback
        )
        self.live_conversation_srv = self.create_service(
            LiveConversation,
            'live_conversation',
            self.live_conversation_callback
        )
        
        # Publisher for recognized words
        self.publisher_ = self.create_publisher(String, 'recognized_word', QoSProfile(depth=10))

        
        self.get_logger().info('Speech node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'
        self.nao_port = 9559

        #OpenAI Key for GPT
        openai.api_key = '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'

        self.session = qi.Session()
        self.connect_to_naoqi()

        # Speech Recognition Parameters
        self.asr = self.session.service("ALSpeechRecognition")
        self.asr.setLanguage("Spanish")

        self.memory = self.session.service("ALMemory")
        self.memory.subscribeToEvent("WordRecognized", "SpeechNode_ASR", "on_word_recognized")

        self.vocabulary = []
        self.is_listening = False
        self.has_subscribed = False
        self.mutex = Lock()

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
    
    def set_voice_parameters_callback(self, request, response):
        try:
            # Set voice parameters permanently
            speed_command = "\\RSPD=" + str(request.speed_percentage) + "\\"
            voice_shaping_command = "\\VCT=" + str(request.voice_shaping_percentage) + "\\"

            self.tts.setParameter("speed", request.speed_percentage)
            self.tts.setParameter("pitchShift", request.voice_shaping_percentage)

            self.get_logger().info(f"Voice parameters set: Speed {request.speed_percentage}%, Voice shaping {request.voice_shaping_percentage}%.")
            response.success = True
        except Exception as e:
            self.get_logger().error(f"Failed to set voice parameters: {e}")
            response.success = False

        return response
    
    def live_conversation_callback(self, request, response):
        try:
            self.get_logger().info(f"Received user input: {request.user_input}")
            gpt_response = openai.chat.completions.create(
                model="gpt-4o-mini",
                messages=[
                    {"role": "system", "content": "You are a robot assistant. Answer in one small paragraph. Answer only in plain text for a robot to read it and say it outloud."},
                    {"role": "user", "content": request.user_input}
                ]
            )
            bot_reply = gpt_response.choices[0].message.content
            response.bot_response = bot_reply

            if self.tts:
                
                try:
                    self.animated_speech.say(bot_reply)
                except:
                    self.tts.say(bot_reply)

                response.success = True
                self.get_logger().info("Speech executed successfully.")
            else:
                self.get_logger().error("ALTextToSpeech service not available.")
                response.success = False

            self.get_logger().info(f"GPT-4 response: {bot_reply}")
            
        except Exception as e:
            self.get_logger().error(f"Failed to fetch GPT response: {e}")
            response.bot_response = "Sorry, I couldn't process that."
            response.success = False
        return response
    
    
    def start_listening_callback(self, request, response):
        self.mutex.acquire()
        try:
            self.asr.setVocabulary([request.start_word, request.stop_word], False)
            self.memory.subscribeToEvent("WordRecognized", "SpeechNode", "on_word_recognized")
            self.is_listening = True
            self.has_subscribed = True
            self.get_logger().info("Subscribed to WordRecognized event.")
            response.success = True
        except Exception as e:
            response.success = False
            response.message = f"Error starting listening: {e}"
        finally:
            self.mutex.release()
        return response

    def recognize_speech_callback(self, request, response):
        self.mutex.acquire()
        try:
            if not self.is_listening:
                raise RuntimeError("Speech recognition is not active.")
            recognized_data = self.memory.getData("WordRecognized")
            recognized_word = recognized_data[0] if recognized_data and recognized_data[1] >= 0.5 else ""
            response.recognized_text = recognized_word
            response.success = bool(recognized_word)
            self.get_logger().info(f"Recognized word: {recognized_word}")
            self.publisher_.publish(String(data=recognized_word))
        except Exception as e:
            response.success = False
            response.recognized_text = ""
            self.get_logger().error(f"Recognize speech error: {e}")
        finally:
            self.mutex.release()
        return response

    def on_word_recognized(self, key, value, message):
        if len(value) > 1 and value[1] >= 0.5:
            self.get_logger().info(f"Word recognized: {value[0]}")
            self.publisher_.publish(String(data=value[0]))

    def onUnload(self):
        self.mutex.acquire()
        try:
            if self.has_subscribed:
                self.memory.unsubscribeToEvent("WordRecognized", "SpeechNode")
            self.is_listening = False
        except RuntimeError as e:
            self.get_logger().error(f"Error during unload: {e}")
        finally:
            self.mutex.release()


def main(args=None):
    rclpy.init(args=args)
    node = SpeechNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Speech node shutting down.')
    finally:
        node.onUnload()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
