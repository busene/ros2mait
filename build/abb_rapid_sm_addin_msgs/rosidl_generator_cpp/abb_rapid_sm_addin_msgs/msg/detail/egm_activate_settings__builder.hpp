// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMActivateSettings_max_speed_deviation
{
public:
  explicit Init_EGMActivateSettings_max_speed_deviation(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings max_speed_deviation(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_max_speed_deviation_type arg)
  {
    msg_.max_speed_deviation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_sample_rate
{
public:
  explicit Init_EGMActivateSettings_sample_rate(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_max_speed_deviation sample_rate(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_sample_rate_type arg)
  {
    msg_.sample_rate = std::move(arg);
    return Init_EGMActivateSettings_max_speed_deviation(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_lp_filter
{
public:
  explicit Init_EGMActivateSettings_lp_filter(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_sample_rate lp_filter(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_lp_filter_type arg)
  {
    msg_.lp_filter = std::move(arg);
    return Init_EGMActivateSettings_sample_rate(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_cond_min_max
{
public:
  explicit Init_EGMActivateSettings_cond_min_max(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_lp_filter cond_min_max(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_cond_min_max_type arg)
  {
    msg_.cond_min_max = std::move(arg);
    return Init_EGMActivateSettings_lp_filter(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_sensor_frame
{
public:
  explicit Init_EGMActivateSettings_sensor_frame(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_cond_min_max sensor_frame(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_sensor_frame_type arg)
  {
    msg_.sensor_frame = std::move(arg);
    return Init_EGMActivateSettings_cond_min_max(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_correction_frame
{
public:
  explicit Init_EGMActivateSettings_correction_frame(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_sensor_frame correction_frame(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_correction_frame_type arg)
  {
    msg_.correction_frame = std::move(arg);
    return Init_EGMActivateSettings_sensor_frame(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_wobj
{
public:
  explicit Init_EGMActivateSettings_wobj(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & msg)
  : msg_(msg)
  {}
  Init_EGMActivateSettings_correction_frame wobj(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_wobj_type arg)
  {
    msg_.wobj = std::move(arg);
    return Init_EGMActivateSettings_correction_frame(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

class Init_EGMActivateSettings_tool
{
public:
  Init_EGMActivateSettings_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMActivateSettings_wobj tool(::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings::_tool_type arg)
  {
    msg_.tool = std::move(arg);
    return Init_EGMActivateSettings_wobj(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_EGMActivateSettings_tool();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__BUILDER_HPP_
