// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__BUILDER_HPP_
#define ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_robotiqgripper/srv/detail/robotiq_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_robotiqgripper
{

namespace srv
{

namespace builder
{

class Init_RobotiqGripper_Request_action
{
public:
  Init_RobotiqGripper_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_robotiqgripper::srv::RobotiqGripper_Request action(::ros2_robotiqgripper::srv::RobotiqGripper_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_robotiqgripper::srv::RobotiqGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_robotiqgripper::srv::RobotiqGripper_Request>()
{
  return ros2_robotiqgripper::srv::builder::Init_RobotiqGripper_Request_action();
}

}  // namespace ros2_robotiqgripper


namespace ros2_robotiqgripper
{

namespace srv
{

namespace builder
{

class Init_RobotiqGripper_Response_message
{
public:
  explicit Init_RobotiqGripper_Response_message(::ros2_robotiqgripper::srv::RobotiqGripper_Response & msg)
  : msg_(msg)
  {}
  ::ros2_robotiqgripper::srv::RobotiqGripper_Response message(::ros2_robotiqgripper::srv::RobotiqGripper_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_robotiqgripper::srv::RobotiqGripper_Response msg_;
};

class Init_RobotiqGripper_Response_average
{
public:
  explicit Init_RobotiqGripper_Response_average(::ros2_robotiqgripper::srv::RobotiqGripper_Response & msg)
  : msg_(msg)
  {}
  Init_RobotiqGripper_Response_message average(::ros2_robotiqgripper::srv::RobotiqGripper_Response::_average_type arg)
  {
    msg_.average = std::move(arg);
    return Init_RobotiqGripper_Response_message(msg_);
  }

private:
  ::ros2_robotiqgripper::srv::RobotiqGripper_Response msg_;
};

class Init_RobotiqGripper_Response_value
{
public:
  explicit Init_RobotiqGripper_Response_value(::ros2_robotiqgripper::srv::RobotiqGripper_Response & msg)
  : msg_(msg)
  {}
  Init_RobotiqGripper_Response_average value(::ros2_robotiqgripper::srv::RobotiqGripper_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_RobotiqGripper_Response_average(msg_);
  }

private:
  ::ros2_robotiqgripper::srv::RobotiqGripper_Response msg_;
};

class Init_RobotiqGripper_Response_success
{
public:
  Init_RobotiqGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotiqGripper_Response_value success(::ros2_robotiqgripper::srv::RobotiqGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotiqGripper_Response_value(msg_);
  }

private:
  ::ros2_robotiqgripper::srv::RobotiqGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_robotiqgripper::srv::RobotiqGripper_Response>()
{
  return ros2_robotiqgripper::srv::builder::Init_RobotiqGripper_Response_success();
}

}  // namespace ros2_robotiqgripper

#endif  // ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__BUILDER_HPP_
