#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import numpy as np


class CameraSyncChecker(Node):
    def __init__(self):
        super().__init__('camera_sync_checker')
        
        self.left_stamp = None
        self.right_stamp = None
        self.deltas = []
        self.last_left = None
        
        self.create_subscription(Image, '/camleft_node/image_raw', self.left_callback, 10)
        self.create_subscription(Image, '/camright_node/image_raw', self.right_callback, 10)
        
        self.get_logger().info('Camera sync checker started')
    
    def left_callback(self, msg):
        self.left_stamp = msg.header.stamp
        self.last_left = msg.header.stamp
        if len(self.deltas) == 0:
            print("Received first left frame", flush=True)
    
    def right_callback(self, msg):
        if len(self.deltas) == 0:
            print("Received first right frame", flush=True)
        if self.last_left is None:
            return
        
        delta_ns = (self.last_left.sec - msg.header.stamp.sec) * 1e9 + \
                   (self.last_left.nanosec - msg.header.stamp.nanosec)
        delta_ms = delta_ns / 1e6
        
        self.deltas.append(delta_ms)
        
        avg = np.mean(self.deltas)
        std = np.std(self.deltas)
        
        output = f'Delta: {delta_ms:+7.2f} ms | Avg: {avg:+7.2f} ms | Std: {std:6.2f} ms | N: {len(self.deltas)}'
        print(output, flush=True)
        self.get_logger().info(output)


def main(args=None):
    rclpy.init(args=args)
    node = CameraSyncChecker()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
