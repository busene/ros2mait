// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetEGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEGMSettings_Request_settings
{
public:
  explicit Init_SetEGMSettings_Request_settings(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request settings(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request::_settings_type arg)
  {
    msg_.settings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request msg_;
};

class Init_SetEGMSettings_Request_task
{
public:
  Init_SetEGMSettings_Request_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEGMSettings_Request_settings task(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_SetEGMSettings_Request_settings(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetEGMSettings_Request_task();
}

}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEGMSettings_Response_message
{
public:
  explicit Init_SetEGMSettings_Response_message(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response message(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response msg_;
};

class Init_SetEGMSettings_Response_result_code
{
public:
  Init_SetEGMSettings_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEGMSettings_Response_message result_code(::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetEGMSettings_Response_message(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>()
{
  return abb_rapid_sm_addin_msgs::srv::builder::Init_SetEGMSettings_Response_result_code();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__BUILDER_HPP_
