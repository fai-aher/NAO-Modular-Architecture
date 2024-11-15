#!/usr/bin/env python3

import rclpy
from integration.integration_interface import IntegrationInterface
from transitions import Machine

class LiveConversationTask:
    # Define states
    states = ['idle', 'listening', 'processing', 'speaking', 'finished']

    def __init__(self):
        # Initialize IntegrationInterface node
        self.node = IntegrationInterface()

        # Initialize the state machine
        self.machine = Machine(model=self, states=LiveConversationTask.states, initial='idle')

        # Define transitions
        self.machine.add_transition('start_listening', 'idle', 'listening', after='listen_for_start')
        self.machine.add_transition('ask_question', 'listening', 'processing', after='process_question')
        self.machine.add_transition('give_answer', 'processing', 'speaking', after='speak_response')
        self.machine.add_transition('continue_listening', 'speaking', 'listening', after='listen_for_questions')
        self.machine.add_transition('stop_task', '*', 'finished')

    def run(self):
        try:
            self.start_task()
        except Exception as e:
            self.node.get_logger().error(f"LiveConversationTask failed: {e}")
            self.stop_task()

    def start_task(self):
        self.node.get_logger().info("Task started.")

        self.node.set_eye_color("purple")  # Set eyes to purple
        self.node.speak("Hola, mi nombre es NAO. Estoy listo para conversar contigo. Por favor, pregúntame lo que quieras cuando mis ojos estén de color morado y termine de hablarte.", animated=True)
        self.start_listening()

    def listen_for_start(self):
        while True:
            success, recognized_text = self.node.recognize_speech()
            if success:
                if "Conversemos" in recognized_text:
                    self.listen_for_questions()
                    break
                elif "Adiós" in recognized_text:
                    self.stop_task()
                    break

    def listen_for_questions(self):
        while True:
            self.node.get_logger().info("Listening for questions...")
            success, recognized_text = self.node.recognize_speech()
            if success:
                if "Adiós" in recognized_text:
                    self.stop_task()
                    break
                else:
                    self.node.get_logger().info(f"Question recognized: {recognized_text}")
                    self.ask_question()

    def process_question(self):
        self.node.get_logger().info("Processing question...")
        response = self.node.start_live_conversation("Question received.")
        self.node.response_text = response
        self.give_answer()

    def speak_response(self):
        self.node.get_logger().info("Speaking response...")
        self.node.speak(self.node.response_text, animated=True)
        self.continue_listening()

    def stop_task(self):
        self.node.get_logger().info("Task finished.")
        self.node.set_eye_color("white")  # Reset eye color

def main(args=None):
    rclpy.init(args=args)
    task = LiveConversationTask()
    task.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
