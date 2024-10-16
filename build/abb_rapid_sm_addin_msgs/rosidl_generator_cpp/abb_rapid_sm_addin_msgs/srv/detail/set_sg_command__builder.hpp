// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetSGCommand.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/srv/detail/set_sg_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSGCommand_Request_target_position
{
public:
  explicit Init_SetSGCommand_Request_target_position(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request target_position(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request msg_;
};

class Init_SetSGCommand_Request_command
{
public:
  explicit Init_SetSGCommand_Request_command(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request & msg)
  : msg_(msg)
  {}
  Init_SetSGCommand_Request_target_position command(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_SetSGCommand_Request_target_position(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request msg_;
};

class Init_SetSGCommand_Request_task
{
public:
  Init_SetSGCommand_Request_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSGCommand_Request_command task(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_SetSGCommand_Request_command(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetSGCommand_Request_task();
}

}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSGCommand_Response_message
{
public:
  explicit Init_SetSGCommand_Response_message(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response message(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response msg_;
};

class Init_SetSGCommand_Response_result_code
{
public:
  Init_SetSGCommand_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSGCommand_Response_message result_code(::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetSGCommand_Response_message(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetSGCommand_Response_result_code();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__BUILDER_HPP_
