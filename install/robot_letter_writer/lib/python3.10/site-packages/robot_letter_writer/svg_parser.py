import os
import svgpathtools as svgt
from svgpathtools import Path, Line, QuadraticBezier, CubicBezier, Arc

def parse_svg_file(file_path):
    paths, attributes = svgt.svg2paths(file_path)
    xy_coordinates = []

    for path, attr in zip(paths, attributes):
        path_coordinates = set()  # Use a set to automatically filter duplicates
        for segment in path:
            if isinstance(segment, Line):
                start = (segment.start.real, segment.start.imag)
                end = (segment.end.real, segment.end.imag)
                path_coordinates.add(start)
                path_coordinates.add(end)
            elif isinstance(segment, QuadraticBezier):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = (segment.point(t).real, segment.point(t).imag)
                    path_coordinates.add(point)
            elif isinstance(segment, CubicBezier):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = (segment.point(t).real, segment.point(t).imag)
                    path_coordinates.add(point)
            elif isinstance(segment, Arc):
                num_points = 10  # Adjust for finer or coarser approximation
                for t in [i / num_points for i in range(num_points + 1)]:
                    point = (segment.point(t).real, segment.point(t).imag)
                    path_coordinates.add(point)

        # Convert the set back to a list and sort it
        path_coordinates = sorted(list(path_coordinates))
        xy_coordinates.append(path_coordinates)

    return xy_coordinates

def main():
    svg_dir = os.path.join(os.path.expanduser('~'), 'ros2ws', 'src', 'robot_letter_writer', 'robot_letter_writer', 'SVG')
    
    # Get a list of all SVG files in the directory and sort them alphabetically
    svg_files = [file for file in os.listdir(svg_dir) if file.endswith(".svg")]
    svg_files.sort()

    # Iterate over the sorted list of SVG files
    for filename in svg_files:
        file_path = os.path.join(svg_dir, filename)
        print(f"Processing file: {filename}")
        
        try:
            xy_coordinates = parse_svg_file(file_path)
            for i, path in enumerate(xy_coordinates):
                print(f"Path {i+1}:")
                for point in path:
                    print(point)
                print()
        except Exception as e:
            print(f"Error processing file {filename}: {str(e)}")

if __name__ == '__main__':
    main()