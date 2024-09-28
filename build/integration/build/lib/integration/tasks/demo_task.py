#!/usr/bin/env python3

import rclpy
from integration.integration_interface import IntegrationInterface
from transitions import Machine
import time

class DemoTask:
    # Define states
    states = [
        'sit_down',
        'greet',
        'raise_hands',
        'tell_about',
        'task_completed',
        'task_failed'
    ]

    def __init__(self):
        # Initialize IntegrationInterface node
        self.node = IntegrationInterface()

        # Initialize the state machine
        self.machine = Machine(model=self, states=DemoTask.states, initial='sit_down')

        # Define transitions
        self.machine.add_transition(trigger='sat_down', source='sit_down', dest='greet', after='greet_action')
        self.machine.add_transition(trigger='greeted', source='greet', dest='raise_hands', after='raise_hands_action')
        self.machine.add_transition(trigger='hands_raised', source='raise_hands', dest='tell_about', after='tell_about_action')
        self.machine.add_transition(trigger='told_about', source='tell_about', dest='task_completed')
        self.machine.add_transition(trigger='failed', source='*', dest='task_failed', after='task_failed_action')

    def run(self):
        try:
            self.sit_down_action()
        except Exception as e:
            self.node.get_logger().error(f"Demo Task failed: {e}")
            self.failed()

    def sit_down_action(self):
        self.node.get_logger().info("State: Sitting Down")
        success = self.node.set_posture("Sit")
        if success:
            self.sat_down()
        else:
            self.node.get_logger().error("Sit down action failed.")
            self.failed()

    def greet_action(self):
        self.node.get_logger().info("State: Greeting")
        success = self.node.speak("Hello! I am NAO, it's a pleasure to meet you.", animated=True)
        if success:
            self.greeted()
        else:
            self.node.get_logger().error("Greet action failed.")
            self.failed()

    def raise_hands_action(self):
        self.node.get_logger().info("State: Raising Hands")
        success = self.node.raise_hands()
        if success:
            self.hands_raised()
        else:
            self.node.get_logger().error("Raise Hands action failed.")
            self.failed()

    def tell_about_action(self):
        self.node.get_logger().info("State: Telling About Himself")
        about_text = (
            "I am 18 years old and I was developed by SoftBank Robotics. "
            "I can interact with humans and assist in various tasks."
            "Right now, I can do a lot of actions thanks to the implementation I have of a modular software architecture."
        )
        success = self.node.speak(about_text, animated=True)
        if success:
            self.told_about()
        else:
            self.node.get_logger().error("Tell About action failed.")
            self.failed()

    def task_completed_action(self):
        self.node.get_logger().info("Demo Task Completed Successfully.")

    def task_failed_action(self):
        self.node.get_logger().info("Demo Task Failed.")

def main(args=None):
    rclpy.init(args=args)
    task = DemoTask()
    task.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
