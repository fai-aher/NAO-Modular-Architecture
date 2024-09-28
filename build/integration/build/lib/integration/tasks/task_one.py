#!/usr/bin/env python3

import rclpy
from integration.integration_interface import IntegrationInterface
from transitions import Machine

class TaskOne:
    # Define states
    states = ['say_greeting', 'raise_hands', 'say_goodbye', 'task_completed', 'task_failed']

    def __init__(self):
        # Initialize IntegrationInterface node
        self.node = IntegrationInterface()

        # Initialize the state machine
        self.machine = Machine(model=self, states=TaskOne.states, initial='say_greeting')

        # Define transitions with synchronous callbacks
        self.machine.add_transition(trigger='greeted', source='say_greeting', dest='raise_hands', after='raise_hands_action')
        self.machine.add_transition(trigger='hands_raised', source='raise_hands', dest='say_goodbye', after='say_goodbye_action')
        self.machine.add_transition(trigger='goodbye_said', source='say_goodbye', dest='task_completed', after='task_completed_action')
        self.machine.add_transition(trigger='failed', source='*', dest='task_failed', after='task_failed_action')

    def run(self):
        try:
            self.say_greeting_action()
        except Exception as e:
            self.node.get_logger().error(f"Task failed: {e}")
            self.failed()

    def say_greeting_action(self):
        self.node.get_logger().info("State: Saying Greeting")
        success = self.node.speak("Hello! I am NAO, pleased to meet you.")
        if success:
            self.greeted()
        else:
            self.node.get_logger().error("Speak action failed.")
            self.failed()

    def raise_hands_action(self):
        self.node.get_logger().info("State: Raising Hands")
        success = self.node.raise_hands()
        if success:
            self.hands_raised()
        else:
            self.node.get_logger().error("Failed to raise hands.")
            self.failed()

    def say_goodbye_action(self):
        self.node.get_logger().info("State: Saying Goodbye")
        success = self.node.speak("Goodbye! Have a nice day.")
        if success:
            self.goodbye_said()
        else:
            self.node.get_logger().error("Goodbye action failed.")
            self.failed()

    def task_completed_action(self):
        self.node.get_logger().info("Task Completed Successfully.")

    def task_failed_action(self):
        self.node.get_logger().info("Task Failed.")

def main(args=None):
    rclpy.init(args=args)
    task = TaskOne()
    task.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
