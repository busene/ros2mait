// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetRAPIDRoutine.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/srv/detail/set_rapid_routine__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRAPIDRoutine_Request_routine
{
public:
  explicit Init_SetRAPIDRoutine_Request_routine(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request routine(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request::_routine_type arg)
  {
    msg_.routine = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request msg_;
};

class Init_SetRAPIDRoutine_Request_task
{
public:
  Init_SetRAPIDRoutine_Request_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRAPIDRoutine_Request_routine task(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_SetRAPIDRoutine_Request_routine(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Request>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetRAPIDRoutine_Request_task();
}

}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRAPIDRoutine_Response_message
{
public:
  explicit Init_SetRAPIDRoutine_Response_message(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response message(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response msg_;
};

class Init_SetRAPIDRoutine_Response_result_code
{
public:
  Init_SetRAPIDRoutine_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRAPIDRoutine_Response_message result_code(::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetRAPIDRoutine_Response_message(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetRAPIDRoutine_Response>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetRAPIDRoutine_Response_result_code();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__BUILDER_HPP_
