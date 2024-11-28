# Install script for directory: /home/ubuntu/ros2ws/src/moveit_task_constructor/core/src/stages

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/ros2ws/install/moveit_task_constructor_core")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/ros2ws/build/moveit_task_constructor_core/src/stages/libmoveit_task_constructor_core_stages.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so"
         OLD_RPATH "/home/ubuntu/ros2ws/build/moveit_task_constructor_core/src:/home/ubuntu/ros2ws/install/moveit_ros_planning_interface/lib:/home/ubuntu/ros2ws/install/moveit_task_constructor_msgs/lib:/home/ubuntu/ros2ws/install/moveit_ros_move_group/lib:/home/ubuntu/ros2ws/install/moveit_core/lib:/opt/ros/humble/lib:/home/ubuntu/ros2ws/install/moveit_ros_warehouse/lib:/home/ubuntu/ros2ws/install/moveit_ros_planning/lib:/home/ubuntu/ros2ws/install/moveit_ros_occupancy_map_monitor/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/ros2ws/install/srdfdom/lib:/home/ubuntu/ros2ws/install/rviz_marker_tools/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stages.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/ros2ws/build/moveit_task_constructor_core/src/stages/libmoveit_task_constructor_core_stage_plugins.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so"
         OLD_RPATH "/home/ubuntu/ros2ws/build/moveit_task_constructor_core/src/stages:/home/ubuntu/ros2ws/build/moveit_task_constructor_core/src:/home/ubuntu/ros2ws/install/rviz_marker_tools/lib:/home/ubuntu/ros2ws/install/moveit_ros_planning_interface/lib:/home/ubuntu/ros2ws/install/moveit_ros_move_group/lib:/home/ubuntu/ros2ws/install/moveit_core/lib:/opt/ros/humble/lib:/home/ubuntu/ros2ws/install/moveit_ros_warehouse/lib:/home/ubuntu/ros2ws/install/moveit_ros_planning/lib:/home/ubuntu/ros2ws/install/moveit_ros_occupancy_map_monitor/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/ros2ws/install/srdfdom/lib:/home/ubuntu/ros2ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

