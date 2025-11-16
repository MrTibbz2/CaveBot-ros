from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Left camera
    camleft_node = Node(
        package='camera_ros',
        executable='camera_node',
        name='camleft_node',
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
            ('/camera/image_raw', '/camleft/image_raw'),
            ('/camera/camera_info', '/camleft/camera_info')
        ]
    )

    # Right camera
    camright_node = Node(
        package='camera_ros',
        executable='camera_node',
        name='camright_node',
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
            ('/camera/image_raw', '/camright/image_raw'),
            ('/camera/camera_info', '/camright/camera_info')
        ]
    )

    return LaunchDescription([
        camleft_node,
        camright_node
    ])
