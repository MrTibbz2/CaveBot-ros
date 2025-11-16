# Dual Camera Stereo Vision Pipeline

## Overview
This package provides launch files for a complete stereo vision pipeline for the CaveBot robot.

## Pipeline Architecture

```
Stereo Cameras (IMX708)
├── left_camera/image_raw
└── right_camera/image_raw
    ↓
stereo_image_proc (DisparityNode + PointCloudNode)
├── /disparity (stereo_msgs/DisparityImage)
└── /points2 (sensor_msgs/PointCloud2)
    ↓
disparity_to_depth (converter)
└── /depth/image_raw (sensor_msgs/Image, 32FC1, REP 118)
    ↓
depthimage_to_laserscan
└── /scan (sensor_msgs/LaserScan)
```

## Launch Files

### stereo_pipeline.launch.py
Core stereo vision pipeline without visualization.

**Usage:**
```bash
ros2 launch dualcam_launch stereo_pipeline.launch.py
```

**Published Topics:**
- `/left/image_raw` - Left camera raw image
- `/right/image_raw` - Right camera raw image
- `/left/camera_info` - Left camera calibration
- `/right/camera_info` - Right camera calibration
- `/disparity` - Stereo disparity image
- `/points2` - 3D point cloud
- `/depth/image_raw` - Depth image (REP 118 compliant)
- `/scan` - 2D laser scan for navigation

### stereo_pipeline_viz.launch.py
Stereo pipeline with RViz2 visualization.

**Usage:**
```bash
ros2 launch dualcam_launch stereo_pipeline_viz.launch.py
```

Includes all topics from stereo_pipeline.launch.py plus RViz2 for visualization.

**RViz2 Display Recommendations:**
- Image: `/left/image_raw`
- Image: `/right/image_raw`
- DisparityImage: `/disparity`
- PointCloud2: `/points2`
- LaserScan: `/scan`
- Image: `/depth/image_raw`

## Calibration
Camera calibration files are located in `/home/pi/CaveBot-ros/calibrationdata/`:
- `left.yaml` - Left camera calibration
- `right.yaml` - Right camera calibration

## Dependencies
- camera_ros (libcamera interface for Raspberry Pi)
- stereo_image_proc (ROS 2 stereo processing)
- depthimage_to_laserscan (depth to laser scan conversion)
- rviz2 (visualization)
