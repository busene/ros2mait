#!/usr/bin/env python3

# ===== IMPORT REQUIRED COMPONENTS ===== #
# System functions and classes:
import sys, os
# Required to include ROS2 and its components:
import rclpy
from ament_index_python.packages import get_package_share_directory

# IMPORT ROS2 Custom Messages:
from ros2srrc_data.msg import Action
from ros2srrc_data.msg import Joint
from ros2srrc_data.msg import Joints
from ros2srrc_data.msg import Xyz
from ros2srrc_data.msg import Xyzypr
from ros2srrc_data.msg import Ypr

# Here I make a constant for the speed, so that this can be changed for the whole program at once
speed = 1.0 


def move_to_zero():
    ACTION = Action()
    ACTION.action = "MoveJ"
    ACTION.speed = speed

    INPUT = Joints()
    INPUT.joint1 = 0.0
    INPUT.joint2 = 0.0
    INPUT.joint3 = 0.0
    INPUT.joint4 = 0.0
    INPUT.joint5 = 90.0
    INPUT.joint6 = 0.0
    ACTION.movej = INPUT

    return ACTION

def move_to_a():
    # Define movement for letter a

    # Create a list to store all the actions so that they can be executed all. Otherwise it would only execute the last action
    actions = []

    # Move to the first point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = -0.04 
    INPUT.y = 0.02  
    INPUT.z = 0.00
    ACTION.movel = INPUT
    actions.append(ACTION)

    # Move to the second point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = 0.04 
    INPUT.y = 0.02  
    INPUT.z = 0.00
    ACTION.movel = INPUT
    actions.append(ACTION)

    # Move to the third point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = 0.00
    INPUT.y = 0.00
    INPUT.z = 0.05
    ACTION.movel = INPUT
    actions.append(ACTION)

    # Move to the fourth point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = -0.02 
    INPUT.y = -0.01  
    INPUT.z = 0.00
    ACTION.movel = INPUT
    actions.append(ACTION)

    # Move to the fifth point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = 0.00
    INPUT.y = 0.00
    INPUT.z = -0.05
    ACTION.movel = INPUT
    actions.append(ACTION)

    # Move to the sixth point
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed
    INPUT = Xyz()
    INPUT.x = 0.00  
    INPUT.y = -0.02  
    INPUT.z = 0.0
    ACTION.movel = INPUT
    actions.append(ACTION)

    ACTION = Action()
    ACTION.action = "MoveJ"
    ACTION.speed = speed
    # Returning to home so that the next letter has the same starting point
    INPUT = Joints()
    INPUT.joint1 = 0.0
    INPUT.joint2 = 0.0
    INPUT.joint3 = 0.0
    INPUT.joint4 = 0.0
    INPUT.joint5 = 90.0
    INPUT.joint6 = 0.0
    ACTION.movej = INPUT
    actions.append(ACTION)

    return actions




def move_to_b():
    # Define movement for letter B
    # Similar structure as move_to_a, but with different joint values
    pass

def move_to_c():
    # Define movement for letter C
    # Similar structure as move_to_a, but with different joint values
    pass

# Add more functions for other letters as needed