// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__BUILDER_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_RAPIDTaskState_motion_task
{
public:
  explicit Init_RAPIDTaskState_motion_task(::abb_robot_msgs::msg::RAPIDTaskState & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::msg::RAPIDTaskState motion_task(::abb_robot_msgs::msg::RAPIDTaskState::_motion_task_type arg)
  {
    msg_.motion_task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDTaskState msg_;
};

class Init_RAPIDTaskState_execution_state
{
public:
  explicit Init_RAPIDTaskState_execution_state(::abb_robot_msgs::msg::RAPIDTaskState & msg)
  : msg_(msg)
  {}
  Init_RAPIDTaskState_motion_task execution_state(::abb_robot_msgs::msg::RAPIDTaskState::_execution_state_type arg)
  {
    msg_.execution_state = std::move(arg);
    return Init_RAPIDTaskState_motion_task(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDTaskState msg_;
};

class Init_RAPIDTaskState_activated
{
public:
  explicit Init_RAPIDTaskState_activated(::abb_robot_msgs::msg::RAPIDTaskState & msg)
  : msg_(msg)
  {}
  Init_RAPIDTaskState_execution_state activated(::abb_robot_msgs::msg::RAPIDTaskState::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return Init_RAPIDTaskState_execution_state(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDTaskState msg_;
};

class Init_RAPIDTaskState_name
{
public:
  Init_RAPIDTaskState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RAPIDTaskState_activated name(::abb_robot_msgs::msg::RAPIDTaskState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RAPIDTaskState_activated(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDTaskState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::msg::RAPIDTaskState>()
{
  return abb_robot_msgs::msg::builder::Init_RAPIDTaskState_name();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__BUILDER_HPP_
