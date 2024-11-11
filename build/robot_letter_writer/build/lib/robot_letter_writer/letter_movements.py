from ros2srrc_data.msg import Action, Joints

def move_to_zero():
    ACTION = Action()
    ACTION.action = "MoveJ"
    ACTION.speed = 1.0

    INPUT = Joints()
    INPUT.joint1 = 0.0
    INPUT.joint2 = 0.0
    INPUT.joint3 = 0.0
    INPUT.joint4 = 0.0
    INPUT.joint5 = 0.0
    INPUT.joint6 = 0.0
    ACTION.movej = INPUT

    return ACTION

def move_to_a():
    # Define movement for letter A
    ACTION = Action()
    ACTION.action = "MoveJ"
    ACTION.speed = 1.0

    INPUT = Joints()
    INPUT.joint1 = 30.0  # Example values
    INPUT.joint2 = -45.0
    INPUT.joint3 = 60.0
    INPUT.joint4 = -15.0
    INPUT.joint5 = -30.0
    INPUT.joint6 = 0.0
    ACTION.movej = INPUT

    INPUT = Joints()
    INPUT.joint1 = 0.0  
    INPUT.joint2 = 0.0
    INPUT.joint3 = 0.0
    INPUT.joint4 = 0.0
    INPUT.joint5 = 0.0
    INPUT.joint6 = 0.0
    ACTION.movej = INPUT


    return ACTION

def move_to_b():
    # Define movement for letter B
    # Similar structure as move_to_a, but with different joint values
    pass

def move_to_c():
    # Define movement for letter C
    # Similar structure as move_to_a, but with different joint values
    pass

# Add more functions for other letters as needed