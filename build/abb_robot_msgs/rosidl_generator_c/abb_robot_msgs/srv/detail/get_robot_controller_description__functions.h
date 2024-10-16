// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_robot_msgs:srv/GetRobotControllerDescription.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__FUNCTIONS_H_
#define ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_robot_msgs/srv/detail/get_robot_controller_description__struct.h"

/// Initialize srv/GetRobotControllerDescription message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request
 * )) before or use
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__init(abb_robot_msgs__srv__GetRobotControllerDescription_Request * msg);

/// Finalize srv/GetRobotControllerDescription message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Request__fini(abb_robot_msgs__srv__GetRobotControllerDescription_Request * msg);

/// Create srv/GetRobotControllerDescription message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__srv__GetRobotControllerDescription_Request *
abb_robot_msgs__srv__GetRobotControllerDescription_Request__create();

/// Destroy srv/GetRobotControllerDescription message.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Request__destroy(abb_robot_msgs__srv__GetRobotControllerDescription_Request * msg);

/// Check for srv/GetRobotControllerDescription message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__are_equal(const abb_robot_msgs__srv__GetRobotControllerDescription_Request * lhs, const abb_robot_msgs__srv__GetRobotControllerDescription_Request * rhs);

/// Copy a srv/GetRobotControllerDescription message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__copy(
  const abb_robot_msgs__srv__GetRobotControllerDescription_Request * input,
  abb_robot_msgs__srv__GetRobotControllerDescription_Request * output);

/// Initialize array of srv/GetRobotControllerDescription messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__init(abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetRobotControllerDescription messages.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__fini(abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * array);

/// Create array of srv/GetRobotControllerDescription messages.
/**
 * It allocates the memory for the array and calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence *
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetRobotControllerDescription messages.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__destroy(abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * array);

/// Check for srv/GetRobotControllerDescription message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__are_equal(const abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * lhs, const abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * rhs);

/// Copy an array of srv/GetRobotControllerDescription messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence__copy(
  const abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * input,
  abb_robot_msgs__srv__GetRobotControllerDescription_Request__Sequence * output);

/// Initialize srv/GetRobotControllerDescription message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response
 * )) before or use
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__init(abb_robot_msgs__srv__GetRobotControllerDescription_Response * msg);

/// Finalize srv/GetRobotControllerDescription message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Response__fini(abb_robot_msgs__srv__GetRobotControllerDescription_Response * msg);

/// Create srv/GetRobotControllerDescription message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__srv__GetRobotControllerDescription_Response *
abb_robot_msgs__srv__GetRobotControllerDescription_Response__create();

/// Destroy srv/GetRobotControllerDescription message.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Response__destroy(abb_robot_msgs__srv__GetRobotControllerDescription_Response * msg);

/// Check for srv/GetRobotControllerDescription message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__are_equal(const abb_robot_msgs__srv__GetRobotControllerDescription_Response * lhs, const abb_robot_msgs__srv__GetRobotControllerDescription_Response * rhs);

/// Copy a srv/GetRobotControllerDescription message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__copy(
  const abb_robot_msgs__srv__GetRobotControllerDescription_Response * input,
  abb_robot_msgs__srv__GetRobotControllerDescription_Response * output);

/// Initialize array of srv/GetRobotControllerDescription messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__init(abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetRobotControllerDescription messages.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__fini(abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * array);

/// Create array of srv/GetRobotControllerDescription messages.
/**
 * It allocates the memory for the array and calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence *
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetRobotControllerDescription messages.
/**
 * It calls
 * abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__destroy(abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * array);

/// Check for srv/GetRobotControllerDescription message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__are_equal(const abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * lhs, const abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * rhs);

/// Copy an array of srv/GetRobotControllerDescription messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence__copy(
  const abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * input,
  abb_robot_msgs__srv__GetRobotControllerDescription_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__GET_ROBOT_CONTROLLER_DESCRIPTION__FUNCTIONS_H_
