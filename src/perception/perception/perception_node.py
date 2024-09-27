#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects
from geometry_msgs.msg import Pose
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class PerceptionNode(Node):
    def __init__(self):
        super().__init__('perception_node')
        self.srv = self.create_service(DetectObjects, 'detect_objects', self.detect_objects_callback)
        self.bridge = CvBridge()
        self.get_logger().info('Perception node started.')

    def detect_objects_callback(self, request, response):
        # Placeholder: TODO: Here goes object detection implementation

        self.get_logger().info('Detecting objects...')
        response.success = True
        response.object_names = ['object1', 'object2']
        response.object_poses = [Pose(), Pose()]
        return response

def main(args=None):
    rclpy.init(args=args)
    node = PerceptionNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
