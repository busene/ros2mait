// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__BUILDER_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/msg/detail/system_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemState_mechanical_units
{
public:
  explicit Init_SystemState_mechanical_units(::abb_robot_msgs::msg::SystemState & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::msg::SystemState mechanical_units(::abb_robot_msgs::msg::SystemState::_mechanical_units_type arg)
  {
    msg_.mechanical_units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

class Init_SystemState_rapid_tasks
{
public:
  explicit Init_SystemState_rapid_tasks(::abb_robot_msgs::msg::SystemState & msg)
  : msg_(msg)
  {}
  Init_SystemState_mechanical_units rapid_tasks(::abb_robot_msgs::msg::SystemState::_rapid_tasks_type arg)
  {
    msg_.rapid_tasks = std::move(arg);
    return Init_SystemState_mechanical_units(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

class Init_SystemState_rapid_running
{
public:
  explicit Init_SystemState_rapid_running(::abb_robot_msgs::msg::SystemState & msg)
  : msg_(msg)
  {}
  Init_SystemState_rapid_tasks rapid_running(::abb_robot_msgs::msg::SystemState::_rapid_running_type arg)
  {
    msg_.rapid_running = std::move(arg);
    return Init_SystemState_rapid_tasks(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

class Init_SystemState_auto_mode
{
public:
  explicit Init_SystemState_auto_mode(::abb_robot_msgs::msg::SystemState & msg)
  : msg_(msg)
  {}
  Init_SystemState_rapid_running auto_mode(::abb_robot_msgs::msg::SystemState::_auto_mode_type arg)
  {
    msg_.auto_mode = std::move(arg);
    return Init_SystemState_rapid_running(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

class Init_SystemState_motors_on
{
public:
  explicit Init_SystemState_motors_on(::abb_robot_msgs::msg::SystemState & msg)
  : msg_(msg)
  {}
  Init_SystemState_auto_mode motors_on(::abb_robot_msgs::msg::SystemState::_motors_on_type arg)
  {
    msg_.motors_on = std::move(arg);
    return Init_SystemState_auto_mode(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

class Init_SystemState_header
{
public:
  Init_SystemState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemState_motors_on header(::abb_robot_msgs::msg::SystemState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SystemState_motors_on(msg_);
  }

private:
  ::abb_robot_msgs::msg::SystemState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::msg::SystemState>()
{
  return abb_robot_msgs::msg::builder::Init_SystemState_header();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__BUILDER_HPP_
