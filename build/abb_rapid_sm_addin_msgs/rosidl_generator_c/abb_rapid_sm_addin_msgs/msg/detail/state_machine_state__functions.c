// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rapid_task`
#include "rosidl_runtime_c/string_functions.h"

bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__init(abb_rapid_sm_addin_msgs__msg__StateMachineState * msg)
{
  if (!msg) {
    return false;
  }
  // rapid_task
  if (!rosidl_runtime_c__String__init(&msg->rapid_task)) {
    abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(msg);
    return false;
  }
  // sm_state
  // egm_action
  return true;
}

void
abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(abb_rapid_sm_addin_msgs__msg__StateMachineState * msg)
{
  if (!msg) {
    return;
  }
  // rapid_task
  rosidl_runtime_c__String__fini(&msg->rapid_task);
  // sm_state
  // egm_action
}

bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__are_equal(const abb_rapid_sm_addin_msgs__msg__StateMachineState * lhs, const abb_rapid_sm_addin_msgs__msg__StateMachineState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rapid_task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rapid_task), &(rhs->rapid_task)))
  {
    return false;
  }
  // sm_state
  if (lhs->sm_state != rhs->sm_state) {
    return false;
  }
  // egm_action
  if (lhs->egm_action != rhs->egm_action) {
    return false;
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__copy(
  const abb_rapid_sm_addin_msgs__msg__StateMachineState * input,
  abb_rapid_sm_addin_msgs__msg__StateMachineState * output)
{
  if (!input || !output) {
    return false;
  }
  // rapid_task
  if (!rosidl_runtime_c__String__copy(
      &(input->rapid_task), &(output->rapid_task)))
  {
    return false;
  }
  // sm_state
  output->sm_state = input->sm_state;
  // egm_action
  output->egm_action = input->egm_action;
  return true;
}

abb_rapid_sm_addin_msgs__msg__StateMachineState *
abb_rapid_sm_addin_msgs__msg__StateMachineState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__StateMachineState * msg = (abb_rapid_sm_addin_msgs__msg__StateMachineState *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__StateMachineState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_sm_addin_msgs__msg__StateMachineState));
  bool success = abb_rapid_sm_addin_msgs__msg__StateMachineState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_sm_addin_msgs__msg__StateMachineState__destroy(abb_rapid_sm_addin_msgs__msg__StateMachineState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__init(abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__StateMachineState * data = NULL;

  if (size) {
    data = (abb_rapid_sm_addin_msgs__msg__StateMachineState *)allocator.zero_allocate(size, sizeof(abb_rapid_sm_addin_msgs__msg__StateMachineState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_sm_addin_msgs__msg__StateMachineState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(&data[i - 1]);
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
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__fini(abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * array)
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
      abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(&array->data[i]);
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

abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * array = (abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_sm_addin_msgs__msg__StateMachineState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_sm_addin_msgs__msg__StateMachineState * data =
      (abb_rapid_sm_addin_msgs__msg__StateMachineState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_sm_addin_msgs__msg__StateMachineState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
