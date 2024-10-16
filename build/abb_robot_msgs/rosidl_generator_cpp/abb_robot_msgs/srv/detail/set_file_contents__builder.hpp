// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:srv/SetFileContents.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__BUILDER_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/srv/detail/set_file_contents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFileContents_Request_contents
{
public:
  explicit Init_SetFileContents_Request_contents(::abb_robot_msgs::srv::SetFileContents_Request & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::SetFileContents_Request contents(::abb_robot_msgs::srv::SetFileContents_Request::_contents_type arg)
  {
    msg_.contents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetFileContents_Request msg_;
};

class Init_SetFileContents_Request_filename
{
public:
  Init_SetFileContents_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFileContents_Request_contents filename(::abb_robot_msgs::srv::SetFileContents_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_SetFileContents_Request_contents(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetFileContents_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetFileContents_Request>()
{
  return abb_robot_msgs::srv::builder::Init_SetFileContents_Request_filename();
}

}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFileContents_Response_message
{
public:
  explicit Init_SetFileContents_Response_message(::abb_robot_msgs::srv::SetFileContents_Response & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::srv::SetFileContents_Response message(::abb_robot_msgs::srv::SetFileContents_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetFileContents_Response msg_;
};

class Init_SetFileContents_Response_result_code
{
public:
  Init_SetFileContents_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFileContents_Response_message result_code(::abb_robot_msgs::srv::SetFileContents_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_SetFileContents_Response_message(msg_);
  }

private:
  ::abb_robot_msgs::srv::SetFileContents_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::srv::SetFileContents_Response>()
{
  return abb_robot_msgs::srv::builder::Init_SetFileContents_Response_result_code();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__SET_FILE_CONTENTS__BUILDER_HPP_
