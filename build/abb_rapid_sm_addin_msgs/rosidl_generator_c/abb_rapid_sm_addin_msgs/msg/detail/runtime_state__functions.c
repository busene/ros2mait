// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state_machines`
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__functions.h"

bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__init(abb_rapid_sm_addin_msgs__msg__RuntimeState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(msg);
    return false;
  }
  // state_machines
  if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__init(&msg->state_machines, 0)) {
    abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(msg);
    return false;
  }
  return true;
}

void
abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(abb_rapid_sm_addin_msgs__msg__RuntimeState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state_machines
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__fini(&msg->state_machines);
}

bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__are_equal(const abb_rapid_sm_addin_msgs__msg__RuntimeState * lhs, const abb_rapid_sm_addin_msgs__msg__RuntimeState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // state_machines
  if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__are_equal(
      &(lhs->state_machines), &(rhs->state_machines)))
  {
    return false;
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__copy(
  const abb_rapid_sm_addin_msgs__msg__RuntimeState * input,
  abb_rapid_sm_addin_msgs__msg__RuntimeState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // state_machines
  if (!abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence__copy(
      &(input->state_machines), &(output->state_machines)))
  {
    return false;
  }
  return true;
}

abb_rapid_sm_addin_msgs__msg__RuntimeState *
abb_rapid_sm_addin_msgs__msg__RuntimeState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__RuntimeState * msg = (abb_rapid_sm_addin_msgs__msg__RuntimeState *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState));
  bool success = abb_rapid_sm_addin_msgs__msg__RuntimeState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_sm_addin_msgs__msg__RuntimeState__destroy(abb_rapid_sm_addin_msgs__msg__RuntimeState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__init(abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__RuntimeState * data = NULL;

  if (size) {
    data = (abb_rapid_sm_addin_msgs__msg__RuntimeState *)allocator.zero_allocate(size, sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_sm_addin_msgs__msg__RuntimeState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(&data[i - 1]);
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
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__fini(abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * array)
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
      abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(&array->data[i]);
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

abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence *
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * array = (abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__RuntimeState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_sm_addin_msgs__msg__RuntimeState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_sm_addin_msgs__msg__RuntimeState * data =
      (abb_rapid_sm_addin_msgs__msg__RuntimeState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_sm_addin_msgs__msg__RuntimeState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_sm_addin_msgs__msg__RuntimeState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__RuntimeState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
