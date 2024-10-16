// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/GetEGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/srv/detail/get_egm_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEGMSettings_Request_task
{
public:
  Init_GetEGMSettings_Request_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Request task(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Request::_task_type arg)
  {
    msg_.task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Request>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_GetEGMSettings_Request_task();
}

}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_GetEGMSettings_Response_message
{
public:
  explicit Init_GetEGMSettings_Response_message(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response message(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response msg_;
};

class Init_GetEGMSettings_Response_result_code
{
public:
  explicit Init_GetEGMSettings_Response_result_code(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response & msg)
  : msg_(msg)
  {}
  Init_GetEGMSettings_Response_message result_code(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_GetEGMSettings_Response_message(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response msg_;
};

class Init_GetEGMSettings_Response_settings
{
public:
  Init_GetEGMSettings_Response_settings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEGMSettings_Response_result_code settings(::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response::_settings_type arg)
  {
    msg_.settings = std::move(arg);
    return Init_GetEGMSettings_Response_result_code(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::GetEGMSettings_Response>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_GetEGMSettings_Response_settings();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__BUILDER_HPP_
