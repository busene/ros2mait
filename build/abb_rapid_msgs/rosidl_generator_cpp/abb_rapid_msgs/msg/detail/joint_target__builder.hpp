// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/JointTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/joint_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTarget_extax
{
public:
  explicit Init_JointTarget_extax(::abb_rapid_msgs::msg::JointTarget & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::JointTarget extax(::abb_rapid_msgs::msg::JointTarget::_extax_type arg)
  {
    msg_.extax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::JointTarget msg_;
};

class Init_JointTarget_robax
{
public:
  Init_JointTarget_robax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTarget_extax robax(::abb_rapid_msgs::msg::JointTarget::_robax_type arg)
  {
    msg_.robax = std::move(arg);
    return Init_JointTarget_extax(msg_);
  }

private:
  ::abb_rapid_msgs::msg::JointTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::JointTarget>()
{
  return abb_rapid_msgs::msg::builder::Init_JointTarget_robax();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__BUILDER_HPP_
