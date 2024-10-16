// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/Pos.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__POS__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_Pos_z
{
public:
  explicit Init_Pos_z(::abb_rapid_msgs::msg::Pos & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::Pos z(::abb_rapid_msgs::msg::Pos::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Pos msg_;
};

class Init_Pos_y
{
public:
  explicit Init_Pos_y(::abb_rapid_msgs::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_z y(::abb_rapid_msgs::msg::Pos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pos_z(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Pos msg_;
};

class Init_Pos_x
{
public:
  Init_Pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_y x(::abb_rapid_msgs::msg::Pos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pos_y(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Pos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::Pos>()
{
  return abb_rapid_msgs::msg::builder::Init_Pos_x();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__POS__BUILDER_HPP_
