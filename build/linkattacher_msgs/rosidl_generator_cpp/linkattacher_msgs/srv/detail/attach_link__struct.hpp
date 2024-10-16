// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from linkattacher_msgs:srv/AttachLink.idl
// generated code does not contain a copyright notice

#ifndef LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__STRUCT_HPP_
#define LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__linkattacher_msgs__srv__AttachLink_Request __attribute__((deprecated))
#else
# define DEPRECATED__linkattacher_msgs__srv__AttachLink_Request __declspec(deprecated)
#endif

namespace linkattacher_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachLink_Request_
{
  using Type = AttachLink_Request_<ContainerAllocator>;

  explicit AttachLink_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1_name = "";
      this->link1_name = "";
      this->model2_name = "";
      this->link2_name = "";
    }
  }

  explicit AttachLink_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model1_name(_alloc),
    link1_name(_alloc),
    model2_name(_alloc),
    link2_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1_name = "";
      this->link1_name = "";
      this->model2_name = "";
      this->link2_name = "";
    }
  }

  // field types and members
  using _model1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model1_name_type model1_name;
  using _link1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link1_name_type link1_name;
  using _model2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model2_name_type model2_name;
  using _link2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link2_name_type link2_name;

  // setters for named parameter idiom
  Type & set__model1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model1_name = _arg;
    return *this;
  }
  Type & set__link1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link1_name = _arg;
    return *this;
  }
  Type & set__model2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model2_name = _arg;
    return *this;
  }
  Type & set__link2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link2_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__linkattacher_msgs__srv__AttachLink_Request
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__linkattacher_msgs__srv__AttachLink_Request
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachLink_Request_ & other) const
  {
    if (this->model1_name != other.model1_name) {
      return false;
    }
    if (this->link1_name != other.link1_name) {
      return false;
    }
    if (this->model2_name != other.model2_name) {
      return false;
    }
    if (this->link2_name != other.link2_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachLink_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachLink_Request_

// alias to use template instance with default allocator
using AttachLink_Request =
  linkattacher_msgs::srv::AttachLink_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace linkattacher_msgs


#ifndef _WIN32
# define DEPRECATED__linkattacher_msgs__srv__AttachLink_Response __attribute__((deprecated))
#else
# define DEPRECATED__linkattacher_msgs__srv__AttachLink_Response __declspec(deprecated)
#endif

namespace linkattacher_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachLink_Response_
{
  using Type = AttachLink_Response_<ContainerAllocator>;

  explicit AttachLink_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit AttachLink_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__linkattacher_msgs__srv__AttachLink_Response
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__linkattacher_msgs__srv__AttachLink_Response
    std::shared_ptr<linkattacher_msgs::srv::AttachLink_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachLink_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachLink_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachLink_Response_

// alias to use template instance with default allocator
using AttachLink_Response =
  linkattacher_msgs::srv::AttachLink_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace linkattacher_msgs

namespace linkattacher_msgs
{

namespace srv
{

struct AttachLink
{
  using Request = linkattacher_msgs::srv::AttachLink_Request;
  using Response = linkattacher_msgs::srv::AttachLink_Response;
};

}  // namespace srv

}  // namespace linkattacher_msgs

#endif  // LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__STRUCT_HPP_
