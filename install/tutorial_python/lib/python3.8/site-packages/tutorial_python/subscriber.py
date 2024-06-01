#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interfaces.msg import Tutorial

class pose_sub(Node):
    def __init__(self):
        super().__init__("subscriber")
        self.subscriber = self.create_subscription(Tutorial, "person", self.pose_callback, 10)

    def pose_callback(self, msg: Tutorial):
        self.get_logger().info(f"\nName: {msg.first_name} {msg.last_name} \nAge: {msg.age}")    


def main(args=None):
    rclpy.init(args=args)
    node = pose_sub()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()