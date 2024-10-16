// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Robpose.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/robpose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Robpose_qw
{
public:
  explicit Init_Robpose_qw(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Robpose qw(::ros2srrc_data::msg::Robpose::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_qz
{
public:
  explicit Init_Robpose_qz(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  Init_Robpose_qw qz(::ros2srrc_data::msg::Robpose::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_Robpose_qw(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_qy
{
public:
  explicit Init_Robpose_qy(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  Init_Robpose_qz qy(::ros2srrc_data::msg::Robpose::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_Robpose_qz(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_qx
{
public:
  explicit Init_Robpose_qx(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  Init_Robpose_qy qx(::ros2srrc_data::msg::Robpose::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_Robpose_qy(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_z
{
public:
  explicit Init_Robpose_z(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  Init_Robpose_qx z(::ros2srrc_data::msg::Robpose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Robpose_qx(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_y
{
public:
  explicit Init_Robpose_y(::ros2srrc_data::msg::Robpose & msg)
  : msg_(msg)
  {}
  Init_Robpose_z y(::ros2srrc_data::msg::Robpose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Robpose_z(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

class Init_Robpose_x
{
public:
  Init_Robpose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robpose_y x(::ros2srrc_data::msg::Robpose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Robpose_y(msg_);
  }

private:
  ::ros2srrc_data::msg::Robpose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Robpose>()
{
  return ros2srrc_data::msg::builder::Init_Robpose_x();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__BUILDER_HPP_
