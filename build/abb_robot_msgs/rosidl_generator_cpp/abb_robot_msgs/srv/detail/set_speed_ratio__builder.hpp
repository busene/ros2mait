// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:srv/SetSpeedRatio.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__SET_SPEED_RATIO__BUILDER_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__SET_SPEED_RATIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/srv/detail/set_speed_ratio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeedRatio_Request_speed_ratio
{
public:
  Init_SetSpeedRatio_Request_speed_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_robot_msgs::srv::SetSpeedRatio_Request speed_ratio(::abb_robot_msgs::srv::SetSpeedRatio_Request::_speed_ratio_type arg)
  {
    msg_.speed_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetSpeedRatio_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetSpeedRatio_Request>()
{
  return abb_robot_msgs::srv::builder::Init_SetSpeedRatio_Request_speed_ratio();
}

}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeedRatio_Response_message
{
public:
  explicit Init_SetSpeedRatio_Response_message(::abb_robot_msgs::srv::SetSpeedRatio_Response & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::SetSpeedRatio_Response message(::abb_robot_msgs::srv::SetSpeedRatio_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetSpeedRatio_Response msg_;
};

class Init_SetSpeedRatio_Response_result_code
{
public:
  Init_SetSpeedRatio_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeedRatio_Response_message result_code(::abb_robot_msgs::srv::SetSpeedRatio_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetSpeedRatio_Response_message(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetSpeedRatio_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetSpeedRatio_Response>()
{
  return abb_robot_msgs::srv::builder::Init_SetSpeedRatio_Response_result_code();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__SET_SPEED_RATIO__BUILDER_HPP_
