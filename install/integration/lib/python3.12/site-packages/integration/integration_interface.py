#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects
from manipulation_interfaces.srv import MoveArm
from navigation_interfaces.action import NavigationToPose as NavigateToPose
from geometry_msgs.msg import Point, PoseStamped
from speech_interfaces.srv import Speak, PlaySong
from rclpy.action import ActionClient
import time

class IntegrationInterface(Node):
    def __init__(self):
        super().__init__('integration_interface')
        self.get_logger().info('Integration interface node started.')

        # Create service clients
        self.detect_objects_client = self.create_client(DetectObjects, 'detect_objects')
        self.move_arm_client = self.create_client(MoveArm, 'move_arm')
        self.speak_client = self.create_client(Speak, 'speak')
        self.play_song_client = self.create_client(PlaySong, 'play_song')

        # Create action client
        self.navigate_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        # Wait for services and action server
        self.wait_for_services()

    def wait_for_services(self):
        self.get_logger().info('Waiting for services and action server to be available...')
        services = [
            (self.detect_objects_client, 'DetectObjects'),
            (self.move_arm_client, 'MoveArm'),
            (self.speak_client, 'Speak'),
            (self.play_song_client, 'PlaySong')
        ]

        for client, name in services:
            while not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'Waiting for {name} service...')

        while not self.navigate_to_pose_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('Waiting for NavigateToPose action server...')

        self.get_logger().info('All services and action server are available.')

    def speak(self, text):
        if not self.speak_client.service_is_ready():
            self.get_logger().error('Speak service is not available.')
            return False
        request = Speak.Request()
        request.text = text
        try:
            response = self.speak_client.call(request)
            self.get_logger().info(f"Speak response: success={response.success}")
            return response.success
        except Exception as e:
            self.get_logger().error(f"Speak service call failed: {e}")
            return False

    def raise_hands(self):
        if not self.move_arm_client.service_is_ready():
            self.get_logger().error('MoveArm service is not available.')
            return False
        
        request = MoveArm.Request()
        # Define target positions to raise both hands
        target_position = Point()
        target_position.x = 0.0  # Forward (not used in current mapping)
        target_position.y = 0.5  # Sideways to raise arms
        target_position.z = 0.0  # Upwards (not used in current mapping)

        request.target_position = target_position

        try:
            response = self.move_arm_client.call(request)
            self.get_logger().info(f"MoveArm response: success={response.success}")
            return response.success
        except Exception as e:
            self.get_logger().error(f"MoveArm service call failed: {e}")
            return False

    def detect_objects(self):
        if not self.detect_objects_client.service_is_ready():
            self.get_logger().error('DetectObjects service is not available.')
            return None
        request = DetectObjects.Request()
        try:
            response = self.detect_objects_client.call(request)
            return response
        except Exception as e:
            self.get_logger().error(f"DetectObjects service call failed: {e}")
            return None

    def play_song(self, song_path):
        if not self.play_song_client.service_is_ready():
            self.get_logger().error('PlaySong service is not available.')
            return False
        request = PlaySong.Request()
        request.song_path = song_path
        try:
            response = self.play_song_client.call(request)
            self.get_logger().info(f"PlaySong response: success={response.success}, message={response.message}")
            return response.success
        except Exception as e:
            self.get_logger().error(f"PlaySong service call failed: {e}")
            return False

    def navigate_to_pose(self, pose_stamped: PoseStamped):
        if not self.navigate_to_pose_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('NavigateToPose action server is not available.')
            return False
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose_stamped
        try:
            send_goal_future = self.navigate_to_pose_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
            rclpy.spin_until_future_complete(self, send_goal_future)
            goal_handle = send_goal_future.result()
            if not goal_handle.accepted:
                self.get_logger().error('Navigation goal rejected.')
                return False
            self.get_logger().info('Navigation goal accepted.')

            get_result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, get_result_future)
            result = get_result_future.result().result
            self.get_logger().info('Navigation goal succeeded.')
            return True
        except Exception as e:
            self.get_logger().error(f"NavigateToPose action call failed: {e}")
            return False

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Distance remaining: {feedback.distance_remaining}')

def main(args=None):
    rclpy.init(args=args)
    node = IntegrationInterface()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
