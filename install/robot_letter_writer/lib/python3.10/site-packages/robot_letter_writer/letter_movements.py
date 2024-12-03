import rclpy
from ros2srrc_data.msg import Action, Joints, Xyz
from svgpathtools import svg2paths, Path

# Constant for the speed
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

def lift_pen():
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed

    INPUT = Xyz()
    INPUT.x = 0.0
    INPUT.y = 0.0
    INPUT.z = 0.05
    ACTION.movel = INPUT

    return ACTION

def lower_pen():
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed

    INPUT = Xyz()
    INPUT.x = 0.0
    INPUT.y = 0.0
    INPUT.z = -0.05
    ACTION.movel = INPUT

    return ACTION

def move_to_position(x, y, z):
    ACTION = Action()
    ACTION.action = "MoveL"
    ACTION.speed = speed

    INPUT = Xyz()
    INPUT.x = x
    INPUT.y = y
    INPUT.z = z
    ACTION.movel = INPUT

    return ACTION

# Define letter movements as lists of actions
letter_movements = {
    'a': [
        move_to_position(-0.04, 0.02, 0.00),
        move_to_position(0.04, 0.02, 0.00),
        lift_pen(),
        move_to_position(-0.02, -0.01, 0.00),
        lower_pen(),
        move_to_position(0.00, -0.02, 0.00),
        lift_pen(),
        move_to_zero()
    ],
    'b': [
        move_to_position(-0.04, 0.00, 0.00),
        move_to_position(0.00, 0.01, 0.00),
        move_to_position(0.002, 0.01, 0.00),
        move_to_position(0.003, 0.005, 0.00),
        move_to_position(0.005, 0.005, 0.00), # first part of curve
        move_to_position(0.005, -0.005, 0.00),
        move_to_position(0.003, -0.005, 0.00),
        move_to_position(0.002, -0.01, 0.00),
        move_to_position(0.00, -0.01, 0.00), # second part of curve
        # start second part B
        move_to_position(0.00, 0.01, 0.00),
        move_to_position(0.002, 0.01, 0.00),
        move_to_position(0.003, 0.005, 0.00),
        move_to_position(0.005, 0.005, 0.00), # first part of curve
        move_to_position(0.005, -0.005, 0.00),
        move_to_position(0.003, -0.005, 0.00),
        move_to_position(0.002, -0.01, 0.00),
        move_to_position(0.00, -0.01, 0.00), # second part of curve
        lift_pen(),
        move_to_zero()        

    ],
    'c': [
        lift_pen(),
        move_to_position(-0.04, 0.03, 0.00),
        lower_pen(),
        move_to_position(0.003, -0.01, 0.00),
        move_to_position(0.003, -0.01, 0.00),
        move_to_position(0.004, -0.005, 0.00),
        move_to_position(0.01, -0.005, 0.00), # first curve
        move_to_position(0.01, 0.005, 0.00),
        move_to_position(0.004, 0.005, 0.00),
        move_to_position(0.003, 0.01, 0.00),
        move_to_position(0.003, 0.01, 0.00), # second part of the c
        lift_pen(),
        move_to_zero()
    ],
    'd': [
        move_to_position(-0.04, 0.00, 0.00),
        move_to_position(0.00, 0.01, 0.00),
        move_to_position(0.0025, 0.01, 0.00),
        move_to_position(0.0025, 0.005, 0.00),
        move_to_position(0.005, 0.0025, 0.00),
        move_to_position(0.01, 0.0025, 0.00), # first curve
        move_to_position(0.01, -0.0025, 0.00),
        move_to_position(0.005, -0.0025, 0.00),
        move_to_position(0.0025, -0.005, 0.00),
        move_to_position(0.0025, -0.01, 0.00), # second curve
        lift_pen(),
        move_to_zero()
    ]
}

def get_letter_movements(letter):
    return letter_movements.get(letter, [])

# Example usage:
def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('letter_movement_node')

    letter = 'A'
    actions = get_letter_movements(letter)
    for action in actions:
        node.get_logger().info(f"Executing action: {action.action} to position {action.movel.x}, {action.movel.y}, {action.movel.z}")

    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
