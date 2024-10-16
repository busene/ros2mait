// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:srv/GetIOSignal.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__BUILDER_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/srv/detail/get_io_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetIOSignal_Request_signal
{
public:
  Init_GetIOSignal_Request_signal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_robot_msgs::srv::GetIOSignal_Request signal(::abb_robot_msgs::srv::GetIOSignal_Request::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetIOSignal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::GetIOSignal_Request>()
{
  return abb_robot_msgs::srv::builder::Init_GetIOSignal_Request_signal();
}

}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetIOSignal_Response_message
{
public:
  explicit Init_GetIOSignal_Response_message(::abb_robot_msgs::srv::GetIOSignal_Response & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::GetIOSignal_Response message(::abb_robot_msgs::srv::GetIOSignal_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetIOSignal_Response msg_;
};

class Init_GetIOSignal_Response_result_code
{
public:
  explicit Init_GetIOSignal_Response_result_code(::abb_robot_msgs::srv::GetIOSignal_Response & msg)
  : msg_(msg)
  {}
  Init_GetIOSignal_Response_message result_code(::abb_robot_msgs::srv::GetIOSignal_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_GetIOSignal_Response_message(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetIOSignal_Response msg_;
};

class Init_GetIOSignal_Response_value
{
public:
  Init_GetIOSignal_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIOSignal_Response_result_code value(::abb_robot_msgs::srv::GetIOSignal_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_GetIOSignal_Response_result_code(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetIOSignal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::GetIOSignal_Response>()
{
  return abb_robot_msgs::srv::builder::Init_GetIOSignal_Response_value();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__BUILDER_HPP_
