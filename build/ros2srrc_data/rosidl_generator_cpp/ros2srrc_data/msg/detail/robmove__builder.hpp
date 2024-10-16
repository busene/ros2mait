// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/robmove__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Robmove_qw
{
public:
  explicit Init_Robmove_qw(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Robmove qw(::ros2srrc_data::msg::Robmove::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_qz
{
public:
  explicit Init_Robmove_qz(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_qw qz(::ros2srrc_data::msg::Robmove::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_Robmove_qw(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_qy
{
public:
  explicit Init_Robmove_qy(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_qz qy(::ros2srrc_data::msg::Robmove::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_Robmove_qz(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_qx
{
public:
  explicit Init_Robmove_qx(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_qy qx(::ros2srrc_data::msg::Robmove::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_Robmove_qy(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_z
{
public:
  explicit Init_Robmove_z(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_qx z(::ros2srrc_data::msg::Robmove::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Robmove_qx(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_y
{
public:
  explicit Init_Robmove_y(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_z y(::ros2srrc_data::msg::Robmove::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Robmove_z(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_x
{
public:
  explicit Init_Robmove_x(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_y x(::ros2srrc_data::msg::Robmove::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Robmove_y(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_speed
{
public:
  explicit Init_Robmove_speed(::ros2srrc_data::msg::Robmove & msg)
  : msg_(msg)
  {}
  Init_Robmove_x speed(::ros2srrc_data::msg::Robmove::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Robmove_x(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

class Init_Robmove_type
{
public:
  Init_Robmove_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robmove_speed type(::ros2srrc_data::msg::Robmove::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Robmove_speed(msg_);
  }

private:
  ::ros2srrc_data::msg::Robmove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Robmove>()
{
  return ros2srrc_data::msg::builder::Init_Robmove_type();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__BUILDER_HPP_
