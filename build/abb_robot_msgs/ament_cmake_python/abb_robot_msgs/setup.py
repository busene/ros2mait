from setuptools import find_packages
from setuptools import setup

setup(
    name='abb_robot_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('abb_robot_msgs', 'abb_robot_msgs.*')),
)
