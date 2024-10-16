// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMStopSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMStopSettings_ramp_out_time
{
public:
  Init_EGMStopSettings_ramp_out_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::abb_rapid_sm_addin_msgs::msg::EGMStopSettings ramp_out_time(::abb_rapid_sm_addin_msgs::msg::EGMStopSettings::_ramp_out_time_type arg)
  {
    msg_.ramp_out_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMStopSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::EGMStopSettings>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_EGMStopSettings_ramp_out_time();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__BUILDER_HPP_
