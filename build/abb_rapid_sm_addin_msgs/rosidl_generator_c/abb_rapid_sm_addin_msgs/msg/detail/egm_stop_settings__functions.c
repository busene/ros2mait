// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMStopSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(abb_rapid_sm_addin_msgs__msg__EGMStopSettings * msg)
{
  if (!msg) {
    return false;
  }
  // ramp_out_time
  return true;
}

void
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(abb_rapid_sm_addin_msgs__msg__EGMStopSettings * msg)
{
  if (!msg) {
    return;
  }
  // ramp_out_time
}

bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMStopSettings * lhs, const abb_rapid_sm_addin_msgs__msg__EGMStopSettings * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ramp_out_time
  if (lhs->ramp_out_time != rhs->ramp_out_time) {
    return false;
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMStopSettings * input,
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings * output)
{
  if (!input || !output) {
    return false;
  }
  // ramp_out_time
  output->ramp_out_time = input->ramp_out_time;
  return true;
}

abb_rapid_sm_addin_msgs__msg__EGMStopSettings *
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings * msg = (abb_rapid_sm_addin_msgs__msg__EGMStopSettings *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings));
  bool success = abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__destroy(abb_rapid_sm_addin_msgs__msg__EGMStopSettings * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__init(abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings * data = NULL;

  if (size) {
    data = (abb_rapid_sm_addin_msgs__msg__EGMStopSettings *)allocator.zero_allocate(size, sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(&data[i - 1]);
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
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__fini(abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * array)
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
      abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(&array->data[i]);
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

abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence *
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * array = (abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_sm_addin_msgs__msg__EGMStopSettings);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_sm_addin_msgs__msg__EGMStopSettings * data =
      (abb_rapid_sm_addin_msgs__msg__EGMStopSettings *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
