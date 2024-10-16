// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINTS__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Joints_joint7
{
public:
  explicit Init_Joints_joint7(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Joints joint7(::ros2srrc_data::msg::Joints::_joint7_type arg)
  {
    msg_.joint7 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint6
{
public:
  explicit Init_Joints_joint6(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_joint7 joint6(::ros2srrc_data::msg::Joints::_joint6_type arg)
  {
    msg_.joint6 = std::move(arg);
    return Init_Joints_joint7(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint5
{
public:
  explicit Init_Joints_joint5(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_joint6 joint5(::ros2srrc_data::msg::Joints::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return Init_Joints_joint6(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint4
{
public:
  explicit Init_Joints_joint4(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_joint5 joint4(::ros2srrc_data::msg::Joints::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_Joints_joint5(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint3
{
public:
  explicit Init_Joints_joint3(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_joint4 joint3(::ros2srrc_data::msg::Joints::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_Joints_joint4(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint2
{
public:
  explicit Init_Joints_joint2(::ros2srrc_data::msg::Joints & msg)
  : msg_(msg)
  {}
  Init_Joints_joint3 joint2(::ros2srrc_data::msg::Joints::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_Joints_joint3(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

class Init_Joints_joint1
{
public:
  Init_Joints_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Joints_joint2 joint1(::ros2srrc_data::msg::Joints::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_Joints_joint2(msg_);
  }

private:
  ::ros2srrc_data::msg::Joints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Joints>()
{
  return ros2srrc_data::msg::builder::Init_Joints_joint1();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINTS__BUILDER_HPP_
