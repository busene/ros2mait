// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/conf_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfData_cfx
{
public:
  explicit Init_ConfData_cfx(::abb_rapid_msgs::msg::ConfData & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::ConfData cfx(::abb_rapid_msgs::msg::ConfData::_cfx_type arg)
  {
    msg_.cfx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ConfData msg_;
};

class Init_ConfData_cf6
{
public:
  explicit Init_ConfData_cf6(::abb_rapid_msgs::msg::ConfData & msg)
  : msg_(msg)
  {}
  Init_ConfData_cfx cf6(::abb_rapid_msgs::msg::ConfData::_cf6_type arg)
  {
    msg_.cf6 = std::move(arg);
    return Init_ConfData_cfx(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ConfData msg_;
};

class Init_ConfData_cf4
{
public:
  explicit Init_ConfData_cf4(::abb_rapid_msgs::msg::ConfData & msg)
  : msg_(msg)
  {}
  Init_ConfData_cf6 cf4(::abb_rapid_msgs::msg::ConfData::_cf4_type arg)
  {
    msg_.cf4 = std::move(arg);
    return Init_ConfData_cf6(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ConfData msg_;
};

class Init_ConfData_cf1
{
public:
  Init_ConfData_cf1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfData_cf4 cf1(::abb_rapid_msgs::msg::ConfData::_cf1_type arg)
  {
    msg_.cf1 = std::move(arg);
    return Init_ConfData_cf4(msg_);
  }

private:
  ::abb_rapid_msgs::msg::ConfData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::ConfData>()
{
  return abb_rapid_msgs::msg::builder::Init_ConfData_cf1();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__BUILDER_HPP_
