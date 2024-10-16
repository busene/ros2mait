from setuptools import find_packages
from setuptools import setup

setup(
    name='linkattacher_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('linkattacher_msgs', 'linkattacher_msgs.*')),
)
