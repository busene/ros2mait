// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__FUNCTIONS_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.h"

/// Initialize msg/EGMRunSettings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings
 * )) before or use
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__init(abb_rapid_sm_addin_msgs__msg__EGMRunSettings * msg);

/// Finalize msg/EGMRunSettings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
void
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__fini(abb_rapid_sm_addin_msgs__msg__EGMRunSettings * msg);

/// Create msg/EGMRunSettings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
abb_rapid_sm_addin_msgs__msg__EGMRunSettings *
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__create();

/// Destroy msg/EGMRunSettings message.
/**
 * It calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
void
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__destroy(abb_rapid_sm_addin_msgs__msg__EGMRunSettings * msg);

/// Check for msg/EGMRunSettings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMRunSettings * lhs, const abb_rapid_sm_addin_msgs__msg__EGMRunSettings * rhs);

/// Copy a msg/EGMRunSettings message.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMRunSettings * input,
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings * output);

/// Initialize array of msg/EGMRunSettings messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__init(abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * array, size_t size);

/// Finalize array of msg/EGMRunSettings messages.
/**
 * It calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
void
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__fini(abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * array);

/// Create array of msg/EGMRunSettings messages.
/**
 * It allocates the memory for the array and calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence *
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__create(size_t size);

/// Destroy array of msg/EGMRunSettings messages.
/**
 * It calls
 * abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
void
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * array);

/// Check for msg/EGMRunSettings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * rhs);

/// Copy an array of msg/EGMRunSettings messages.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_rapid_sm_addin_msgs
bool
abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__FUNCTIONS_H_
