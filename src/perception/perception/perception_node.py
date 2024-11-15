#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects, SetEyeColor
import qi
import time
from geometry_msgs.msg import Pose
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class PerceptionNode(Node):
    def __init__(self):
        super().__init__('perception_node')
        self.srv = self.create_service(DetectObjects, 'detect_objects', self.detect_objects_callback)
        self.set_eye_color_srv = self.create_service(SetEyeColor, 'set_eye_color', self.set_eye_color_callback)

        self.bridge = CvBridge()

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'
        self.nao_port = 9559

        self.session = qi.Session()
        self.connect_to_naoqi()

        self.leds = self.session.service('ALLeds')

        self.get_logger().info('Perception node started.')


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


    def detect_objects_callback(self, request, response):
        # Placeholder: TODO: Here goes object detection implementation

        self.get_logger().info('Detecting objects...')
        response.success = True
        response.object_names = ['object1', 'object2']
        response.object_poses = [Pose(), Pose()]
        return response

    def set_eye_color_callback(self, request, response):
        try:
            color = request.color.lower()
            color_map = {
                "red": [1, 0, 0],
                "green": [0, 1, 0],
                "blue": [0, 0, 1],
                "purple": [0.5, 0, 0.5],
                "white": [1, 1, 1],
            }
            if color not in color_map:
                response.success = False
                response.message = f"Invalid color: {color}"
            else:
                rgb = color_map[color]
                self.leds.fadeRGB("FaceLeds", *rgb, 0.5)
                response.success = True
                response.message = f"Set eyes to {color}"
        except Exception as e:
            response.success = False
            response.message = f"Failed to set eye color: {str(e)}"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = PerceptionNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
