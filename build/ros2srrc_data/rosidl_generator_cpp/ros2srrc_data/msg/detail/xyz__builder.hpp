// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Xyz.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__XYZ__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__XYZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/xyz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Xyz_z
{
public:
  explicit Init_Xyz_z(::ros2srrc_data::msg::Xyz & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Xyz z(::ros2srrc_data::msg::Xyz::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyz msg_;
};

class Init_Xyz_y
{
public:
  explicit Init_Xyz_y(::ros2srrc_data::msg::Xyz & msg)
  : msg_(msg)
  {}
  Init_Xyz_z y(::ros2srrc_data::msg::Xyz::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Xyz_z(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyz msg_;
};

class Init_Xyz_x
{
public:
  Init_Xyz_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Xyz_y x(::ros2srrc_data::msg::Xyz::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Xyz_y(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyz msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Xyz>()
{
  return ros2srrc_data::msg::builder::Init_Xyz_x();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__XYZ__BUILDER_HPP_
