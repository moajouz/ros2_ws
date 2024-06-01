#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from interfaces.msg import Tutorial

class MyNode(Node):
    def __init__(self):
        super().__init__("publisher")
        self.get_logger().info("Ros2 node started")
        self.publisher = self.create_publisher(Tutorial, "person", 10)
        self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Tutorial()
        msg.first_name="Mohamad"
        msg.last_name="Alajouz"
        msg.age=22
        self.publisher.publish(msg) 


def main(args=None):
    rclpy.init(args=args) #initialize ros2 communication

    #this is an example for running one node per program, you can later run multiple nodes in a single program
    node = MyNode()
    rclpy.spin(node)

    rclpy.shutdown() #shutdown ros2 communication

if __name__ == '__main__':
    main()