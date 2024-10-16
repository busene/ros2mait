// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:srv/SetRAPIDDnum.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_DNUM__BUILDER_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_DNUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/srv/detail/set_rapid_dnum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRAPIDDnum_Request_value
{
public:
  explicit Init_SetRAPIDDnum_Request_value(::abb_robot_msgs::srv::SetRAPIDDnum_Request & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::SetRAPIDDnum_Request value(::abb_robot_msgs::srv::SetRAPIDDnum_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetRAPIDDnum_Request msg_;
};

class Init_SetRAPIDDnum_Request_path
{
public:
  Init_SetRAPIDDnum_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRAPIDDnum_Request_value path(::abb_robot_msgs::srv::SetRAPIDDnum_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SetRAPIDDnum_Request_value(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetRAPIDDnum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetRAPIDDnum_Request>()
{
  return abb_robot_msgs::srv::builder::Init_SetRAPIDDnum_Request_path();
}

}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRAPIDDnum_Response_message
{
public:
  explicit Init_SetRAPIDDnum_Response_message(::abb_robot_msgs::srv::SetRAPIDDnum_Response & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::SetRAPIDDnum_Response message(::abb_robot_msgs::srv::SetRAPIDDnum_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetRAPIDDnum_Response msg_;
};

class Init_SetRAPIDDnum_Response_result_code
{
public:
  Init_SetRAPIDDnum_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRAPIDDnum_Response_message result_code(::abb_robot_msgs::srv::SetRAPIDDnum_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetRAPIDDnum_Response_message(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetRAPIDDnum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetRAPIDDnum_Response>()
{
  return abb_robot_msgs::srv::builder::Init_SetRAPIDDnum_Response_result_code();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_DNUM__BUILDER_HPP_
