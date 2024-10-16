// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Ypr.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__YPR__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__YPR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/ypr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Ypr_roll
{
public:
  explicit Init_Ypr_roll(::ros2srrc_data::msg::Ypr & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Ypr roll(::ros2srrc_data::msg::Ypr::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Ypr msg_;
};

class Init_Ypr_pitch
{
public:
  explicit Init_Ypr_pitch(::ros2srrc_data::msg::Ypr & msg)
  : msg_(msg)
  {}
  Init_Ypr_roll pitch(::ros2srrc_data::msg::Ypr::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Ypr_roll(msg_);
  }

private:
  ::ros2srrc_data::msg::Ypr msg_;
};

class Init_Ypr_yaw
{
public:
  Init_Ypr_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ypr_pitch yaw(::ros2srrc_data::msg::Ypr::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Ypr_pitch(msg_);
  }

private:
  ::ros2srrc_data::msg::Ypr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Ypr>()
{
  return ros2srrc_data::msg::builder::Init_Ypr_yaw();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__YPR__BUILDER_HPP_
