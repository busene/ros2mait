import os
import svgpathtools as svgt
from svgpathtools import Path, Line, QuadraticBezier, CubicBezier, Arc

def parse_svg_file(file_path):
    paths, attributes = svgt.svg2paths(file_path)
    xy_coordinates = []

    for path, attr in zip(paths, attributes): # path and attributes are certain pieces of a SVG file
        path_coordinates = []   # create an empty list 
        for segment in path:
            if isinstance(segment, Line):
                start = segment.start
                end = segment.end
                path_coordinates.append((start.real, start.imag))
                path_coordinates.append((end.real, end.imag))
            elif isinstance(segment, QuadraticBezier):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = segment.point(t)
                    path_coordinates.append((point.real, point.imag))
            elif isinstance(segment, CubicBezier):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = segment.point(t)
                    path_coordinates.append((point.real, point.imag))
            elif isinstance(segment, Arc):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = segment.point(t)
                    path_coordinates.append((point.real, point.imag))
        xy_coordinates.append(path_coordinates)
    return xy_coordinates

# adding the path to the SVG-files and 
def main():
    svg_dir = os.path.join(os.path.expanduser('~'), 'ros2ws', 'src', 'robot_letter_writer', 'robot_letter_writer', 'SVG')
    file_name = input("Enter the name of the SVG file (without extension): ")
    file_path = os.path.join(svg_dir, f"{file_name}.svg")

    if not os.path.isfile(file_path):
        print("File not found. Please check the path.")
        return

    xy_coordinates = parse_svg_file(file_path)
    for i, path in enumerate(xy_coordinates):
        print(f"Path {i+1}:")
        for point in path:
            print(point)
        print()

if __name__ == '__main__':
    main()