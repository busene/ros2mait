# This code is used to split the robot_letter_writer node in more feasible parts. This code handles the movement (using an svg-parser)

import os
import svgpathtools as svgt
from svgpathtools import Path, Line, QuadraticBezier, CubicBezier, Arc
from ros2srrc_data.msg import Robpose
import configparser

# Create a ConfigParser instance
config = configparser.ConfigParser()
config_file_path = '/home/ubuntu/ros2ws/config.ini'

def load_config():      # Config file that includes some basic parameters that are changeable using the GUI
    """Load configuration from config.ini and return settings."""
    if os.path.exists(config_file_path):
        print(f"Found config file: {config_file_path}")
        config.read(config_file_path)  # Read existing config
    else:
        print(f"Config file not found, creating default settings.")
        # Define default settings if it doesn't exist, or if something goes wrong
        config['RobotSettings'] = {
            'filter': '5',
            'coord_div': '5000',
            'speed': '1.0'
        }
        with open(config_file_path, 'w') as configfile:
            config.write(configfile)

    # Return current settings as a dictionary to be used later in the code
    return {
        'FILTER': int(config['RobotSettings']['filter']),
        'COORD_DIV': int(config['RobotSettings']['coord_div']),
        'SPEED': float(config['RobotSettings']['speed'])
    }

class RobotMovements:
    def __init__(self):
        self.svg_dir = os.path.join(os.path.expanduser('~'), 'ros2ws', 'src', 'robot_letter_writer', 'robot_letter_writer', 'SVG')  # Set the paths for the SVG-files
        self.x_offset = 0.0                                                                                                         # Set the standard X offset 

    def parse_svg_file(self, file_path):
        settings = load_config()            # Reload configuration each time this method is called to get updated settings
        
        paths, attributes = svgt.svg2paths(file_path)
        xy_coordinates = []

        for path, attr in zip(paths, attributes):
            path_coordinates = []
            for segment in path:
                if isinstance(segment, Line):
                    start = (segment.start.real, segment.start.imag)
                    end = (segment.end.real, segment.end.imag)
                    path_coordinates.append(start)
                    path_coordinates.append(end)
                elif isinstance(segment, (QuadraticBezier, CubicBezier, Arc)):  # If a curve is found, this divides it into multiple points so it can be drawn with straight lines
                    num_points = settings['FILTER']                             # Using the filter value from the config file to filter how precise the curves are
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)

            xy_coordinates.extend(path_coordinates)

        return xy_coordinates

    def movement_from_svg(self, char):      # Get the xy coordinates from the SVG files when a letter is called using the node
        filename = f"{char.upper()}.svg"    # All the SVG files are uppercase named, so it changes the input to uppercase if needed
        file_path = os.path.join(self.svg_dir, filename)
        
        try:
            xy_coordinates = self.parse_svg_file(file_path)
            movements = []
            settings = load_config()
            
            print(f"Processing letter {char} with x_offset: {self.x_offset}")
            
            for point in xy_coordinates:
                x, y = point[0] / settings['COORD_DIV'] + 0.20, point[1] / settings['COORD_DIV'] + 0.20

                # Apply x_offset before rotation
                x += self.x_offset

                # Rotate the letter writing paths 90 degrees so it faces the correct way for MA-IT test cage
                translated_x, translated_y = y, -x

                MovType = "PTP"
                Speed = settings['SPEED']

                InputPose = Robpose()           # Use Robpose from the IFRA package to be able to send robot EE to specific coordinate
                InputPose.x = translated_x 
                InputPose.y = translated_y 
                InputPose.z = 0.5 + 0.30144     # Adjust z-coordinate as needed. 0.5 is the height of the block it is on.
                InputPose.qx = 0.0
                InputPose.qy = 1.0
                InputPose.qz = 0.0
                InputPose.qw = 0.0

                movements.append((MovType, Speed, InputPose))
            
            return movements
            
        except Exception as e:
            print(f"Error processing file {filename}: {str(e)}")
            return []

    def next_letter(self):      # The offset for the letters so the robot can write them next to each other
        self.x_offset -= 0.1
        print(f"Updated x_offset: {self.x_offset}")

    def move_to_zero(self):         # Code to reset the robot to its 0 positions
        MovType = "PTP"
        Speed = 1.0

        InputPose = Robpose()
        InputPose.x = 0.302
        InputPose.y = 0.0
        InputPose.z = 1.063
        InputPose.qx = 0.0
        InputPose.qy = 1.0
        InputPose.qz = 0.0
        InputPose.qw = 0.0

        return [(MovType, Speed, InputPose)]

# Global RobotMovements instance
robot_movements = RobotMovements()

def get_letter_movements(char):
    global robot_movements
    if char.lower() == 'backspace':     
        return None                     # Return None for Backspace, without updating x_offset. Just here for if you accidentally clear using backspace instead of the clear button
    movements = robot_movements.movement_from_svg(char.lower())
    if movements:                       # Only update x_offset if valid movements were generated
        robot_movements.next_letter()
    return movements                    # Return the movements
