from launch import LaunchDescription
from launch_ros.actions import Node, ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
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
                parameters=[{
                    'approximate_sync': True,
                    'queue_size': 5
                }],
                remappings=[
                    ('left/image_rect', '/left_camera/image_raw'),
                    ('right/image_rect', '/right_camera/image_raw'),
                    ('left/camera_info', '/left_camera/camera_info'),
                    ('right/camera_info', '/right_camera/camera_info'),
                ]
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
            ('depth_camera_info', '/left_camera/camera_info'),
            ('scan', '/scan')
        ],
        parameters=[{
            'output_frame': 'left_camera'
        }]
    )
    
    return LaunchDescription([
        stereo_container,
        disparity_to_depth,
        depth_to_scan
    ])