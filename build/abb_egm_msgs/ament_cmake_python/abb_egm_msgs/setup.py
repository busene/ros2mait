from setuptools import find_packages
from setuptools import setup

setup(
    name='abb_egm_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('abb_egm_msgs', 'abb_egm_msgs.*')),
)
