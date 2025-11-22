from setuptools import setup
import os
from glob import glob

package_name = 'cave_depth'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='Dual camera launch package',
    license='TODO',
    entry_points={
        'console_scripts': [
            'hitnet_depth_node = cave_depth.hitnet_depth_node:main',
        ],
    }
    
)
