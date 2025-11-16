#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from stereo_msgs.msg import DisparityImage
from sensor_msgs.msg import Image
import numpy as np

class DisparityToDepth(Node):
    def __init__(self):
        super().__init__('disparity_to_depth')
        self.sub = self.create_subscription(DisparityImage, 'disparity', self.callback, 10)
        self.pub = self.create_publisher(Image, 'depth', 10)
        
    def callback(self, msg):
        disp_data = np.frombuffer(msg.image.data, dtype=np.float32).reshape(
            msg.image.height, msg.image.width)
        
        depth = np.zeros_like(disp_data, dtype=np.float32)
        valid = disp_data > 0
        depth[valid] = (msg.f * msg.t) / disp_data[valid]
        
        depth_msg = Image()
        depth_msg.header = msg.header
        depth_msg.height = msg.image.height
        depth_msg.width = msg.image.width
        depth_msg.encoding = '32FC1'
        depth_msg.step = msg.image.width * 4
        depth_msg.data = depth.tobytes()
        
        self.pub.publish(depth_msg)

def main():
    rclpy.init()
    node = DisparityToDepth()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
