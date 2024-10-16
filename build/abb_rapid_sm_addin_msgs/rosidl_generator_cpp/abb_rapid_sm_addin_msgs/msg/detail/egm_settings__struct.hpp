// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'setup_uc'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.hpp"
// Member 'activate'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.hpp"
// Member 'run'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.hpp"
// Member 'stop'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSettings __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSettings __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EGMSettings_
{
  using Type = EGMSettings_<ContainerAllocator>;

  explicit EGMSettings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : setup_uc(_init),
    activate(_init),
    run(_init),
    stop(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allow_egm_motions = false;
      this->use_presync = false;
    }
  }

  explicit EGMSettings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : setup_uc(_alloc, _init),
    activate(_alloc, _init),
    run(_alloc, _init),
    stop(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allow_egm_motions = false;
      this->use_presync = false;
    }
  }

  // field types and members
  using _allow_egm_motions_type =
    bool;
  _allow_egm_motions_type allow_egm_motions;
  using _use_presync_type =
    bool;
  _use_presync_type use_presync;
  using _setup_uc_type =
    abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator>;
  _setup_uc_type setup_uc;
  using _activate_type =
    abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator>;
  _activate_type activate;
  using _run_type =
    abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator>;
  _run_type run;
  using _stop_type =
    abb_rapid_sm_addin_msgs::msg::EGMStopSettings_<ContainerAllocator>;
  _stop_type stop;

  // setters for named parameter idiom
  Type & set__allow_egm_motions(
    const bool & _arg)
  {
    this->allow_egm_motions = _arg;
    return *this;
  }
  Type & set__use_presync(
    const bool & _arg)
  {
    this->use_presync = _arg;
    return *this;
  }
  Type & set__setup_uc(
    const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings_<ContainerAllocator> & _arg)
  {
    this->setup_uc = _arg;
    return *this;
  }
  Type & set__activate(
    const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings_<ContainerAllocator> & _arg)
  {
    this->activate = _arg;
    return *this;
  }
  Type & set__run(
    const abb_rapid_sm_addin_msgs::msg::EGMRunSettings_<ContainerAllocator> & _arg)
  {
    this->run = _arg;
    return *this;
  }
  Type & set__stop(
    const abb_rapid_sm_addin_msgs::msg::EGMStopSettings_<ContainerAllocator> & _arg)
  {
    this->stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__msg__EGMSettings
    std::shared_ptr<abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EGMSettings_ & other) const
  {
    if (this->allow_egm_motions != other.allow_egm_motions) {
      return false;
    }
    if (this->use_presync != other.use_presync) {
      return false;
    }
    if (this->setup_uc != other.setup_uc) {
      return false;
    }
    if (this->activate != other.activate) {
      return false;
    }
    if (this->run != other.run) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const EGMSettings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EGMSettings_

// alias to use template instance with default allocator
using EGMSettings =
  abb_rapid_sm_addin_msgs::msg::EGMSettings_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_HPP_
