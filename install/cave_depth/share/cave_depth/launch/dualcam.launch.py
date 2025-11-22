from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Left camera
    camleft_node = Node(
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
            {'frame_id': 'camleft'}
        ],
        remappings=[
            ('image_raw', 'camleft/image_raw'),
            ('camera_info', 'camleft/camera_info')
        ]
    )

    # Right camera
    camright_node = Node(
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
            {'frame_id': 'camright'}
        ],
        remappings=[
            ('image_raw', 'camright/image_raw'),
            ('camera_info', 'camright/camera_info')
        ]
    )

    depth_node = Node(
        package='cave_depth',
        executable='hitnet_depth_node',
        name='hitnet_depth',
        output='screen'
    )

    return LaunchDescription([
        camleft_node,
        camright_node,
        depth_node
    ])
