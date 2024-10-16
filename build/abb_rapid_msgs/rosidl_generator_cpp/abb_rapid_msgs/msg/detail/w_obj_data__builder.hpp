// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_WObjData_oframe
{
public:
  explicit Init_WObjData_oframe(::abb_rapid_msgs::msg::WObjData & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::WObjData oframe(::abb_rapid_msgs::msg::WObjData::_oframe_type arg)
  {
    msg_.oframe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::WObjData msg_;
};

class Init_WObjData_uframe
{
public:
  explicit Init_WObjData_uframe(::abb_rapid_msgs::msg::WObjData & msg)
  : msg_(msg)
  {}
  Init_WObjData_oframe uframe(::abb_rapid_msgs::msg::WObjData::_uframe_type arg)
  {
    msg_.uframe = std::move(arg);
    return Init_WObjData_oframe(msg_);
  }

private:
  ::abb_rapid_msgs::msg::WObjData msg_;
};

class Init_WObjData_ufmec
{
public:
  explicit Init_WObjData_ufmec(::abb_rapid_msgs::msg::WObjData & msg)
  : msg_(msg)
  {}
  Init_WObjData_uframe ufmec(::abb_rapid_msgs::msg::WObjData::_ufmec_type arg)
  {
    msg_.ufmec = std::move(arg);
    return Init_WObjData_uframe(msg_);
  }

private:
  ::abb_rapid_msgs::msg::WObjData msg_;
};

class Init_WObjData_ufprog
{
public:
  explicit Init_WObjData_ufprog(::abb_rapid_msgs::msg::WObjData & msg)
  : msg_(msg)
  {}
  Init_WObjData_ufmec ufprog(::abb_rapid_msgs::msg::WObjData::_ufprog_type arg)
  {
    msg_.ufprog = std::move(arg);
    return Init_WObjData_ufmec(msg_);
  }

private:
  ::abb_rapid_msgs::msg::WObjData msg_;
};

class Init_WObjData_robhold
{
public:
  Init_WObjData_robhold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WObjData_ufprog robhold(::abb_rapid_msgs::msg::WObjData::_robhold_type arg)
  {
    msg_.robhold = std::move(arg);
    return Init_WObjData_ufprog(msg_);
  }

private:
  ::abb_rapid_msgs::msg::WObjData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::WObjData>()
{
  return abb_rapid_msgs::msg::builder::Init_WObjData_robhold();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__BUILDER_HPP_
