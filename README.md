
<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">project_title</h3>

  <p align="center">
    project_description
    
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project



<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.



### Installation

Follow the full instruction manuel from https://github.com/IFRA-Cranfield/ros2_SimRealRobotControl , except the last step. The SimRealRobot package has to be downloaded and built using this repository.

After you downloaded and installed all the needed IFRA packages, you need to import the robot_letter_writer, gui_subscriber, and ros2_SimRealRobotControl from this repository in the src folder of your ros2 workspace. Then build your workspace.

In your main workspace folder you should import the config2.ini file and the Non_Workspace_Items folder.


<!-- USAGE EXAMPLES -->
## Usage

To open the controller UI that makes it possible to control the robot with cartesian paths. Navigate to:

`cd ros2ws/Non_Workspace_Items/UI`

and then type:

`python3 main.py`

To use the SVG parser, svgpathtools should be installed:

`pip install svgpathtools`

<p align="right">(<a href="#readme-top">back to top</a>)</p>

If you are using the real robot, and not the moveit bringup code, the newly created nodes have te be added to the gazebo launch file. See moveit launch code for referance.


<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

Busse Lommers - b.lommers@ma-it.nl

Project Link: [https://github.com/busene/ros2mait](https://github.com/busene/ros2mait)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* []()https://github.com/othneildrew/Best-README-Template/tree/main
* []()https://github.com/IFRA-Cranfield/ros2_SimRealRobotControl
* []()

<p align="right">(<a href="#readme-top">back to top</a>)</p>


