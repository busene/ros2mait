// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_egm_msgs__msg__EGMChannelState __attribute__((deprecated))
#else
# define DEPRECATED__abb_egm_msgs__msg__EGMChannelState __declspec(deprecated)
#endif

namespace abb_egm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMChannelState_
{
  using Type = EGMChannelState_<ContainerAllocator>;

  explicit EGMChannelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->active = false;
      this->egm_convergence_met = false;
      this->egm_client_state = 0;
      this->motor_state = 0;
      this->rapid_execution_state = 0;
      this->utilization_rate = 0.0;
    }
  }

  explicit EGMChannelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->active = false;
      this->egm_convergence_met = false;
      this->egm_client_state = 0;
      this->motor_state = 0;
      this->rapid_execution_state = 0;
      this->utilization_rate = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _active_type =
    bool;
  _active_type active;
  using _egm_convergence_met_type =
    bool;
  _egm_convergence_met_type egm_convergence_met;
  using _egm_client_state_type =
    uint8_t;
  _egm_client_state_type egm_client_state;
  using _motor_state_type =
    uint8_t;
  _motor_state_type motor_state;
  using _rapid_execution_state_type =
    uint8_t;
  _rapid_execution_state_type rapid_execution_state;
  using _utilization_rate_type =
    double;
  _utilization_rate_type utilization_rate;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__egm_convergence_met(
    const bool & _arg)
  {
    this->egm_convergence_met = _arg;
    return *this;
  }
  Type & set__egm_client_state(
    const uint8_t & _arg)
  {
    this->egm_client_state = _arg;
    return *this;
  }
  Type & set__motor_state(
    const uint8_t & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }
  Type & set__rapid_execution_state(
    const uint8_t & _arg)
  {
    this->rapid_execution_state = _arg;
    return *this;
  }
  Type & set__utilization_rate(
    const double & _arg)
  {
    this->utilization_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EGM_UNDEFINED =
    1u;
  static constexpr uint8_t EGM_ERROR =
    2u;
  static constexpr uint8_t EGM_STOPPED =
    3u;
  static constexpr uint8_t EGM_RUNNING =
    4u;
  static constexpr uint8_t MOTORS_UNDEFINED =
    1u;
  static constexpr uint8_t MOTORS_ON =
    2u;
  static constexpr uint8_t MOTORS_OFF =
    3u;
  static constexpr uint8_t RAPID_UNDEFINED =
    1u;
  static constexpr uint8_t RAPID_STOPPED =
    2u;
  static constexpr uint8_t RAPID_RUNNING =
    3u;

  // pointer types
  using RawPtr =
    abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_egm_msgs__msg__EGMChannelState
    std::shared_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_egm_msgs__msg__EGMChannelState
    std::shared_ptr<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMChannelState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->egm_convergence_met != other.egm_convergence_met) {
      return false;
    }
    if (this->egm_client_state != other.egm_client_state) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    if (this->rapid_execution_state != other.rapid_execution_state) {
      return false;
    }
    if (this->utilization_rate != other.utilization_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMChannelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMChannelState_

// alias to use template instance with default allocator
using EGMChannelState =
  abb_egm_msgs::msg::EGMChannelState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::EGM_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::EGM_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::EGM_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::EGM_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::MOTORS_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::MOTORS_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::MOTORS_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::RAPID_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::RAPID_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EGMChannelState_<ContainerAllocator>::RAPID_RUNNING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace abb_egm_msgs

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_HPP_
