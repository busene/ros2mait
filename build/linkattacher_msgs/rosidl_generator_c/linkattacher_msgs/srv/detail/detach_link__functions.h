// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from linkattacher_msgs:srv/DetachLink.idl
// generated code does not contain a copyright notice

#ifndef LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__FUNCTIONS_H_
#define LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "linkattacher_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "linkattacher_msgs/srv/detail/detach_link__struct.h"

/// Initialize srv/DetachLink message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * linkattacher_msgs__srv__DetachLink_Request
 * )) before or use
 * linkattacher_msgs__srv__DetachLink_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__init(linkattacher_msgs__srv__DetachLink_Request * msg);

/// Finalize srv/DetachLink message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Request__fini(linkattacher_msgs__srv__DetachLink_Request * msg);

/// Create srv/DetachLink message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * linkattacher_msgs__srv__DetachLink_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
linkattacher_msgs__srv__DetachLink_Request *
linkattacher_msgs__srv__DetachLink_Request__create();

/// Destroy srv/DetachLink message.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Request__destroy(linkattacher_msgs__srv__DetachLink_Request * msg);

/// Check for srv/DetachLink message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__are_equal(const linkattacher_msgs__srv__DetachLink_Request * lhs, const linkattacher_msgs__srv__DetachLink_Request * rhs);

/// Copy a srv/DetachLink message.
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
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__copy(
  const linkattacher_msgs__srv__DetachLink_Request * input,
  linkattacher_msgs__srv__DetachLink_Request * output);

/// Initialize array of srv/DetachLink messages.
/**
 * It allocates the memory for the number of elements and calls
 * linkattacher_msgs__srv__DetachLink_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__Sequence__init(linkattacher_msgs__srv__DetachLink_Request__Sequence * array, size_t size);

/// Finalize array of srv/DetachLink messages.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Request__Sequence__fini(linkattacher_msgs__srv__DetachLink_Request__Sequence * array);

/// Create array of srv/DetachLink messages.
/**
 * It allocates the memory for the array and calls
 * linkattacher_msgs__srv__DetachLink_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
linkattacher_msgs__srv__DetachLink_Request__Sequence *
linkattacher_msgs__srv__DetachLink_Request__Sequence__create(size_t size);

/// Destroy array of srv/DetachLink messages.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Request__Sequence__destroy(linkattacher_msgs__srv__DetachLink_Request__Sequence * array);

/// Check for srv/DetachLink message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__Sequence__are_equal(const linkattacher_msgs__srv__DetachLink_Request__Sequence * lhs, const linkattacher_msgs__srv__DetachLink_Request__Sequence * rhs);

/// Copy an array of srv/DetachLink messages.
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
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Request__Sequence__copy(
  const linkattacher_msgs__srv__DetachLink_Request__Sequence * input,
  linkattacher_msgs__srv__DetachLink_Request__Sequence * output);

/// Initialize srv/DetachLink message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * linkattacher_msgs__srv__DetachLink_Response
 * )) before or use
 * linkattacher_msgs__srv__DetachLink_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__init(linkattacher_msgs__srv__DetachLink_Response * msg);

/// Finalize srv/DetachLink message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Response__fini(linkattacher_msgs__srv__DetachLink_Response * msg);

/// Create srv/DetachLink message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * linkattacher_msgs__srv__DetachLink_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
linkattacher_msgs__srv__DetachLink_Response *
linkattacher_msgs__srv__DetachLink_Response__create();

/// Destroy srv/DetachLink message.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Response__destroy(linkattacher_msgs__srv__DetachLink_Response * msg);

/// Check for srv/DetachLink message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__are_equal(const linkattacher_msgs__srv__DetachLink_Response * lhs, const linkattacher_msgs__srv__DetachLink_Response * rhs);

/// Copy a srv/DetachLink message.
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
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__copy(
  const linkattacher_msgs__srv__DetachLink_Response * input,
  linkattacher_msgs__srv__DetachLink_Response * output);

/// Initialize array of srv/DetachLink messages.
/**
 * It allocates the memory for the number of elements and calls
 * linkattacher_msgs__srv__DetachLink_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__Sequence__init(linkattacher_msgs__srv__DetachLink_Response__Sequence * array, size_t size);

/// Finalize array of srv/DetachLink messages.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Response__Sequence__fini(linkattacher_msgs__srv__DetachLink_Response__Sequence * array);

/// Create array of srv/DetachLink messages.
/**
 * It allocates the memory for the array and calls
 * linkattacher_msgs__srv__DetachLink_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
linkattacher_msgs__srv__DetachLink_Response__Sequence *
linkattacher_msgs__srv__DetachLink_Response__Sequence__create(size_t size);

/// Destroy array of srv/DetachLink messages.
/**
 * It calls
 * linkattacher_msgs__srv__DetachLink_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
void
linkattacher_msgs__srv__DetachLink_Response__Sequence__destroy(linkattacher_msgs__srv__DetachLink_Response__Sequence * array);

/// Check for srv/DetachLink message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__Sequence__are_equal(const linkattacher_msgs__srv__DetachLink_Response__Sequence * lhs, const linkattacher_msgs__srv__DetachLink_Response__Sequence * rhs);

/// Copy an array of srv/DetachLink messages.
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
ROSIDL_GENERATOR_C_PUBLIC_linkattacher_msgs
bool
linkattacher_msgs__srv__DetachLink_Response__Sequence__copy(
  const linkattacher_msgs__srv__DetachLink_Response__Sequence * input,
  linkattacher_msgs__srv__DetachLink_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LINKATTACHER_MSGS__SRV__DETAIL__DETACH_LINK__FUNCTIONS_H_
