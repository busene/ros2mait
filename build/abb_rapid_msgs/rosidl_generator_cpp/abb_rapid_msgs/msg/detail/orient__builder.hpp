// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/Orient.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/orient__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_Orient_q4
{
public:
  explicit Init_Orient_q4(::abb_rapid_msgs::msg::Orient & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::Orient q4(::abb_rapid_msgs::msg::Orient::_q4_type arg)
  {
    msg_.q4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Orient msg_;
};

class Init_Orient_q3
{
public:
  explicit Init_Orient_q3(::abb_rapid_msgs::msg::Orient & msg)
  : msg_(msg)
  {}
  Init_Orient_q4 q3(::abb_rapid_msgs::msg::Orient::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return Init_Orient_q4(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Orient msg_;
};

class Init_Orient_q2
{
public:
  explicit Init_Orient_q2(::abb_rapid_msgs::msg::Orient & msg)
  : msg_(msg)
  {}
  Init_Orient_q3 q2(::abb_rapid_msgs::msg::Orient::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_Orient_q3(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Orient msg_;
};

class Init_Orient_q1
{
public:
  Init_Orient_q1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Orient_q2 q1(::abb_rapid_msgs::msg::Orient::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_Orient_q2(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Orient msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::Orient>()
{
  return abb_rapid_msgs::msg::builder::Init_Orient_q1();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__BUILDER_HPP_
