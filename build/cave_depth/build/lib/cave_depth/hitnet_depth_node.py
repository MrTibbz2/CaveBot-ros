#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2 as cv2
import sys
sys.path.append('/home/pi/CaveBot-ros/testing/ONNX-HITNET-Stereo-Depth-estimation')
from hitnet import HitNet, ModelType
import numpy as np

class HitnetDepthNode(Node):
    def __init__(self):
        super().__init__('hitnet_depth_node')
        self.bridge = CvBridge()
        self.left_img = None
        self.right_img = None

        # Use FP32 optimized model
        model_path = "/home/pi/CaveBot-ros/testing/ONNX-HITNET-Stereo-Depth-estimation/models/eth3d/saved_model_480x640/model_float32_opt.onnx"
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

    def letterbox_16_9_to_3_4(self, img):
        """Letterbox a 16:9 image into 480x640 (3:4) for HITNet input"""
        h, w, _ = img.shape
        target_h, target_w = 480, 640
        scale = min(target_h / h, target_w / w)
        new_w, new_h = int(w * scale), int(h * scale)
        resized = cv2.resize(img, (new_w, new_h))
        canvas = np.zeros((target_h, target_w, 3), dtype=np.uint8)
        x_offset = (target_w - new_w) // 2
        y_offset = (target_h - new_h) // 2
        canvas[y_offset:y_offset + new_h, x_offset:x_offset + new_w] = resized
        return canvas

    def process(self):
        if self.left_img is None or self.right_img is None:
            return

        # Letterbox both images to 480x640 (3:4) for HITNet
        left_input = self.letterbox_16_9_to_3_4(self.left_img)
        right_input = self.letterbox_16_9_to_3_4(self.right_img)

        # Run HITNet
        _ = self.depth_estimator(left_input, right_input)
        disp = self.depth_estimator.draw_disparity()  # 480x640 output

        # Crop the central region corresponding to original 16:9 input
        cam_h, cam_w, _ = self.left_img.shape  # original camera size
        model_h, model_w, _ = disp.shape

        # Compute scaling factor used in letterbox
        scale = min(model_h / cam_h, model_w / cam_w)
        new_w, new_h = int(cam_w * scale), int(cam_h * scale)
        x_offset = (model_w - new_w) // 2
        y_offset = (model_h - new_h) // 2

        disp_16_9 = disp[y_offset:y_offset+new_h, x_offset:x_offset+new_w]
        # Resize back to original camera resolution
        disp_resized = cv2.resize(disp_16_9, (cam_w, cam_h))

        # Convert to ROS Image message and publish
        depth_msg = self.bridge.cv2_to_imgmsg(disp_resized, 'bgr8')
        self.pub_depth.publish(depth_msg)
        self.get_logger().info('HITNET depth frame generated (16:9 output)')

def main():
    rclpy.init()
    node = HitnetDepthNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
