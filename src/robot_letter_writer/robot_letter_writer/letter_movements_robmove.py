# letter_movements.py

import os
import svgpathtools as svgt
from svgpathtools import Path, Line, QuadraticBezier, CubicBezier, Arc
from ros2srrc_data.msg import Robpose

filter = 5 # filter voor aantal punten in een curve.

class RobotMovements:
    def __init__(self):
        self.svg_dir = os.path.join(os.path.expanduser('~'), 'ros2ws', 'src', 'robot_letter_writer', 'robot_letter_writer', 'SVG')

    def parse_svg_file(self, file_path):
        paths, attributes = svgt.svg2paths(file_path)
        xy_coordinates = []

        for path, attr in zip(paths, attributes):       # this piece of codes takes the XY coordinates out of a SVG file
            path_coordinates = []
            for segment in path:
                if isinstance(segment, Line):
                    start = (segment.start.real, segment.start.imag)
                    end = (segment.end.real, segment.end.imag)
                    path_coordinates.append(start)
                    path_coordinates.append(end)
                elif isinstance(segment, QuadraticBezier):
                    num_points = filter
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)
                elif isinstance(segment, CubicBezier):
                    num_points = filter
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)
                elif isinstance(segment, Arc):
                    num_points = filter
                    for t in [i / num_points for i in range(num_points + 1)]:
                        point = (segment.point(t).real, segment.point(t).imag)
                        path_coordinates.append(point)

            xy_coordinates.extend(path_coordinates)

        return xy_coordinates

    def movement_from_svg(self, char):
        filename = f"{char.upper()}.svg"        # Get SVG filename (A,B,C,etc)
        file_path = os.path.join(self.svg_dir, filename)
        try:
            xy_coordinates = self.parse_svg_file(file_path)
            movements = []
            for point in xy_coordinates:
                # Divide coordinates by x, otherwise coordinates of SVG dont match up
                x, y = point[0] / 5000 +0.1, point[1] / 5000 +0.1

                # Define -> MOVEMENT TYPE: (PTP, LIN)
                MovType = "PTP"
                # Define -> SPEED:
                Speed = 1.0

                # Define -> POSE:     
                InputPose = Robpose()
                InputPose.x = x
                InputPose.y = y
                InputPose.z = 1.0  # Adjust z-coordinate as needed
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
        # Define -> MOVEMENT TYPE: (PTP, LIN)
        MovType = "PTP"
        # Define -> SPEED:
        Speed = 1.0

        # Define -> POSE:     
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

    # Generate movement map for the entire alphabet, so that you dont need to include every character by hand
    for letter in 'abcdefghijklmnopqrstuvwxyz':
        movement_map[letter] = movements.movement_from_svg(letter)

    return movement_map.get(char.lower(), None)