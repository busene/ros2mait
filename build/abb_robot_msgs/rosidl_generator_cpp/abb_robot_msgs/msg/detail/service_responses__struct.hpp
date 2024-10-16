// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_robot_msgs:msg/ServiceResponses.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__msg__ServiceResponses __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__msg__ServiceResponses __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceResponses_
{
  using Type = ServiceResponses_<ContainerAllocator>;

  explicit ServiceResponses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ServiceResponses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SUCCESS;
  static constexpr uint16_t RC_SUCCESS =
    1u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FAILED;
  static constexpr uint16_t RC_FAILED =
    2u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SERVER_IS_BUSY;
  static constexpr uint16_t RC_SERVER_IS_BUSY =
    1001u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_FILENAME;
  static constexpr uint16_t RC_EMPTY_FILENAME =
    2001u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_SIGNAL_NAME;
  static constexpr uint16_t RC_EMPTY_SIGNAL_NAME =
    2002u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_RAPID_TASK_NAME;
  static constexpr uint16_t RC_EMPTY_RAPID_TASK_NAME =
    2003u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_RAPID_MODULE_NAME;
  static constexpr uint16_t RC_EMPTY_RAPID_MODULE_NAME =
    2004u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY_RAPID_SYMBOL_NAME;
  static constexpr uint16_t RC_EMPTY_RAPID_SYMBOL_NAME =
    2005u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NOT_IN_AUTO_MODE;
  static constexpr uint16_t RC_NOT_IN_AUTO_MODE =
    3001u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MOTORS_ARE_OFF;
  static constexpr uint16_t RC_MOTORS_ARE_OFF =
    3002u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MOTORS_ARE_ON;
  static constexpr uint16_t RC_MOTORS_ARE_ON =
    3003u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RAPID_NOT_STOPPED;
  static constexpr uint16_t RC_RAPID_NOT_STOPPED =
    3004u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RAPID_NOT_RUNNING;
  static constexpr uint16_t RC_RAPID_NOT_RUNNING =
    3005u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SM_RUNTIME_STATES_MISSING;
  static constexpr uint16_t RC_SM_RUNTIME_STATES_MISSING =
    4001u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SM_UNKNOWN_RAPID_TASK;
  static constexpr uint16_t RC_SM_UNKNOWN_RAPID_TASK =
    4002u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SM_UNINITIALIZED;
  static constexpr uint16_t RC_SM_UNINITIALIZED =
    4003u;

  // pointer types
  using RawPtr =
    abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__msg__ServiceResponses
    std::shared_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__msg__ServiceResponses
    std::shared_ptr<abb_robot_msgs::msg::ServiceResponses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceResponses_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceResponses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceResponses_

// alias to use template instance with default allocator
using ServiceResponses =
  abb_robot_msgs::msg::ServiceResponses_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::SUCCESS = "";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_SUCCESS;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::FAILED = "Service failed (e.g. timeout or resource not found, see the DEBUG log for details)";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_FAILED;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::SERVER_IS_BUSY = "Server is busy";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_SERVER_IS_BUSY;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::EMPTY_FILENAME = "Filename is empty";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_EMPTY_FILENAME;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::EMPTY_SIGNAL_NAME = "Signal name is empty";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_EMPTY_SIGNAL_NAME;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::EMPTY_RAPID_TASK_NAME = "RAPID task name is empty";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_EMPTY_RAPID_TASK_NAME;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::EMPTY_RAPID_MODULE_NAME = "RAPID module name is empty";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_EMPTY_RAPID_MODULE_NAME;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::EMPTY_RAPID_SYMBOL_NAME = "RAPID symbol name is empty";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_EMPTY_RAPID_SYMBOL_NAME;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::NOT_IN_AUTO_MODE = "Robot controller is not in AUTO mode";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_NOT_IN_AUTO_MODE;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::MOTORS_ARE_OFF = "Motors are off";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_MOTORS_ARE_OFF;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::MOTORS_ARE_ON = "Motors are on";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_MOTORS_ARE_ON;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::RAPID_NOT_STOPPED = "RAPID has not been stopped";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_RAPID_NOT_STOPPED;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::RAPID_NOT_RUNNING = "RAPID is not running";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_RAPID_NOT_RUNNING;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::SM_RUNTIME_STATES_MISSING = "No runtime states received for any StateMachine Add-In instance";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_SM_RUNTIME_STATES_MISSING;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::SM_UNKNOWN_RAPID_TASK = "RAPID task not found among known StateMachine Add-In instances";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_SM_UNKNOWN_RAPID_TASK;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ServiceResponses_<ContainerAllocator>::SM_UNINITIALIZED = "StateMachine Add-In instance has not been initialized";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ServiceResponses_<ContainerAllocator>::RC_SM_UNINITIALIZED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_HPP_
