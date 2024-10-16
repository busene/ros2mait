// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/LoadData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/load_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadData_iz
{
public:
  explicit Init_LoadData_iz(::abb_rapid_msgs::msg::LoadData & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::LoadData iz(::abb_rapid_msgs::msg::LoadData::_iz_type arg)
  {
    msg_.iz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

class Init_LoadData_iy
{
public:
  explicit Init_LoadData_iy(::abb_rapid_msgs::msg::LoadData & msg)
  : msg_(msg)
  {}
  Init_LoadData_iz iy(::abb_rapid_msgs::msg::LoadData::_iy_type arg)
  {
    msg_.iy = std::move(arg);
    return Init_LoadData_iz(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

class Init_LoadData_ix
{
public:
  explicit Init_LoadData_ix(::abb_rapid_msgs::msg::LoadData & msg)
  : msg_(msg)
  {}
  Init_LoadData_iy ix(::abb_rapid_msgs::msg::LoadData::_ix_type arg)
  {
    msg_.ix = std::move(arg);
    return Init_LoadData_iy(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

class Init_LoadData_aom
{
public:
  explicit Init_LoadData_aom(::abb_rapid_msgs::msg::LoadData & msg)
  : msg_(msg)
  {}
  Init_LoadData_ix aom(::abb_rapid_msgs::msg::LoadData::_aom_type arg)
  {
    msg_.aom = std::move(arg);
    return Init_LoadData_ix(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

class Init_LoadData_cog
{
public:
  explicit Init_LoadData_cog(::abb_rapid_msgs::msg::LoadData & msg)
  : msg_(msg)
  {}
  Init_LoadData_aom cog(::abb_rapid_msgs::msg::LoadData::_cog_type arg)
  {
    msg_.cog = std::move(arg);
    return Init_LoadData_aom(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

class Init_LoadData_mass
{
public:
  Init_LoadData_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadData_cog mass(::abb_rapid_msgs::msg::LoadData::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_LoadData_cog(msg_);
  }

private:
  ::abb_rapid_msgs::msg::LoadData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::LoadData>()
{
  return abb_rapid_msgs::msg::builder::Init_LoadData_mass();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__BUILDER_HPP_
