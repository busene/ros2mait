from setuptools import find_packages
from setuptools import setup

setup(
    name='linkpose_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('linkpose_msgs', 'linkpose_msgs.*')),
)
