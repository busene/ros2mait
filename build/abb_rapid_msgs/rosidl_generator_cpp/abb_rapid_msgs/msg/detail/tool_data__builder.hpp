// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/tool_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_ToolData_tload
{
public:
  explicit Init_ToolData_tload(::abb_rapid_msgs::msg::ToolData & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::ToolData tload(::abb_rapid_msgs::msg::ToolData::_tload_type arg)
  {
    msg_.tload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ToolData msg_;
};

class Init_ToolData_tframe
{
public:
  explicit Init_ToolData_tframe(::abb_rapid_msgs::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_tload tframe(::abb_rapid_msgs::msg::ToolData::_tframe_type arg)
  {
    msg_.tframe = std::move(arg);
    return Init_ToolData_tload(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ToolData msg_;
};

class Init_ToolData_robhold
{
public:
  Init_ToolData_robhold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToolData_tframe robhold(::abb_rapid_msgs::msg::ToolData::_robhold_type arg)
  {
    msg_.robhold = std::move(arg);
    return Init_ToolData_tframe(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ToolData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::ToolData>()
{
  return abb_rapid_msgs::msg::builder::Init_ToolData_robhold();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_
