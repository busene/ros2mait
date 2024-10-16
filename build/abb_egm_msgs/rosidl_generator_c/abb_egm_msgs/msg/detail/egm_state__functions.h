// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__FUNCTIONS_H_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_egm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_egm_msgs/msg/detail/egm_state__struct.h"

/// Initialize msg/EGMState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_egm_msgs__msg__EGMState
 * )) before or use
 * abb_egm_msgs__msg__EGMState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__init(abb_egm_msgs__msg__EGMState * msg);

/// Finalize msg/EGMState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
void
abb_egm_msgs__msg__EGMState__fini(abb_egm_msgs__msg__EGMState * msg);

/// Create msg/EGMState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_egm_msgs__msg__EGMState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
abb_egm_msgs__msg__EGMState *
abb_egm_msgs__msg__EGMState__create();

/// Destroy msg/EGMState message.
/**
 * It calls
 * abb_egm_msgs__msg__EGMState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
void
abb_egm_msgs__msg__EGMState__destroy(abb_egm_msgs__msg__EGMState * msg);

/// Check for msg/EGMState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__are_equal(const abb_egm_msgs__msg__EGMState * lhs, const abb_egm_msgs__msg__EGMState * rhs);

/// Copy a msg/EGMState message.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__copy(
  const abb_egm_msgs__msg__EGMState * input,
  abb_egm_msgs__msg__EGMState * output);

/// Initialize array of msg/EGMState messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_egm_msgs__msg__EGMState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__Sequence__init(abb_egm_msgs__msg__EGMState__Sequence * array, size_t size);

/// Finalize array of msg/EGMState messages.
/**
 * It calls
 * abb_egm_msgs__msg__EGMState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
void
abb_egm_msgs__msg__EGMState__Sequence__fini(abb_egm_msgs__msg__EGMState__Sequence * array);

/// Create array of msg/EGMState messages.
/**
 * It allocates the memory for the array and calls
 * abb_egm_msgs__msg__EGMState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
abb_egm_msgs__msg__EGMState__Sequence *
abb_egm_msgs__msg__EGMState__Sequence__create(size_t size);

/// Destroy array of msg/EGMState messages.
/**
 * It calls
 * abb_egm_msgs__msg__EGMState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
void
abb_egm_msgs__msg__EGMState__Sequence__destroy(abb_egm_msgs__msg__EGMState__Sequence * array);

/// Check for msg/EGMState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__Sequence__are_equal(const abb_egm_msgs__msg__EGMState__Sequence * lhs, const abb_egm_msgs__msg__EGMState__Sequence * rhs);

/// Copy an array of msg/EGMState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_egm_msgs
bool
abb_egm_msgs__msg__EGMState__Sequence__copy(
  const abb_egm_msgs__msg__EGMState__Sequence * input,
  abb_egm_msgs__msg__EGMState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__FUNCTIONS_H_
