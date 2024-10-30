#!/usr/bin/env python3

from flask import Flask, request, jsonify
from flask_cors import CORS
import threading
import rclpy
from rclpy.node import Node
from manipulation_interfaces.srv import StandUp, ToggleAwareness, SetPosture
from navigation_interfaces.srv import MoveRobot

app = Flask(__name__)
CORS(app)

class ROS2Node(Node):
    def __init__(self):
        super().__init__('rest_api_node')

        # Clients
        self.cli_stand_up = self.create_client(StandUp, 'stand_up')
        self.cli_toggle_awareness = self.create_client(ToggleAwareness, 'toggle_awareness')
        self.cli_set_posture = self.create_client(SetPosture, 'set_posture')
        self.cli_move_robot = self.create_client(MoveRobot, 'move_robot')

        while not self.cli_toggle_awareness.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando servicio toggle_awareness...')

        while not self.cli_stand_up.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for stand_up service...')

        while not self.cli_set_posture.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for set_posture service...')

        while not self.cli_move_robot.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Esperando servicio move_robot...')

    def call_stand_up(self):
        req = StandUp.Request()
        future = self.cli_stand_up.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result().success
        else:
            self.get_logger().error('Exception while calling stand_up service')
            return False

    def call_set_posture(self, posture_name):
        req = SetPosture.Request()
        req.posture_name = posture_name
        future = self.cli_set_posture.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result().success
        else:
            self.get_logger().error('Exception while calling set_posture service')
            return False
    
    def toggle_awareness_callback(self, enable):
        req = ToggleAwareness.Request()
        req.enable = enable
        future = self.cli_toggle_awareness.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result().success, future.result().message
        else:
            self.get_logger().error('Error al llamar al servicio toggle_awareness')
            return False, 'Error'
        
    def move_robot_callback(self, x, y, theta):
        req = MoveRobot.Request()
        req.x = x
        req.y = y
        req.theta = theta
        future = self.cli_move_robot.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result().success, future.result().message
        else:
            self.get_logger().error('Error al llamar al servicio move_robot')
            return False, 'Error'

def ros2_thread(node):
    rclpy.spin(node)

ros_node = None

@app.route('/toggle_awareness', methods=['POST'])
def toggle_awareness():
    data = request.get_json()
    enable = data.get('enable', False)
    success, message = ros_node.toggle_awareness_callback(enable)
    return jsonify({'success': success, 'message': message})

@app.route('/stand_up', methods=['POST'])
def stand_up():
    success = ros_node.call_stand_up()
    return jsonify({'success': success})

@app.route('/set_posture', methods=['POST'])
def set_posture():
    data = request.get_json()
    posture_name = data.get('posture_name', 'Stand')
    success = ros_node.call_set_posture(posture_name)
    return jsonify({'success': success})

@app.route('/move_robot', methods=['POST'])
def move_robot():
    data = request.get_json()
    x = float(data.get('x', 0.0))
    y = float(data.get('y', 0.0))
    theta = float(data.get('theta', 0.0))
    success, message = ros_node.move_robot_callback(x, y, theta)
    return jsonify({'success': success, 'message': message})

def main(args=None):
    global ros_node
    rclpy.init(args=args)
    ros_node = ROS2Node()
    thread = threading.Thread(target=ros2_thread, args=(ros_node,), daemon=True)
    thread.start()
    app.run(host='0.0.0.0', port=5000)

if __name__ == '__main__':
    main()
