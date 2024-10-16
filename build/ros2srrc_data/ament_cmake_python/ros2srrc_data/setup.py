from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2srrc_data',
    version='0.0.0',
    packages=find_packages(
        include=('ros2srrc_data', 'ros2srrc_data.*')),
)
