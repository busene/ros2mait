// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tool'
#include "abb_rapid_msgs/msg/detail/tool_data__struct.hpp"
// Member 'wobj'
#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.hpp"
// Member 'correction_frame'
// Member 'sensor_frame'
#include "abb_rapid_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMActivateSettings __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMActivateSettings __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMActivateSettings_
{
  using Type = EGMActivateSettings_<ContainerAllocator>;

  explicit EGMActivateSettings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool(_init),
    wobj(_init),
    correction_frame(_init),
    sensor_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cond_min_max = 0.0f;
      this->lp_filter = 0.0f;
      this->sample_rate = 0;
      this->max_speed_deviation = 0.0f;
    }
  }

  explicit EGMActivateSettings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool(_alloc, _init),
    wobj(_alloc, _init),
    correction_frame(_alloc, _init),
    sensor_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cond_min_max = 0.0f;
      this->lp_filter = 0.0f;
      this->sample_rate = 0;
      this->max_speed_deviation = 0.0f;
    }
  }

  // field types and members
  using _tool_type =
    abb_rapid_msgs::msg::ToolData_<ContainerAllocator>;
  _tool_type tool;
  using _wobj_type =
    abb_rapid_msgs::msg::WObjData_<ContainerAllocator>;
  _wobj_type wobj;
  using _correction_frame_type =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator>;
  _correction_frame_type correction_frame;
  using _sensor_frame_type =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator>;
  _sensor_frame_type sensor_frame;
  using _cond_min_max_type =
    float;
  _cond_min_max_type cond_min_max;
  using _lp_filter_type =
    float;
  _lp_filter_type lp_filter;
  using _sample_rate_type =
    uint8_t;
  _sample_rate_type sample_rate;
  using _max_speed_deviation_type =
    float;
  _max_speed_deviation_type max_speed_deviation;

  // setters for named parameter idiom
  Type & set__tool(
    const abb_rapid_msgs::msg::ToolData_<ContainerAllocator> & _arg)
  {
    this->tool = _arg;
    return *this;
  }
  Type & set__wobj(
    const abb_rapid_msgs::msg::WObjData_<ContainerAllocator> & _arg)
  {
    this->wobj = _arg;
    return *this;
  }
  Type & set__correction_frame(
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->correction_frame = _arg;
    return *this;
  }
  Type & set__sensor_frame(
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->sensor_frame = _arg;
    return *this;
  }
  Type & set__cond_min_max(
    const float & _arg)
  {
    this->cond_min_max = _arg;
    return *this;
  }
  Type & set__lp_filter(
    const float & _arg)
  {
    this->lp_filter = _arg;
    return *this;
  }
  Type & set__sample_rate(
    const uint8_t & _arg)
  {
    this->sample_rate = _arg;
    return *this;
  }
  Type & set__max_speed_deviation(
    const float & _arg)
  {
    this->max_speed_deviation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMActivateSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMActivateSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMActivateSettings_ & other) const
  {
    if (this->tool != other.tool) {
      return false;
    }
    if (this->wobj != other.wobj) {
      return false;
    }
    if (this->correction_frame != other.correction_frame) {
      return false;
    }
    if (this->sensor_frame != other.sensor_frame) {
      return false;
    }
    if (this->cond_min_max != other.cond_min_max) {
      return false;
    }
    if (this->lp_filter != other.lp_filter) {
      return false;
    }
    if (this->sample_rate != other.sample_rate) {
      return false;
    }
    if (this->max_speed_deviation != other.max_speed_deviation) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMActivateSettings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMActivateSettings_

// alias to use template instance with default allocator
using EGMActivateSettings =
  abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_HPP_
