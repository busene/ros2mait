// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMRunSettings_pos_corr_gain
{
public:
  explicit Init_EGMRunSettings_pos_corr_gain(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::EGMRunSettings pos_corr_gain(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings::_pos_corr_gain_type arg)
  {
    msg_.pos_corr_gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMRunSettings msg_;
};

class Init_EGMRunSettings_offset
{
public:
  explicit Init_EGMRunSettings_offset(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings & msg)
  : msg_(msg)
  {}
  Init_EGMRunSettings_pos_corr_gain offset(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_EGMRunSettings_pos_corr_gain(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMRunSettings msg_;
};

class Init_EGMRunSettings_ramp_in_time
{
public:
  explicit Init_EGMRunSettings_ramp_in_time(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings & msg)
  : msg_(msg)
  {}
  Init_EGMRunSettings_offset ramp_in_time(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings::_ramp_in_time_type arg)
  {
    msg_.ramp_in_time = std::move(arg);
    return Init_EGMRunSettings_offset(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMRunSettings msg_;
};

class Init_EGMRunSettings_cond_time
{
public:
  Init_EGMRunSettings_cond_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMRunSettings_ramp_in_time cond_time(::abb_rapid_sm_addin_msgs::msg::EGMRunSettings::_cond_time_type arg)
  {
    msg_.cond_time = std::move(arg);
    return Init_EGMRunSettings_ramp_in_time(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMRunSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::EGMRunSettings>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_EGMRunSettings_cond_time();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__BUILDER_HPP_
