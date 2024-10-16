// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSetupSettings __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSetupSettings __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMSetupSettings_
{
  using Type = EGMSetupSettings_<ContainerAllocator>;

  explicit EGMSetupSettings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_filtering = false;
      this->comm_timeout = 0.0f;
    }
  }

  explicit EGMSetupSettings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_filtering = false;
      this->comm_timeout = 0.0f;
    }
  }

  // field types and members
  using _use_filtering_type =
    bool;
  _use_filtering_type use_filtering;
  using _comm_timeout_type =
    float;
  _comm_timeout_type comm_timeout;

  // setters for named parameter idiom
  Type & set__use_filtering(
    const bool & _arg)
  {
    this->use_filtering = _arg;
    return *this;
  }
  Type & set__comm_timeout(
    const float & _arg)
  {
    this->comm_timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSetupSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSetupSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMSetupSettings_ & other) const
  {
    if (this->use_filtering != other.use_filtering) {
      return false;
    }
    if (this->comm_timeout != other.comm_timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMSetupSettings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMSetupSettings_

// alias to use template instance with default allocator
using EGMSetupSettings =
  abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_HPP_
