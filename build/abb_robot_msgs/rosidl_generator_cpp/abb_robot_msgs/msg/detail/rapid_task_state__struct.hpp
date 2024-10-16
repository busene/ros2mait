// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__msg__RAPIDTaskState __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__msg__RAPIDTaskState __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RAPIDTaskState_
{
  using Type = RAPIDTaskState_<ContainerAllocator>;

  explicit RAPIDTaskState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->activated = false;
      this->execution_state = 0;
      this->motion_task = false;
    }
  }

  explicit RAPIDTaskState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->activated = false;
      this->execution_state = 0;
      this->motion_task = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _activated_type =
    bool;
  _activated_type activated;
  using _execution_state_type =
    uint8_t;
  _execution_state_type execution_state;
  using _motion_task_type =
    bool;
  _motion_task_type motion_task;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__activated(
    const bool & _arg)
  {
    this->activated = _arg;
    return *this;
  }
  Type & set__execution_state(
    const uint8_t & _arg)
  {
    this->execution_state = _arg;
    return *this;
  }
  Type & set__motion_task(
    const bool & _arg)
  {
    this->motion_task = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EXECUTION_STATE_UNKNOWN =
    1u;
  static constexpr uint8_t EXECUTION_STATE_READY =
    2u;
  static constexpr uint8_t EXECUTION_STATE_STOPPED =
    3u;
  static constexpr uint8_t EXECUTION_STATE_STARTED =
    4u;
  static constexpr uint8_t EXECUTION_STATE_UNINITIALIZED =
    5u;

  // pointer types
  using RawPtr =
    abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__msg__RAPIDTaskState
    std::shared_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__msg__RAPIDTaskState
    std::shared_ptr<abb_robot_msgs::msg::RAPIDTaskState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RAPIDTaskState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->activated != other.activated) {
      return false;
    }
    if (this->execution_state != other.execution_state) {
      return false;
    }
    if (this->motion_task != other.motion_task) {
      return false;
    }
    return true;
  }
  bool operator!=(const RAPIDTaskState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RAPIDTaskState_

// alias to use template instance with default allocator
using RAPIDTaskState =
  abb_robot_msgs::msg::RAPIDTaskState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RAPIDTaskState_<ContainerAllocator>::EXECUTION_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RAPIDTaskState_<ContainerAllocator>::EXECUTION_STATE_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RAPIDTaskState_<ContainerAllocator>::EXECUTION_STATE_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RAPIDTaskState_<ContainerAllocator>::EXECUTION_STATE_STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RAPIDTaskState_<ContainerAllocator>::EXECUTION_STATE_UNINITIALIZED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_HPP_
