from setuptools import setup
import os
import sys
from glob import glob

package_name = 'cave_depth'
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '../../libs/ONNX-HITNET-Stereo-Depth-estimation'))

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name, 'hitnet'],
    package_dir={'hitnet': '../../libs/ONNX-HITNET-Stereo-Depth-estimation/hitnet'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ] + [(os.path.join('share', package_name, root.replace('models', 'models', 1)), [os.path.join(root, f) for f in files])
         for root, dirs, files in os.walk('models') if files],
    install_requires=[
        'setuptools',
        'opencv-python',
        'numpy>=1.21.6,<2.0',
        'onnx',
        'onnxruntime',
        'imread-from-url'
    ],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='Depth estimation package',
    license='TODO',
    entry_points={
        'console_scripts': [
            'hitnet_depth_node = cave_depth.hitnet_depth_node:main',
        ],
    },

)
