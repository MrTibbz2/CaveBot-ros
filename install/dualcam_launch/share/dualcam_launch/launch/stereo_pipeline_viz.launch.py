from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    stereo_pipeline = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(get_package_share_directory('dualcam_launch'), 'launch'),
            '/stereo_pipeline.launch.py'
        ])
    )
    
    left_view = Node(
        package='image_view',
        executable='image_view',
        name='left_view',
        remappings=[('image', '/left/image_raw')],
        output='screen'
    )
    
    right_view = Node(
        package='image_view',
        executable='image_view',
        name='right_view',
        remappings=[('image', '/right/image_raw')],
        output='screen'
    )
    
    disparity_view = Node(
        package='image_view',
        executable='disparity_view',
        name='disparity_view',
        remappings=[('image', '/disparity')],
        output='screen'
    )
    
    depth_view = Node(
        package='image_view',
        executable='image_view',
        name='depth_view',
        remappings=[('image', '/depth/image_raw')],
        output='screen'
    )
    
    return LaunchDescription([
        stereo_pipeline,
        left_view,
        right_view,
        disparity_view,
        depth_view
    ])
