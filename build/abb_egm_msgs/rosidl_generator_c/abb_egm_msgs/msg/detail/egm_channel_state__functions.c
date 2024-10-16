// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice
#include "abb_egm_msgs/msg/detail/egm_channel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
abb_egm_msgs__msg__EGMChannelState__init(abb_egm_msgs__msg__EGMChannelState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    abb_egm_msgs__msg__EGMChannelState__fini(msg);
    return false;
  }
  // active
  // egm_convergence_met
  // egm_client_state
  // motor_state
  // rapid_execution_state
  // utilization_rate
  return true;
}

void
abb_egm_msgs__msg__EGMChannelState__fini(abb_egm_msgs__msg__EGMChannelState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // active
  // egm_convergence_met
  // egm_client_state
  // motor_state
  // rapid_execution_state
  // utilization_rate
}

bool
abb_egm_msgs__msg__EGMChannelState__are_equal(const abb_egm_msgs__msg__EGMChannelState * lhs, const abb_egm_msgs__msg__EGMChannelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // egm_convergence_met
  if (lhs->egm_convergence_met != rhs->egm_convergence_met) {
    return false;
  }
  // egm_client_state
  if (lhs->egm_client_state != rhs->egm_client_state) {
    return false;
  }
  // motor_state
  if (lhs->motor_state != rhs->motor_state) {
    return false;
  }
  // rapid_execution_state
  if (lhs->rapid_execution_state != rhs->rapid_execution_state) {
    return false;
  }
  // utilization_rate
  if (lhs->utilization_rate != rhs->utilization_rate) {
    return false;
  }
  return true;
}

bool
abb_egm_msgs__msg__EGMChannelState__copy(
  const abb_egm_msgs__msg__EGMChannelState * input,
  abb_egm_msgs__msg__EGMChannelState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // active
  output->active = input->active;
  // egm_convergence_met
  output->egm_convergence_met = input->egm_convergence_met;
  // egm_client_state
  output->egm_client_state = input->egm_client_state;
  // motor_state
  output->motor_state = input->motor_state;
  // rapid_execution_state
  output->rapid_execution_state = input->rapid_execution_state;
  // utilization_rate
  output->utilization_rate = input->utilization_rate;
  return true;
}

abb_egm_msgs__msg__EGMChannelState *
abb_egm_msgs__msg__EGMChannelState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMChannelState * msg = (abb_egm_msgs__msg__EGMChannelState *)allocator.allocate(sizeof(abb_egm_msgs__msg__EGMChannelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_egm_msgs__msg__EGMChannelState));
  bool success = abb_egm_msgs__msg__EGMChannelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_egm_msgs__msg__EGMChannelState__destroy(abb_egm_msgs__msg__EGMChannelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_egm_msgs__msg__EGMChannelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_egm_msgs__msg__EGMChannelState__Sequence__init(abb_egm_msgs__msg__EGMChannelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMChannelState * data = NULL;

  if (size) {
    data = (abb_egm_msgs__msg__EGMChannelState *)allocator.zero_allocate(size, sizeof(abb_egm_msgs__msg__EGMChannelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_egm_msgs__msg__EGMChannelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_egm_msgs__msg__EGMChannelState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abb_egm_msgs__msg__EGMChannelState__Sequence__fini(abb_egm_msgs__msg__EGMChannelState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abb_egm_msgs__msg__EGMChannelState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abb_egm_msgs__msg__EGMChannelState__Sequence *
abb_egm_msgs__msg__EGMChannelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMChannelState__Sequence * array = (abb_egm_msgs__msg__EGMChannelState__Sequence *)allocator.allocate(sizeof(abb_egm_msgs__msg__EGMChannelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_egm_msgs__msg__EGMChannelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_egm_msgs__msg__EGMChannelState__Sequence__destroy(abb_egm_msgs__msg__EGMChannelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_egm_msgs__msg__EGMChannelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_egm_msgs__msg__EGMChannelState__Sequence__are_equal(const abb_egm_msgs__msg__EGMChannelState__Sequence * lhs, const abb_egm_msgs__msg__EGMChannelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_egm_msgs__msg__EGMChannelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_egm_msgs__msg__EGMChannelState__Sequence__copy(
  const abb_egm_msgs__msg__EGMChannelState__Sequence * input,
  abb_egm_msgs__msg__EGMChannelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_egm_msgs__msg__EGMChannelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_egm_msgs__msg__EGMChannelState * data =
      (abb_egm_msgs__msg__EGMChannelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_egm_msgs__msg__EGMChannelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_egm_msgs__msg__EGMChannelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_egm_msgs__msg__EGMChannelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
