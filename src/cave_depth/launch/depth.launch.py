from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    depth_node = Node(
        package='cave_depth',
        executable='hitnet_depth_node',
        name='hitnet_depth',
        output='screen'
    )

    return LaunchDescription([
        depth_node
    ])
