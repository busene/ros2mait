// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMSetupSettings_comm_timeout
{
public:
  explicit Init_EGMSetupSettings_comm_timeout(::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings comm_timeout(::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings::_comm_timeout_type arg)
  {
    msg_.comm_timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings msg_;
};

class Init_EGMSetupSettings_use_filtering
{
public:
  Init_EGMSetupSettings_use_filtering()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMSetupSettings_comm_timeout use_filtering(::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings::_use_filtering_type arg)
  {
    msg_.use_filtering = std::move(arg);
    return Init_EGMSetupSettings_comm_timeout(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::EGMSetupSettings>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_EGMSetupSettings_use_filtering();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__BUILDER_HPP_
