// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__BUILDER_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_RAPIDSymbolPath_symbol
{
public:
  explicit Init_RAPIDSymbolPath_symbol(::abb_robot_msgs::msg::RAPIDSymbolPath & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::msg::RAPIDSymbolPath symbol(::abb_robot_msgs::msg::RAPIDSymbolPath::_symbol_type arg)
  {
    msg_.symbol = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDSymbolPath msg_;
};

class Init_RAPIDSymbolPath_module
{
public:
  explicit Init_RAPIDSymbolPath_module(::abb_robot_msgs::msg::RAPIDSymbolPath & msg)
  : msg_(msg)
  {}
  Init_RAPIDSymbolPath_symbol module(::abb_robot_msgs::msg::RAPIDSymbolPath::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_RAPIDSymbolPath_symbol(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDSymbolPath msg_;
};

class Init_RAPIDSymbolPath_task
{
public:
  Init_RAPIDSymbolPath_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RAPIDSymbolPath_module task(::abb_robot_msgs::msg::RAPIDSymbolPath::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_RAPIDSymbolPath_module(msg_);
  }

private:
  ::abb_robot_msgs::msg::RAPIDSymbolPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::msg::RAPIDSymbolPath>()
{
  return abb_robot_msgs::msg::builder::Init_RAPIDSymbolPath_task();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__BUILDER_HPP_
