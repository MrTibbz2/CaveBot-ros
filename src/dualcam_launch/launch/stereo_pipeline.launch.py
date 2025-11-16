from launch import LaunchDescription
from launch_ros.actions import Node, ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
import os

def generate_launch_description():
    calib_dir = '/home/pi/CaveBot-ros/calibrationdata'
    
    left_camera = Node(
        package='camera_ros',
        executable='camera_node',
        name='left_camera',
        output='screen',
        parameters=[
            {'camera_dev': '/dev/video0'},
            {'camera': '/base/axi/pcie@120000/rp1/i2c@88000/imx708@1a'},
            {'width': 1920},
            {'height': 1080},
            {'format': 'RGB888'},
            {'frame_id': 'left_camera_optical_frame'},
            os.path.join(calib_dir, 'left.yaml')
        ],
        remappings=[
            ('/camera/image_raw', '/left/image_raw'),
            ('/camera/camera_info', '/left/camera_info')
        ]
    )
    
    right_camera = Node(
        package='camera_ros',
        executable='camera_node',
        name='right_camera',
        output='screen',
        parameters=[
            {'camera_dev': '/dev/video1'},
            {'camera': '/base/axi/pcie@120000/rp1/i2c@80000/imx708@1a'},
            {'width': 1920},
            {'height': 1080},
            {'format': 'RGB888'},
            {'frame_id': 'right_camera_optical_frame'},
            os.path.join(calib_dir, 'right.yaml')
        ],
        remappings=[
            ('/camera/image_raw', '/right/image_raw'),
            ('/camera/camera_info', '/right/camera_info')
        ]
    )
    
    stereo_container = ComposableNodeContainer(
        package='rclcpp_components',
        executable='component_container',
        name='stereo_container',
        namespace='',
        composable_node_descriptions=[
            ComposableNode(
                package='stereo_image_proc',
                plugin='stereo_image_proc::DisparityNode',
                name='disparity_node',
            ),
            ComposableNode(
                package='stereo_image_proc',
                plugin='stereo_image_proc::PointCloudNode',
                name='point_cloud_node',
            ),
        ],
        output='screen',
    )
    
    disparity_to_depth = Node(
        package='dualcam_launch',
        executable='disparity_to_depth',
        name='disparity_to_depth',
        output='screen',
        remappings=[
            ('disparity', '/disparity'),
            ('depth', '/depth/image_raw')
        ]
    )
    
    depth_to_scan = Node(
        package='depthimage_to_laserscan',
        executable='depthimage_to_laserscan_node',
        name='depthimage_to_laserscan',
        output='screen',
        remappings=[
            ('depth', '/depth/image_raw'),
            ('depth_camera_info', '/left/camera_info'),
            ('scan', '/scan')
        ],
        parameters=[{
            'output_frame': 'left_camera_optical_frame'
        }]
    )
    
    return LaunchDescription([
        left_camera,
        right_camera,
        stereo_container,
        disparity_to_depth,
        depth_to_scan
    ])
