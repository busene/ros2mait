// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMSettings_stop
{
public:
  explicit Init_EGMSettings_stop(::abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings stop(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

class Init_EGMSettings_run
{
public:
  explicit Init_EGMSettings_run(::abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
  : msg_(msg)
  {}
  Init_EGMSettings_stop run(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_run_type arg)
  {
    msg_.run = std::move(arg);
    return Init_EGMSettings_stop(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

class Init_EGMSettings_activate
{
public:
  explicit Init_EGMSettings_activate(::abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
  : msg_(msg)
  {}
  Init_EGMSettings_run activate(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_activate_type arg)
  {
    msg_.activate = std::move(arg);
    return Init_EGMSettings_run(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

class Init_EGMSettings_setup_uc
{
public:
  explicit Init_EGMSettings_setup_uc(::abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
  : msg_(msg)
  {}
  Init_EGMSettings_activate setup_uc(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_setup_uc_type arg)
  {
    msg_.setup_uc = std::move(arg);
    return Init_EGMSettings_activate(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

class Init_EGMSettings_use_presync
{
public:
  explicit Init_EGMSettings_use_presync(::abb_rapid_sm_addin_msgs::msg::EGMSettings & msg)
  : msg_(msg)
  {}
  Init_EGMSettings_setup_uc use_presync(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_use_presync_type arg)
  {
    msg_.use_presync = std::move(arg);
    return Init_EGMSettings_setup_uc(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

class Init_EGMSettings_allow_egm_motions
{
public:
  Init_EGMSettings_allow_egm_motions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMSettings_use_presync allow_egm_motions(::abb_rapid_sm_addin_msgs::msg::EGMSettings::_allow_egm_motions_type arg)
  {
    msg_.allow_egm_motions = std::move(arg);
    return Init_EGMSettings_use_presync(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::EGMSettings>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_EGMSettings_allow_egm_motions();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__BUILDER_HPP_
