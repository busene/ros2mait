// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__SPECS__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__SPECS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/specs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Specs_robot_min
{
public:
  explicit Init_Specs_robot_min(::ros2srrc_data::msg::Specs & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Specs robot_min(::ros2srrc_data::msg::Specs::_robot_min_type arg)
  {
    msg_.robot_min = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Specs msg_;
};

class Init_Specs_robot_max
{
public:
  explicit Init_Specs_robot_max(::ros2srrc_data::msg::Specs & msg)
  : msg_(msg)
  {}
  Init_Specs_robot_min robot_max(::ros2srrc_data::msg::Specs::_robot_max_type arg)
  {
    msg_.robot_max = std::move(arg);
    return Init_Specs_robot_min(msg_);
  }

private:
  ::ros2srrc_data::msg::Specs msg_;
};

class Init_Specs_ee_vector
{
public:
  explicit Init_Specs_ee_vector(::ros2srrc_data::msg::Specs & msg)
  : msg_(msg)
  {}
  Init_Specs_robot_max ee_vector(::ros2srrc_data::msg::Specs::_ee_vector_type arg)
  {
    msg_.ee_vector = std::move(arg);
    return Init_Specs_robot_max(msg_);
  }

private:
  ::ros2srrc_data::msg::Specs msg_;
};

class Init_Specs_ee_min
{
public:
  explicit Init_Specs_ee_min(::ros2srrc_data::msg::Specs & msg)
  : msg_(msg)
  {}
  Init_Specs_ee_vector ee_min(::ros2srrc_data::msg::Specs::_ee_min_type arg)
  {
    msg_.ee_min = std::move(arg);
    return Init_Specs_ee_vector(msg_);
  }

private:
  ::ros2srrc_data::msg::Specs msg_;
};

class Init_Specs_ee_max
{
public:
  Init_Specs_ee_max()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Specs_ee_min ee_max(::ros2srrc_data::msg::Specs::_ee_max_type arg)
  {
    msg_.ee_max = std::move(arg);
    return Init_Specs_ee_min(msg_);
  }

private:
  ::ros2srrc_data::msg::Specs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Specs>()
{
  return ros2srrc_data::msg::builder::Init_Specs_ee_max();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__SPECS__BUILDER_HPP_
