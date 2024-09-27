#!/usr/bin/env python3

import rclpy
from integration.integration_interface import IntegrationInterface
from transitions import Machine
import asyncio

class TaskOne:
    # Define states
    states = ['say_greeting', 'raise_hands', 'say_goodbye', 'task_completed', 'task_failed']

    def __init__(self):
        # Initialize IntegrationInterface node
        self.node = IntegrationInterface()

        # Initialize the state machine
        self.machine = Machine(model=self, states=TaskOne.states, initial='say_greeting')

        # Define transitions
        self.machine.add_transition(trigger='greeted', source='say_greeting', dest='raise_hands', after='raise_hands_action')
        self.machine.add_transition(trigger='hands_raised', source='raise_hands', dest='say_goodbye', after='say_goodbye_action')
        self.machine.add_transition(trigger='goodbye_said', source='say_goodbye', dest='task_completed')
        self.machine.add_transition(trigger='failed', source='*', dest='task_failed')

    def run(self):
        try:
            asyncio.run(self.node.wait_until_ready())
            self.say_greeting_action()
        except Exception as e:
            self.node.get_logger().error(f"Task failed: {e}")
            self.failed()

    def say_greeting_action(self):
        self.node.get_logger().info("State: Saying Greeting")
        try:
            asyncio.run(self.node.speak_async("Hello! I am NAO, pleased to meet you."))
            self.greeted()
        except Exception as e:
            self.node.get_logger().error(f"Greeting error: {e}")
            self.failed()

    def raise_hands_action(self):
        self.node.get_logger().info("State: Raising Hands")
        try:
            response = asyncio.run(self.node.raise_hands_async())
            if hasattr(response, 'success') and response.success:
                self.node.get_logger().info("Hands raised successfully.")
                self.hands_raised()
            else:
                self.node.get_logger().error("Failed to raise hands.")
                self.failed()
        except Exception as e:
            self.node.get_logger().error(f"Raise hands error: {e}")
            self.failed()

    def say_goodbye_action(self):
        self.node.get_logger().info("State: Saying Goodbye")
        try:
            asyncio.run(self.node.speak_async("Goodbye! Have a nice day."))
            self.goodbye_said()
        except Exception as e:
            self.node.get_logger().error(f"Goodbye error: {e}")
            self.failed()

    def task_completed(self):
        self.node.get_logger().info("Task Completed Successfully.")

    def task_failed(self):
        self.node.get_logger().info("Task Failed.")

def main():
    rclpy.init()
    task = TaskOne()
    task.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
