#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from speech_interfaces.srv import Speak, PlaySong, ChangeVoice, ListVoices, SetVoiceParameters, TranscribeAudio, LiveConversation, LiveConversationWithTranscription, StartAudioRecording, StopAudioRecording
import qi  # NAOqi SDK
import time
import openai
import requests
import os
from pathlib import Path
from std_msgs.msg import String


class SpeechNode(Node):
    def __init__(self):
        super().__init__('speech_node')
        self.speak_srv = self.create_service(Speak, 'speak', self.speak_callback)
        self.play_song_srv = self.create_service(PlaySong, 'play_song', self.play_song_callback)
        self.change_voice_srv = self.create_service(ChangeVoice, 'change_voice', self.change_voice_callback)
        self.list_voices_srv = self.create_service(ListVoices, 'list_voices', self.list_voices_callback)
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

        self.live_conversation_with_transcription_srv = self.create_service(
            LiveConversationWithTranscription,
            'live_conversation_with_transcription',
            self.live_conversation_with_transcription_callback
        )

        self.create_service(StartAudioRecording, 
                            'start_audio_recording', 
                            self.start_audio_recording_callback)
        self.create_service(StopAudioRecording, 
                            'stop_audio_recording', 
                            self.stop_audio_recording_callback)
        
        self.transcribe_audio_srv = self.create_service(
            TranscribeAudio, 
            'transcribe_audio', 
            self.transcribe_audio_callback
        )
        
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

        self.memory.subscribeToEvent("WordRecognized", "SpeechNode_ASR", "on_word_recognized")

        self.vocabulary = []
        self.is_listening = False

        # Audio Recorder
        self.local_recording_path = "/home/robotica/audio_recordings"
        Path(self.local_recording_path).mkdir(parents=True, exist_ok=True)
        self.get_logger().info(f"Audio recordings will be stored in: {self.local_recording_path}")


    def connect_to_naoqi(self):
        connected = False
        while not connected:
            try:
                self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
                self.tts = self.session.service('ALTextToSpeech')
                self.audio = self.session.service('ALAudioPlayer')
                self.audio_recorder = self.session.service("ALAudioRecorder")
                self.animated_speech = self.session.service("ALAnimatedSpeech")
                self.memory = self.session.service("ALMemory")
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

            self.get_logger().info(f"GPT-4o-mini response: {bot_reply}")
            
        except Exception as e:
            self.get_logger().error(f"Failed to fetch GPT response: {e}")
            response.bot_response = "Sorry, I couldn't process that."
            response.success = False
        return response

    def live_conversation_with_transcription_callback(self, request, response):
        try:
            self.get_logger().info(f"Received transcription: {request.transcription}")
            
            gpt_response = openai.chat.completions.create(
                model="gpt-4o-mini",
                messages=[
                    {"role": "system", "content": "You are a helpful robot assistant. Respond concisely. Answer always in spanish and as short as possible. Answer in plain text for a robot to read the answer properly. Also, try to answer in a dialog way and not with bullet points"},
                    {"role": "user", "content": request.transcription}
                ]
            )
            
            bot_reply = gpt_response.choices[0].message.content
            response.bot_response = bot_reply

            if self.tts:
                try:
                    #self.animated_speech.say(bot_reply)
                    self.get_logger().info("Second Speak avoided.")
                except Exception as tts_error:
                    self.get_logger().error(f"Error with animated speech: {tts_error}")
                    self.tts.say(bot_reply)
                response.success = True
                self.get_logger().info("Speech executed successfully.")
            else:
                self.get_logger().error("ALTextToSpeech service not available.")
                response.success = False

            self.get_logger().info(f"GPT-4o-mini response: {bot_reply}")

        except Exception as e:
            self.get_logger().error(f"Failed to fetch GPT response: {e}")
            response.bot_response = "An error occurred during processing."
            response.success = False

        return response

    
    def start_audio_recording_callback(self, request, response):
        try:
            # Ensure recordings are stored in /tmp/audio_recordings on NAO
            remote_directory = "/tmp/audio_recordings"
            filename = os.path.join(remote_directory, request.filename)

            # Stop any ongoing recording
            self.audio_recorder.stopMicrophonesRecording()
            self.get_logger().info("Stopped previous recording (if any).")

            self.get_logger().info(f"Starting audio recording with filename: {filename}")

            channels = [0, 0, 1, 0]  # Front microphone
            self.audio_recorder.startMicrophonesRecording(filename, "wav", 16000, channels)
            self.get_logger().info(f"Audio recording started: {filename}")
            response.success = True
        except RuntimeError as e:
            if "Already recording" in str(e):
                self.get_logger().warning("Already recording. Stopping and restarting.")
                try:
                    self.audio_recorder.stopMicrophonesRecording()
                    self.audio_recorder.startMicrophonesRecording(filename, "wav", 16000, channels)
                    response.success = True
                except Exception as retry_error:
                    self.get_logger().error(f"Failed to restart audio recording: {retry_error}")
                    response.success = False
            else:
                self.get_logger().error(f"Failed to start audio recording: {e}")
                response.success = False
        except Exception as e:
            self.get_logger().error(f"Failed to start audio recording: {e}")
            response.success = False
        return response


    def stop_audio_recording_callback(self, request, response):
        try:
            self.audio_recorder.stopMicrophonesRecording()
            self.get_logger().info("Audio recording stopped.")
            response.success = True
        except Exception as e:
            self.get_logger().error(f"Failed to stop audio recording: {e}")
            response.success = False
        return response


    def retrieve_audio_from_nao(self, remote_filename, local_path):
        try:
            nao_ip = self.nao_ip  # Use NAO's IP address
            url = f"http://{nao_ip}:5000/audio_recordings/{remote_filename}"  # Reflect correct server route

            self.get_logger().info(f"Retrieving audio file from {url}")

            response = requests.get(url, stream=True)
            if response.status_code == 200:
                with open(local_path, 'wb') as f:
                    for chunk in response.iter_content(chunk_size=8192):
                        f.write(chunk)
                self.get_logger().info(f"Audio file saved to: {local_path}")
            else:
                self.get_logger().error(f"Failed to retrieve file. HTTP Status: {response.status_code}")
                raise Exception("HTTP request failed.")
        except Exception as e:
            self.get_logger().error(f"Failed to retrieve audio file from NAO: {e}")
            raise e


    def transcribe_audio_callback(self, request, response):
        try:
            local_file_path = os.path.join(self.local_recording_path, request.filepath)

            # Fetch the audio file from NAO
            self.retrieve_audio_from_nao(
                remote_filename=request.filepath,
                local_path=local_file_path
            )

            self.get_logger().info(f"Transcribing audio from file: {local_file_path}")
            with open(local_file_path, "rb") as audio_file:
                transcription = openai.audio.transcriptions.create(
                    model="whisper-1",
                    file=audio_file,
                    response_format="text"
                )
            response.transcription = transcription
            response.success = True
            self.get_logger().info(f"Transcription successful: {response.transcription}")
        except Exception as e:
            self.get_logger().error(f"Failed to transcribe audio: {e}")
            response.success = False
            response.transcription = "Transcription failed."
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
