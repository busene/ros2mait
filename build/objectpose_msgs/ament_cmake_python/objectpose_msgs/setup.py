from setuptools import find_packages
from setuptools import setup

setup(
    name='objectpose_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('objectpose_msgs', 'objectpose_msgs.*')),
)