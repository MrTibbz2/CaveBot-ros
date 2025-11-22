#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2 as cv2

import sys
import os
# Add HITNET library to path using relative workspace location
workspace_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
hitnet_path = os.path.join(workspace_root, 'libs', 'ONNX-HITNET-Stereo-Depth-estimation')
sys.path.append(hitnet_path)
from hitnet import HitNet, ModelType

class HitnetDepthNode(Node):
    def __init__(self):
        super().__init__('hitnet_depth_node')
        self.bridge = CvBridge()
        self.left_img = None
        self.right_img = None
        
        # Use relative path to model
        workspace_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
        model_path = os.path.join(workspace_root, 'libs', 'ONNX-HITNET-Stereo-Depth-estimation', 'models', 'eth3d', 'saved_model_720x1280', 'model_float32_opt.onnx')
        self.depth_estimator = HitNet(model_path, ModelType.eth3d)
        self.get_logger().info('HitNet model loaded')
        
        self.create_subscription(Image, '/left_camera/image_raw', self.left_callback, 10)
        self.create_subscription(Image, '/right_camera/image_raw', self.right_callback, 10)
        self.pub_depth = self.create_publisher(Image, 'depth/image_raw', 10)
        
    def left_callback(self, msg):
        self.left_img = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        self.process()
        
    def right_callback(self, msg):
        self.right_img = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        
    def process(self):
        if self.left_img is None or self.right_img is None:
            return
        self.left_img = cv2.resize(self.left_img, (1280, 720))
        self.right_img = cv2.resize(self.right_img, (1280, 720))
        disparity = self.depth_estimator(self.left_img, self.right_img)
        depth_msg = self.bridge.cv2_to_imgmsg(self.depth_estimator.draw_disparity(), 'bgr8')
        self.pub_depth.publish(depth_msg)
        self.get_logger().info('HITNET depth frame generated')

def main():
    rclpy.init()
    node = HitnetDepthNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
