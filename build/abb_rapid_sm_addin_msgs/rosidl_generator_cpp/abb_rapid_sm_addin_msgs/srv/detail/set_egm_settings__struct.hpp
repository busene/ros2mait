// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetEGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__STRUCT_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'settings'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEGMSettings_Request_
{
  using Type = SetEGMSettings_Request_<ContainerAllocator>;

  explicit SetEGMSettings_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : settings(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
    }
  }

  explicit SetEGMSettings_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task(_alloc),
    settings(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task = "";
    }
  }

  // field types and members
  using _task_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type task;
  using _settings_type =
    abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator>;
  _settings_type settings;

  // setters for named parameter idiom
  Type & set__task(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__settings(
    const abb_rapid_sm_addin_msgs::msg::EGMSettings_<ContainerAllocator> & _arg)
  {
    this->settings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEGMSettings_Request_ & other) const
  {
    if (this->task != other.task) {
      return false;
    }
    if (this->settings != other.settings) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEGMSettings_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEGMSettings_Request_

// alias to use template instance with default allocator
using SetEGMSettings_Request =
  abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs


#ifndef _WIN32
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response __declspec(deprecated)
#endif

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEGMSettings_Response_
{
  using Type = SetEGMSettings_Response_<ContainerAllocator>;

  explicit SetEGMSettings_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0;
      this->message = "";
    }
  }

  explicit SetEGMSettings_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response
    std::shared_ptr<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEGMSettings_Response_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEGMSettings_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEGMSettings_Response_

// alias to use template instance with default allocator
using SetEGMSettings_Response =
  abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

struct SetEGMSettings
{
  using Request = abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request;
  using Response = abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response;
};

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_EGM_SETTINGS__STRUCT_HPP_
