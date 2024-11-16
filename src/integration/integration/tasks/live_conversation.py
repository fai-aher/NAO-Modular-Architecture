#!/usr/bin/env python3

import rclpy
from integration.integration_interface import IntegrationInterface
from transitions import Machine
import time

class LiveConversationTask:
    states = ['idle', 'waiting_for_touch', 'recording', 'processing', 'speaking', 'finished']

    def __init__(self):
        self.node = IntegrationInterface()
        self.machine = Machine(model=self, states=LiveConversationTask.states, initial='idle')

        # Define transitions
        self.machine.add_transition('wait_for_touch', 'idle', 'waiting_for_touch', after='prompt_user')
        self.machine.add_transition('start_recording', 'waiting_for_touch', 'recording', after='record_audio')
        self.machine.add_transition('process_audio', 'recording', 'processing', after='transcribe_and_process')
        self.machine.add_transition('give_answer', 'processing', 'speaking', after='speak_response')
        self.machine.add_transition('wait_for_next_touch', 'speaking', 'waiting_for_touch', after='prompt_user')
        self.machine.add_transition('finish_task', '*', 'finished', after='cleanup')

    def run(self):
        try:
            self.start_task()
        except Exception as e:
            self.node.get_logger().error(f"LiveConversationTask failed: {e}")
            self.finish_task()

    def start_task(self):
        self.node.get_logger().info("Task started.")
        self.node.set_eye_color("blue")
        self.node.speak("Estoy listo para conversar contigo, por favor toca mi cabeza cuando quieras preguntarme algo.", animated=True)
        self.wait_for_touch()

    def prompt_user(self):
        self.node.get_logger().info("Waiting for head touch...")
        while True:
            if self.node.detect_head_touch():
                self.node.get_logger().info("Head touch detected. Starting audio recording...")
                self.start_recording()
                break
            rclpy.spin_once(self.node, timeout_sec=0.1)

    def record_audio(self):
        timestamp = int(time.time())
        remote_filename = f"question_{timestamp}.wav"  # File name for NAO's /tmp directory
        remote_path = remote_filename
        
        if not self.node.start_audio_recording(remote_path):
            self.node.get_logger().error("Failed to start audio recording.")
            self.finish_task()
            return
        
        self.node.get_logger().info("Touch head again to stop recording.")
        time.sleep(3)
        while not self.node.detect_head_touch():
            rclpy.spin_once(self.node, timeout_sec=0.1)
        
        if not self.node.stop_audio_recording():
            self.node.get_logger().error("Failed to stop audio recording.")
            self.finish_task()
            return
        
        self.node.get_logger().info(f"Audio recording completed: {remote_path}")
        
        # Trigger process_audio only once
        self.process_audio(remote_filename)


    def transcribe_and_process(self, remote_filename):
        local_filename = f"/home/robotica/audio_recordings/{remote_filename}"
        if not self.node.retrieve_audio_from_nao(remote_filename, local_filename):
            self.node.get_logger().error("Failed to retrieve audio file from NAO.")
            self.finish_task()
            return

        transcription = self.node.transcribe_audio(local_filename)
        self.node.get_logger().info(f"Transcription: {transcription}")
        success, response = self.node.live_conversation_with_transcription(transcription)
        if success:
            self.node.response_text = response
            self.give_answer()
        else:
            self.node.get_logger().error("Failed to get response from GPT.")
            self.finish_task()

    def speak_response(self):
        self.node.get_logger().info("Speaking response...")
        self.node.speak(self.node.response_text, animated=True)
        self.wait_for_next_touch()

    def cleanup(self):
        self.node.get_logger().info("Task finished.")
        self.node.set_eye_color("white")

def main(args=None):
    rclpy.init(args=args)
    task = LiveConversationTask()
    task.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
