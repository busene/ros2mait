// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__StateMachineState __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__StateMachineState __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineState_
{
  using Type = StateMachineState_<ContainerAllocator>;

  explicit StateMachineState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rapid_task = "";
      this->sm_state = 0;
      this->egm_action = 0;
    }
  }

  explicit StateMachineState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rapid_task(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rapid_task = "";
      this->sm_state = 0;
      this->egm_action = 0;
    }
  }

  // field types and members
  using _rapid_task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rapid_task_type rapid_task;
  using _sm_state_type =
    uint8_t;
  _sm_state_type sm_state;
  using _egm_action_type =
    uint8_t;
  _egm_action_type egm_action;

  // setters for named parameter idiom
  Type & set__rapid_task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rapid_task = _arg;
    return *this;
  }
  Type & set__sm_state(
    const uint8_t & _arg)
  {
    this->sm_state = _arg;
    return *this;
  }
  Type & set__egm_action(
    const uint8_t & _arg)
  {
    this->egm_action = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SM_STATE_UNKNOWN =
    1u;
  static constexpr uint8_t SM_STATE_IDLE =
    2u;
  static constexpr uint8_t SM_STATE_INITIALIZE =
    3u;
  static constexpr uint8_t SM_STATE_RUN_RAPID_ROUTINE =
    4u;
  static constexpr uint8_t SM_STATE_RUN_EGM_ROUTINE =
    5u;
  static constexpr uint8_t EGM_ACTION_UNKNOWN =
    1u;
  static constexpr uint8_t EGM_ACTION_NONE =
    2u;
  static constexpr uint8_t EGM_ACTION_RUN_JOINT =
    3u;
  static constexpr uint8_t EGM_ACTION_RUN_POSE =
    4u;
  static constexpr uint8_t EGM_ACTION_STOP =
    5u;
  static constexpr uint8_t EGM_ACTION_START_STREAM =
    6u;
  static constexpr uint8_t EGM_ACTION_STOP_STREAM =
    7u;

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__StateMachineState
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__StateMachineState
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::StateMachineState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineState_ & other) const
  {
    if (this->rapid_task != other.rapid_task) {
      return false;
    }
    if (this->sm_state != other.sm_state) {
      return false;
    }
    if (this->egm_action != other.egm_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineState_

// alias to use template instance with default allocator
using StateMachineState =
  abb_rapid_sm_addin_msgs::msg::StateMachineState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::SM_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::SM_STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::SM_STATE_INITIALIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::SM_STATE_RUN_RAPID_ROUTINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::SM_STATE_RUN_EGM_ROUTINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_RUN_JOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_RUN_POSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_START_STREAM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::EGM_ACTION_STOP_STREAM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_
