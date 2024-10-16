// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/RobTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/rob_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_RobTarget_extax
{
public:
  explicit Init_RobTarget_extax(::abb_rapid_msgs::msg::RobTarget & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::RobTarget extax(::abb_rapid_msgs::msg::RobTarget::_extax_type arg)
  {
    msg_.extax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobTarget msg_;
};

class Init_RobTarget_robconf
{
public:
  explicit Init_RobTarget_robconf(::abb_rapid_msgs::msg::RobTarget & msg)
  : msg_(msg)
  {}
  Init_RobTarget_extax robconf(::abb_rapid_msgs::msg::RobTarget::_robconf_type arg)
  {
    msg_.robconf = std::move(arg);
    return Init_RobTarget_extax(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobTarget msg_;
};

class Init_RobTarget_rot
{
public:
  explicit Init_RobTarget_rot(::abb_rapid_msgs::msg::RobTarget & msg)
  : msg_(msg)
  {}
  Init_RobTarget_robconf rot(::abb_rapid_msgs::msg::RobTarget::_rot_type arg)
  {
    msg_.rot = std::move(arg);
    return Init_RobTarget_robconf(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobTarget msg_;
};

class Init_RobTarget_trans
{
public:
  Init_RobTarget_trans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobTarget_rot trans(::abb_rapid_msgs::msg::RobTarget::_trans_type arg)
  {
    msg_.trans = std::move(arg);
    return Init_RobTarget_rot(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::RobTarget>()
{
  return abb_rapid_msgs::msg::builder::Init_RobTarget_trans();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__BUILDER_HPP_
