// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/ext_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_ExtJoint_eax_f
{
public:
  explicit Init_ExtJoint_eax_f(::abb_rapid_msgs::msg::ExtJoint & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::ExtJoint eax_f(::abb_rapid_msgs::msg::ExtJoint::_eax_f_type arg)
  {
    msg_.eax_f = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

class Init_ExtJoint_eax_e
{
public:
  explicit Init_ExtJoint_eax_e(::abb_rapid_msgs::msg::ExtJoint & msg)
  : msg_(msg)
  {}
  Init_ExtJoint_eax_f eax_e(::abb_rapid_msgs::msg::ExtJoint::_eax_e_type arg)
  {
    msg_.eax_e = std::move(arg);
    return Init_ExtJoint_eax_f(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

class Init_ExtJoint_eax_d
{
public:
  explicit Init_ExtJoint_eax_d(::abb_rapid_msgs::msg::ExtJoint & msg)
  : msg_(msg)
  {}
  Init_ExtJoint_eax_e eax_d(::abb_rapid_msgs::msg::ExtJoint::_eax_d_type arg)
  {
    msg_.eax_d = std::move(arg);
    return Init_ExtJoint_eax_e(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

class Init_ExtJoint_eax_c
{
public:
  explicit Init_ExtJoint_eax_c(::abb_rapid_msgs::msg::ExtJoint & msg)
  : msg_(msg)
  {}
  Init_ExtJoint_eax_d eax_c(::abb_rapid_msgs::msg::ExtJoint::_eax_c_type arg)
  {
    msg_.eax_c = std::move(arg);
    return Init_ExtJoint_eax_d(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

class Init_ExtJoint_eax_b
{
public:
  explicit Init_ExtJoint_eax_b(::abb_rapid_msgs::msg::ExtJoint & msg)
  : msg_(msg)
  {}
  Init_ExtJoint_eax_c eax_b(::abb_rapid_msgs::msg::ExtJoint::_eax_b_type arg)
  {
    msg_.eax_b = std::move(arg);
    return Init_ExtJoint_eax_c(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

class Init_ExtJoint_eax_a
{
public:
  Init_ExtJoint_eax_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExtJoint_eax_b eax_a(::abb_rapid_msgs::msg::ExtJoint::_eax_a_type arg)
  {
    msg_.eax_a = std::move(arg);
    return Init_ExtJoint_eax_b(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ExtJoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::ExtJoint>()
{
  return abb_rapid_msgs::msg::builder::Init_ExtJoint_eax_a();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__BUILDER_HPP_
