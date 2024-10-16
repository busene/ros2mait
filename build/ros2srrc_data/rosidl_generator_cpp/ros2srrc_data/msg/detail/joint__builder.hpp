// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINT__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Joint_value
{
public:
  explicit Init_Joint_value(::ros2srrc_data::msg::Joint & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Joint value(::ros2srrc_data::msg::Joint::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Joint msg_;
};

class Init_Joint_joint
{
public:
  Init_Joint_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joint_value joint(::ros2srrc_data::msg::Joint::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_Joint_value(msg_);
  }

private:
  ::ros2srrc_data::msg::Joint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Joint>()
{
  return ros2srrc_data::msg::builder::Init_Joint_joint();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINT__BUILDER_HPP_
