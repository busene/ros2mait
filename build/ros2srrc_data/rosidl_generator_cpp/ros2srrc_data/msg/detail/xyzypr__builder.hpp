// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Xyzypr.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/xyzypr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Xyzypr_roll
{
public:
  explicit Init_Xyzypr_roll(::ros2srrc_data::msg::Xyzypr & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Xyzypr roll(::ros2srrc_data::msg::Xyzypr::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

class Init_Xyzypr_pitch
{
public:
  explicit Init_Xyzypr_pitch(::ros2srrc_data::msg::Xyzypr & msg)
  : msg_(msg)
  {}
  Init_Xyzypr_roll pitch(::ros2srrc_data::msg::Xyzypr::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Xyzypr_roll(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

class Init_Xyzypr_yaw
{
public:
  explicit Init_Xyzypr_yaw(::ros2srrc_data::msg::Xyzypr & msg)
  : msg_(msg)
  {}
  Init_Xyzypr_pitch yaw(::ros2srrc_data::msg::Xyzypr::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Xyzypr_pitch(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

class Init_Xyzypr_z
{
public:
  explicit Init_Xyzypr_z(::ros2srrc_data::msg::Xyzypr & msg)
  : msg_(msg)
  {}
  Init_Xyzypr_yaw z(::ros2srrc_data::msg::Xyzypr::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Xyzypr_yaw(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

class Init_Xyzypr_y
{
public:
  explicit Init_Xyzypr_y(::ros2srrc_data::msg::Xyzypr & msg)
  : msg_(msg)
  {}
  Init_Xyzypr_z y(::ros2srrc_data::msg::Xyzypr::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Xyzypr_z(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

class Init_Xyzypr_x
{
public:
  Init_Xyzypr_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Xyzypr_y x(::ros2srrc_data::msg::Xyzypr::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Xyzypr_y(msg_);
  }

private:
  ::ros2srrc_data::msg::Xyzypr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Xyzypr>()
{
  return ros2srrc_data::msg::builder::Init_Xyzypr_x();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__BUILDER_HPP_
