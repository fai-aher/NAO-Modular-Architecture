#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from navigation_interfaces.action import NavigationToPose as NavigateToPose
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionServer
import qi  # NAOqi SDK
import time

class NavigationNode(Node):
    def __init__(self):
        super().__init__('navigation_node')
        self.action_server = ActionServer(
            self,
            NavigateToPose,
            'navigate_to_pose',
            self.execute_callback)
        self.get_logger().info('Navigation node started.')

        # Initialize NAOqi session
        self.nao_ip = '192.168.212.6'  
        self.nao_port = 9559

        self.session = qi.Session()
        try:
            self.session.connect(f"tcp://{self.nao_ip}:{self.nao_port}")
            self.motion = self.session.service('ALMotion')
            self.posture = self.session.service('ALRobotPosture')
            self.get_logger().info('Connected to NAOqi.')
        except RuntimeError as e:
            self.get_logger().error(f"Cannot connect to NAOqi at {self.nao_ip}:{self.nao_port}. Error: {e}")
            raise e

    def execute_callback(self, goal_handle):
        self.get_logger().info('Received navigation goal.')
        goal = goal_handle.request
        pose = goal.pose

        # Convert PoseStamped to NAOqi format if necessary
        # Placeholder: Implement actual navigation logic
        try:
            # Example: Move to a target position using NAO's motion service
            x = pose.pose.position.x
            y = pose.pose.position.y
            theta = 0  # Orientation placeholder

            self.motion.moveTo(x, y, theta)
            self.get_logger().info(f"Navigated to x: {x}, y: {y}, theta: {theta}")

            # Simulate feedback
            for i in range(5):
                feedback = NavigateToPose.Feedback()
                feedback.distance_remaining = max(0.0, 1.0 - i * 0.2)
                goal_handle.publish_feedback(feedback)
                time.sleep(1)

            goal_handle.succeed()
            result = NavigateToPose.Result()
            result.success = True
            return result
        except Exception as e:
            self.get_logger().error(f"Navigation failed: {e}")
            goal_handle.abort()
            result = NavigateToPose.Result()
            result.success = False
            return result

def main(args=None):
    rclpy.init(args=args)
    node = NavigationNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
