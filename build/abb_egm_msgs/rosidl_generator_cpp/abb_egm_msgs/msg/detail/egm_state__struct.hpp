// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'egm_channels'
#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_egm_msgs__msg__EGMState __attribute__((deprecated))
#else
# define DEPRECATED__abb_egm_msgs__msg__EGMState __declspec(deprecated)
#endif

namespace abb_egm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMState_
{
  using Type = EGMState_<ContainerAllocator>;

  explicit EGMState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit EGMState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _egm_channels_type =
    std::vector<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>>;
  _egm_channels_type egm_channels;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__egm_channels(
    const std::vector<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<abb_egm_msgs::msg::EGMChannelState_<ContainerAllocator>>> & _arg)
  {
    this->egm_channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_egm_msgs::msg::EGMState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_egm_msgs::msg::EGMState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_egm_msgs::msg::EGMState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_egm_msgs::msg::EGMState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_egm_msgs__msg__EGMState
    std::shared_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_egm_msgs__msg__EGMState
    std::shared_ptr<abb_egm_msgs::msg::EGMState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->egm_channels != other.egm_channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMState_

// alias to use template instance with default allocator
using EGMState =
  abb_egm_msgs::msg::EGMState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_egm_msgs

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_HPP_
