from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_robotiqgripper',
    version='1.0.0',
    packages=find_packages(
        include=('ros2_robotiqgripper', 'ros2_robotiqgripper.*')),
)
