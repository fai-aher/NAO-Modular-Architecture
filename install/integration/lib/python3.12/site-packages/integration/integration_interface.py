#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from perception_interfaces.srv import DetectObjects
from manipulation_interfaces.srv import MoveArm
from navigation_interfaces.action import NavigationToPose as NavigateToPose
from geometry_msgs.msg import Point
from speech_interfaces.srv import Speak, PlaySong
from rclpy.action import ActionClient

import asyncio

"""
The TaskInterface node initializes clients for all required services and actions.
Provides asynchronous methods (async def) for calling these services.
Waits for services and action servers to be available before proceeding.

The main function starts the node, but in practice, you might not run this node directly.

To make a task executable: chmod +x ~/ros_ws/src/nao_tasks/TaskOne.py for example.

rosdep install --from-paths src --ignore-src -r -y
colcon build

Si se modifican las interfaces o nodos, seguir estos pasos:

0. cd ~/nao_ws
1. rm -rf build/ install/ log/
2. colcon build
3. source install/setup.bash

"""

class IntegrationInterface(Node):
    def __init__(self):
        super().__init__('integration_interface')
        self.get_logger().info('Integration interface node started.')

        # Create clients for services
        self.detect_objects_client = self.create_client(DetectObjects, 'detect_objects')
        self.move_arm_client = self.create_client(MoveArm, 'move_arm')
        self.speak_client = self.create_client(Speak, 'speak')
        self.play_song_client = self.create_client(PlaySong, 'play_song')

        # Create action client
        self.navigate_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        # Wait for services and action server
        self.wait_for_services()

    async def wait_until_ready(self):
        # Wait for the Speak service
        while not self.speak_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for Speak service...')

        # Wait for the MoveArm service
        while not self.move_arm_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for MoveArm service...')

        self.get_logger().info('All services are available.')

    async def speak_async(self, text):
        request = Speak.Request()
        request.text = text
        future = self.speak_client.call_async(request)
        response = await future
        return response

    async def raise_hands_async(self):
        request = MoveArm.Request()
        # Define target positions to raise both hands
        target_position = Point()
        target_position.x = 0.0  # Forward
        target_position.y = 0.5  # Sideways to raise arms
        target_position.z = 0.0  # Upwards

        request.target_position = target_position

        future = self.move_arm_client.call_async(request)
        response = await future
        return response

    def wait_for_services(self):
        self.get_logger().info('Waiting for services and action server to be available...')
        self.detect_objects_client.wait_for_service()
        self.move_arm_client.wait_for_service()
        self.speak_client.wait_for_service()
        self.play_song_client.wait_for_service()
        self.navigate_to_pose_client.wait_for_server()
        self.get_logger().info('All services and action server are available.')

    async def detect_objects(self):
        request = DetectObjects.Request()
        future = self.detect_objects_client.call_async(request)
        response = await future
        return response

    async def move_arm(self, target_position):
        request = MoveArm.Request()
        request.target_position = target_position
        future = self.move_arm_client.call_async(request)
        response = await future
        return response

    async def speak(self, text):
        request = Speak.Request()
        request.text = text
        future = self.speak_client.call_async(request)
        response = await future
        return response

    async def play_song(self, song_path):
        request = PlaySong.Request()
        request.song_path = song_path
        future = self.play_song_client.call_async(request)
        response = await future
        return response
    
    async def raise_hands(self):
        request = MoveArm.Request()
        # Define target positions for both arms to raise hands
        # NAO has 10 joints; we'll assume MoveArm controls specific joints
        # Here, we'll set x=0.0, y=0.5, z=0.0 for both arms to raise them
        target_position = Point()
        target_position.x = 0.0
        target_position.y = 0.5
        target_position.z = 0.0
        request.target_position = target_position

        future = self.move_arm_client.call_async(request)
        response = await future
        return response


    async def navigate_to_pose(self, pose_stamped):
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose_stamped
        send_goal_future = self.navigate_to_pose_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        goal_handle = await send_goal_future

        if not goal_handle.accepted:
            self.get_logger().error('Navigation goal rejected.')
            return NavigateToPose.Result()

        self.get_logger().info('Navigation goal accepted.')
        get_result_future = goal_handle.get_result_async()
        result_future = await get_result_future
        return result_future.result()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Distance remaining: {feedback.distance_remaining}')

def main(args=None):
    rclpy.init(args=args)
    node = IntegrationInterface()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()