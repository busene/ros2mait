from setuptools import find_packages, setup

package_name = 'robot_letter_writer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='busse@beechleaf.nl',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_letter_writer_node = robot_letter_writer.robot_letter_writer_node:main',
            'robot_letter_writer_robmove_node = robot_letter_writer.robot_letter_writer_robmove_node:main',
        ],
    },
)

