import os
import svgpathtools as svgt
from svgpathtools import Path, Line, QuadraticBezier, CubicBezier, Arc
from ros2srrc_data.msg import Robpose
import configparser

# Create a ConfigParser instance
config = configparser.ConfigParser()
config_file_path = '/home/ubuntu/ros2ws/config.ini'

def load_config():      # Config file that includes some basic parameter that are changable using the GUI
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

    # Return current settings as a dictionary
    return {
        'FILTER': int(config['RobotSettings']['filter']),
        'COORD_DIV': int(config['RobotSettings']['coord_div']),
        'SPEED': float(config['RobotSettings']['speed'])
    }

class RobotMovements:
    def __init__(self):
        self.svg_dir = os.path.join(os.path.expanduser('~'), 'ros2ws', 'src', 'robot_letter_writer', 'robot_letter_writer', 'SVG')

    def parse_svg_file(self, file_path):
        # Reload configuration each time this method is called, otherwise it will use the last known config file
        settings = load_config()  # Get updated settings
        
        paths, attributes = svgt.svg2paths(file_path)
        xy_coordinates = []

        for path, attr in zip(paths, attributes):
            path_coordinates = []
            for segment in path:
                if isinstance(segment, Line):       # Line segments
                    start = (segment.start.real, segment.start.imag)
                    end = (segment.end.real, segment.end.imag)
                    path_coordinates.append(start)
                    path_coordinates.append(end)
                elif isinstance(segment, QuadraticBezier):      # If a curve is found, this divides it in multiple points so it can be drawn with straigh lines
                    num_points = settings['FILTER']             # Using the filter value from the config file to filter how precise the curves are
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)
                elif isinstance(segment, CubicBezier):
                    num_points = settings['FILTER']
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)
                elif isinstance(segment, Arc):
                    num_points = settings['FILTER']
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)

            xy_coordinates.extend(path_coordinates)

        return xy_coordinates

    def movement_from_svg(self, char):      # get the xy coordinates from the svg files when a letter is called using the node
        filename = f"{char.upper()}.svg"    # all the SVG files are uppercase named, so it changes the input to uppercase if needed
        file_path = os.path.join(self.svg_dir, filename)
        try:
            xy_coordinates = self.parse_svg_file(file_path)
            movements = []
            settings = load_config()  # Get updated settings
            
            # using a offset to test. Has to be calibrated when usign the real 
            for point in xy_coordinates:
                x, y = point[0] / settings['COORD_DIV'] + 0.20, point[1] / settings['COORD_DIV'] + 0.20

                # rotate the letter writing paths 90 degrees so it faces the correct way for MA-IT
                translated_x, translated_y = y, -x

                MovType = "PTP"
                Speed = settings['SPEED']

                InputPose = Robpose()
                InputPose.x = translated_x
                InputPose.y = translated_y
                InputPose.z = 0.5 + 0.30144  # Adjust z-coordinate as needed. 0.5 is the hight of the block it is on (as of right now)
                InputPose.qx = 0.0
                InputPose.qy = 1.0
                InputPose.qz = 0.0
                InputPose.qw = 0.0

                movements.append((MovType, Speed, InputPose))
            return movements
        except Exception as e:
            print(f"Error processing file {filename}: {str(e)}")
            return []

    def move_to_zero(self):
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

def get_letter_movements(char):
    movements = RobotMovements()
    movement_map = {}

    for letter in 'abcdefghijklmnopqrstuvwxyz':
        movement_map[letter] = movements.movement_from_svg(letter)

    return movement_map.get(char.lower(), None)
