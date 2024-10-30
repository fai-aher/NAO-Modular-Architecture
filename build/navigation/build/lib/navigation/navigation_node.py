#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from navigation_interfaces.srv import MoveRobot
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionServer
import qi  # NAOqi SDK
import time
import math

class Pose2D:
    def __init__(self, x=0.0, y=0.0, theta=0.0):
        self.x = x
        self.y = y
        self.theta = theta  # En radianes

    def __mul__(self, other):
        """Composición de poses."""
        new_x = self.x + other.x * math.cos(self.theta) - other.y * math.sin(self.theta)
        new_y = self.y + other.x * math.sin(self.theta) + other.y * math.cos(self.theta)
        new_theta = self.theta + other.theta
        new_theta = self.modulo2PI(new_theta)
        return Pose2D(new_x, new_y, new_theta)

    def diff(self, other):
        """Diferencia entre poses."""
        dx = other.x - self.x
        dy = other.y - self.y
        dtheta = self.modulo2PI(other.theta - self.theta)
        return Pose2D(dx, dy, dtheta)

    @staticmethod
    def modulo2PI(angle):
        """Normalizar el ángulo entre 0 y 2π."""
        return angle % (2 * math.pi)

    def to_vector(self):
        return {'x': self.x, 'y': self.y, 'theta': self.theta}

class NavigationNode(Node):
    def __init__(self):
        super().__init__('navigation_node')
        self.srv = self.create_service(MoveRobot, 'move_robot', self.move_robot_callback)
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
        
        # Umbrales de error
        self.positionErrorThresholdPos = 0.01  # metros
        self.positionErrorThresholdAng = 0.03  # radianes

    def move_robot_callback(self, request, response):
        try:
            # Obtener parámetros del servicio
            x = request.x
            y = request.y
            theta_deg = request.theta
            theta = math.radians(theta_deg)  # Convertir a radianes

            self.get_logger().info(f'Moviendo a NAO a x: {x}, y: {y}, theta: {theta_deg}°')

            # Obtener posición inicial
            current_position = self.motion.getRobotPosition(True)  # Relativo al marco de referencia
            init_pose = Pose2D(current_position[0], current_position[1], current_position[2])

            # Calcular posición objetivo
            target_pose = Pose2D(x, y, theta)
            expected_end_pose = init_pose * target_pose

            # Ejecutar movimiento
            self.motion.moveTo(x, y, theta)

            # Obtener posición real después del movimiento
            real_position = self.motion.getRobotPosition(False)  # Relativo al marco de referencia
            real_end_pose = Pose2D(real_position[0], real_position[1], real_position[2])

            # Calcular error de posición
            position_error = init_pose.diff(real_end_pose)
            position_error.theta = Pose2D.modulo2PI(position_error.theta)

            self.get_logger().info(f'Posición real: {real_end_pose.to_vector()}')
            self.get_logger().info(f'Posición esperada: {expected_end_pose.to_vector()}')
            self.get_logger().info(f'Error de posición: {position_error.to_vector()}')

            # Verificar si el error está dentro de los umbrales
            if (abs(position_error.x) < self.positionErrorThresholdPos and
                abs(position_error.y) < self.positionErrorThresholdPos and
                abs(position_error.theta) < self.positionErrorThresholdAng):
                response.success = True
                response.message = 'Movimiento completado exitosamente.'
                self.get_logger().info('Movimiento exitoso dentro de los umbrales.')
            else:
                response.success = False
                response.message = f'Error en movimiento: {position_error.to_vector()}'
                self.get_logger().warn('Movimiento con errores fuera de los umbrales.')

        except Exception as e:
            self.get_logger().error(f'Error al mover el robot: {e}')
            response.success = False
            response.message = str(e)

        return response

def main(args=None):
    rclpy.init(args=args)
    node = NavigationNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
