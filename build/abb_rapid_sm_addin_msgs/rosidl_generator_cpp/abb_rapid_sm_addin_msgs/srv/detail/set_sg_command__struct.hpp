// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetSGCommand.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSGCommand_Request_
{
  using Type = SetSGCommand_Request_<ContainerAllocator>;

  explicit SetSGCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
      this->command = 0;
      this->target_position = 0.0f;
    }
  }

  explicit SetSGCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
      this->command = 0;
      this->target_position = 0.0f;
    }
  }

  // field types and members
  using _task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type task;
  using _command_type =
    uint8_t;
  _command_type command;
  using _target_position_type =
    float;
  _target_position_type target_position;

  // setters for named parameter idiom
  Type & set__task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__target_position(
    const float & _arg)
  {
    this->target_position = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SG_COMMAND_UNKNOWN =
    1u;
  static constexpr uint8_t SG_COMMAND_NONE =
    2u;
  static constexpr uint8_t SG_COMMAND_INITIALIZE =
    3u;
  static constexpr uint8_t SG_COMMAND_CALIBRATE =
    4u;
  static constexpr uint8_t SG_COMMAND_MOVE_TO =
    5u;
  static constexpr uint8_t SG_COMMAND_GRIP_IN =
    6u;
  static constexpr uint8_t SG_COMMAND_GRIP_OUT =
    7u;
  static constexpr uint8_t SG_COMMAND_BLOW_ON_1 =
    8u;
  static constexpr uint8_t SG_COMMAND_BLOW_ON_2 =
    9u;
  static constexpr uint8_t SG_COMMAND_BLOW_OFF_1 =
    10u;
  static constexpr uint8_t SG_COMMAND_BLOW_OFF_2 =
    11u;
  static constexpr uint8_t SG_COMMAND_VACUUM_ON_1 =
    12u;
  static constexpr uint8_t SG_COMMAND_VACUUM_ON_2 =
    13u;
  static constexpr uint8_t SG_COMMAND_VACUUM_OFF_1 =
    14u;
  static constexpr uint8_t SG_COMMAND_VACUUM_OFF_2 =
    15u;

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSGCommand_Request_ & other) const
  {
    if (this->task != other.task) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSGCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSGCommand_Request_

// alias to use template instance with default allocator
using SetSGCommand_Request =
  abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_INITIALIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_CALIBRATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_MOVE_TO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_GRIP_IN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_GRIP_OUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_BLOW_ON_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_BLOW_ON_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_BLOW_OFF_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_BLOW_OFF_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_VACUUM_ON_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_VACUUM_ON_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_VACUUM_OFF_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetSGCommand_Request_<ContainerAllocator>::SG_COMMAND_VACUUM_OFF_2;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs


#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSGCommand_Response_
{
  using Type = SetSGCommand_Response_<ContainerAllocator>;

  explicit SetSGCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0;
      this->message = "";
    }
  }

  explicit SetSGCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _result_code_type =
    uint16_t;
  _result_code_type result_code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__result_code(
    const uint16_t & _arg)
  {
    this->result_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSGCommand_Response_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSGCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSGCommand_Response_

// alias to use template instance with default allocator
using SetSGCommand_Response =
  abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

struct SetSGCommand
{
  using Request = abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request;
  using Response = abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response;
};

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_HPP_
