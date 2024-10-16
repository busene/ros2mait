// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/rob_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_RobJoint_rax_6
{
public:
  explicit Init_RobJoint_rax_6(::abb_rapid_msgs::msg::RobJoint & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::RobJoint rax_6(::abb_rapid_msgs::msg::RobJoint::_rax_6_type arg)
  {
    msg_.rax_6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

class Init_RobJoint_rax_5
{
public:
  explicit Init_RobJoint_rax_5(::abb_rapid_msgs::msg::RobJoint & msg)
  : msg_(msg)
  {}
  Init_RobJoint_rax_6 rax_5(::abb_rapid_msgs::msg::RobJoint::_rax_5_type arg)
  {
    msg_.rax_5 = std::move(arg);
    return Init_RobJoint_rax_6(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

class Init_RobJoint_rax_4
{
public:
  explicit Init_RobJoint_rax_4(::abb_rapid_msgs::msg::RobJoint & msg)
  : msg_(msg)
  {}
  Init_RobJoint_rax_5 rax_4(::abb_rapid_msgs::msg::RobJoint::_rax_4_type arg)
  {
    msg_.rax_4 = std::move(arg);
    return Init_RobJoint_rax_5(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

class Init_RobJoint_rax_3
{
public:
  explicit Init_RobJoint_rax_3(::abb_rapid_msgs::msg::RobJoint & msg)
  : msg_(msg)
  {}
  Init_RobJoint_rax_4 rax_3(::abb_rapid_msgs::msg::RobJoint::_rax_3_type arg)
  {
    msg_.rax_3 = std::move(arg);
    return Init_RobJoint_rax_4(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

class Init_RobJoint_rax_2
{
public:
  explicit Init_RobJoint_rax_2(::abb_rapid_msgs::msg::RobJoint & msg)
  : msg_(msg)
  {}
  Init_RobJoint_rax_3 rax_2(::abb_rapid_msgs::msg::RobJoint::_rax_2_type arg)
  {
    msg_.rax_2 = std::move(arg);
    return Init_RobJoint_rax_3(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

class Init_RobJoint_rax_1
{
public:
  Init_RobJoint_rax_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobJoint_rax_2 rax_1(::abb_rapid_msgs::msg::RobJoint::_rax_1_type arg)
  {
    msg_.rax_1 = std::move(arg);
    return Init_RobJoint_rax_2(msg_);
  }

private:
  ::abb_rapid_msgs::msg::RobJoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::RobJoint>()
{
  return abb_rapid_msgs::msg::builder::Init_RobJoint_rax_1();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__BUILDER_HPP_
