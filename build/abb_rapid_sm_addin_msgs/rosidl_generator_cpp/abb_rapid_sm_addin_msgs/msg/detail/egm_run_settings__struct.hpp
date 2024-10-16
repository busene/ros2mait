// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'offset'
#include "abb_rapid_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMRunSettings __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMRunSettings __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMRunSettings_
{
  using Type = EGMRunSettings_<ContainerAllocator>;

  explicit EGMRunSettings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cond_time = 0.0f;
      this->ramp_in_time = 0.0f;
      this->pos_corr_gain = 0.0f;
    }
  }

  explicit EGMRunSettings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cond_time = 0.0f;
      this->ramp_in_time = 0.0f;
      this->pos_corr_gain = 0.0f;
    }
  }

  // field types and members
  using _cond_time_type =
    float;
  _cond_time_type cond_time;
  using _ramp_in_time_type =
    float;
  _ramp_in_time_type ramp_in_time;
  using _offset_type =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator>;
  _offset_type offset;
  using _pos_corr_gain_type =
    float;
  _pos_corr_gain_type pos_corr_gain;

  // setters for named parameter idiom
  Type & set__cond_time(
    const float & _arg)
  {
    this->cond_time = _arg;
    return *this;
  }
  Type & set__ramp_in_time(
    const float & _arg)
  {
    this->ramp_in_time = _arg;
    return *this;
  }
  Type & set__offset(
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__pos_corr_gain(
    const float & _arg)
  {
    this->pos_corr_gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMRunSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMRunSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMRunSettings_ & other) const
  {
    if (this->cond_time != other.cond_time) {
      return false;
    }
    if (this->ramp_in_time != other.ramp_in_time) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->pos_corr_gain != other.pos_corr_gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMRunSettings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMRunSettings_

// alias to use template instance with default allocator
using EGMRunSettings =
  abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_HPP_
