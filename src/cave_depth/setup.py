from setuptools import setup
from setuptools.command.install import install
import os
import subprocess
from glob import glob

package_name = 'cave_depth'

class CustomInstall(install):
    def run(self):
        hitnet_path = os.path.abspath(os.path.join(os.path.dirname(__file__), 'ONNX-HITNET-Stereo-Depth-estimation'))
        if os.path.exists(hitnet_path):
            req_file = os.path.join(hitnet_path, 'requirements.txt')
            if os.path.exists(req_file):
                subprocess.check_call(['pip', 'install', '-r', req_file])
            subprocess.check_call(['pip', 'install', '-e', hitnet_path])
        install.run(self)

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
    description='Depth estimation package',
    license='TODO',
    entry_points={
        'console_scripts': [
            'hitnet_depth_node = cave_depth.hitnet_depth_node:main',
        ],
    },
    cmdclass={
        'install': CustomInstall,
    }
)
