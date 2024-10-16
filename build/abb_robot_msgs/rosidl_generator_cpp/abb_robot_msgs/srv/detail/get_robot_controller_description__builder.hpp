// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:srv/GetRobotControllerDescription.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__BUILDER_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/srv/detail/get_robot_controller_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::GetRobotControllerDescription_Request>()
{
  return ::abb_robot_msgs::srv::GetRobotControllerDescription_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetRobotControllerDescription_Response_message
{
public:
  explicit Init_GetRobotControllerDescription_Response_message(::abb_robot_msgs::srv::GetRobotControllerDescription_Response & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::GetRobotControllerDescription_Response message(::abb_robot_msgs::srv::GetRobotControllerDescription_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetRobotControllerDescription_Response msg_;
};

class Init_GetRobotControllerDescription_Response_result_code
{
public:
  explicit Init_GetRobotControllerDescription_Response_result_code(::abb_robot_msgs::srv::GetRobotControllerDescription_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotControllerDescription_Response_message result_code(::abb_robot_msgs::srv::GetRobotControllerDescription_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_GetRobotControllerDescription_Response_message(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetRobotControllerDescription_Response msg_;
};

class Init_GetRobotControllerDescription_Response_description
{
public:
  Init_GetRobotControllerDescription_Response_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotControllerDescription_Response_result_code description(::abb_robot_msgs::srv::GetRobotControllerDescription_Response::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_GetRobotControllerDescription_Response_result_code(msg_);
  }

private:
  ::abb_robot_msgs::srv::GetRobotControllerDescription_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::GetRobotControllerDescription_Response>()
{
  return abb_robot_msgs::srv::builder::Init_GetRobotControllerDescription_Response_description();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__BUILDER_HPP_
