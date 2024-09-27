#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
import qi

class NaoTalker(Node):
    def __init__(self):
        super().__init__('nao_talker')
        self.nao_ip = '192.168.212.6'  # NAO's IP Address
        self.nao_port = 9559

        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
            self.get_logger().info('Connected to NAO robot')
        except RuntimeError as e:
            self.get_logger().error(f'Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}')
            sys.exit(1)

        self.tts = self.session.service('ALTextToSpeech')
        self.motion = self.session.service('ALMotion')
        self.posture = self.session.service('ALRobotPosture')

        self.timer = self.create_timer(5.0, self.timer_callback)

    def timer_callback(self):
        self.tts.say('Hello, I am NAO! I can now be controlled remotely with the ROS 2 framework!')
        self.get_logger().info('NAO says hello')
        self.wave()

    def wave(self):
        self.posture.goToPosture('StandInit', 0.5)

        # Defition of the wave animation for NAO
        names = ['RShoulderPitch', 'RShoulderRoll', 'RElbowYaw', 'RElbowRoll', 'RWristYaw', 'RHand']
        angles = [-1.0, -0.2, 1.5, 1.0, 0.3, 1.0]
        times = [1.0] * len(names)

        self.motion.angleInterpolation(names, angles, times, True)
        self.get_logger().info('NAO waved')

def main(args=None):
    rclpy.init(args=args)
    nao_talker = NaoTalker()
    rclpy.spin(nao_talker)
    nao_talker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
