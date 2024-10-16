// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/ToolData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/tool_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tframe`
#include "abb_rapid_msgs/msg/detail/pose__functions.h"
// Member `tload`
#include "abb_rapid_msgs/msg/detail/load_data__functions.h"

bool
abb_rapid_msgs__msg__ToolData__init(abb_rapid_msgs__msg__ToolData * msg)
{
  if (!msg) {
    return false;
  }
  // robhold
  // tframe
  if (!abb_rapid_msgs__msg__Pose__init(&msg->tframe)) {
    abb_rapid_msgs__msg__ToolData__fini(msg);
    return false;
  }
  // tload
  if (!abb_rapid_msgs__msg__LoadData__init(&msg->tload)) {
    abb_rapid_msgs__msg__ToolData__fini(msg);
    return false;
  }
  return true;
}

void
abb_rapid_msgs__msg__ToolData__fini(abb_rapid_msgs__msg__ToolData * msg)
{
  if (!msg) {
    return;
  }
  // robhold
  // tframe
  abb_rapid_msgs__msg__Pose__fini(&msg->tframe);
  // tload
  abb_rapid_msgs__msg__LoadData__fini(&msg->tload);
}

bool
abb_rapid_msgs__msg__ToolData__are_equal(const abb_rapid_msgs__msg__ToolData * lhs, const abb_rapid_msgs__msg__ToolData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robhold
  if (lhs->robhold != rhs->robhold) {
    return false;
  }
  // tframe
  if (!abb_rapid_msgs__msg__Pose__are_equal(
      &(lhs->tframe), &(rhs->tframe)))
  {
    return false;
  }
  // tload
  if (!abb_rapid_msgs__msg__LoadData__are_equal(
      &(lhs->tload), &(rhs->tload)))
  {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__ToolData__copy(
  const abb_rapid_msgs__msg__ToolData * input,
  abb_rapid_msgs__msg__ToolData * output)
{
  if (!input || !output) {
    return false;
  }
  // robhold
  output->robhold = input->robhold;
  // tframe
  if (!abb_rapid_msgs__msg__Pose__copy(
      &(input->tframe), &(output->tframe)))
  {
    return false;
  }
  // tload
  if (!abb_rapid_msgs__msg__LoadData__copy(
      &(input->tload), &(output->tload)))
  {
    return false;
  }
  return true;
}

abb_rapid_msgs__msg__ToolData *
abb_rapid_msgs__msg__ToolData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ToolData * msg = (abb_rapid_msgs__msg__ToolData *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ToolData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__ToolData));
  bool success = abb_rapid_msgs__msg__ToolData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__ToolData__destroy(abb_rapid_msgs__msg__ToolData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__ToolData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__ToolData__Sequence__init(abb_rapid_msgs__msg__ToolData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ToolData * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__ToolData *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__ToolData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__ToolData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__ToolData__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__ToolData__Sequence__fini(abb_rapid_msgs__msg__ToolData__Sequence * array)
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
      abb_rapid_msgs__msg__ToolData__fini(&array->data[i]);
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

abb_rapid_msgs__msg__ToolData__Sequence *
abb_rapid_msgs__msg__ToolData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ToolData__Sequence * array = (abb_rapid_msgs__msg__ToolData__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ToolData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__ToolData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__ToolData__Sequence__destroy(abb_rapid_msgs__msg__ToolData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__ToolData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__ToolData__Sequence__are_equal(const abb_rapid_msgs__msg__ToolData__Sequence * lhs, const abb_rapid_msgs__msg__ToolData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__ToolData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__ToolData__Sequence__copy(
  const abb_rapid_msgs__msg__ToolData__Sequence * input,
  abb_rapid_msgs__msg__ToolData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__ToolData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__ToolData * data =
      (abb_rapid_msgs__msg__ToolData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__ToolData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__ToolData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__ToolData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
