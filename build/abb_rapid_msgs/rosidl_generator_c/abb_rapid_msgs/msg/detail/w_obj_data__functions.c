// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/w_obj_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ufmec`
#include "rosidl_runtime_c/string_functions.h"
// Member `uframe`
// Member `oframe`
#include "abb_rapid_msgs/msg/detail/pose__functions.h"

bool
abb_rapid_msgs__msg__WObjData__init(abb_rapid_msgs__msg__WObjData * msg)
{
  if (!msg) {
    return false;
  }
  // robhold
  // ufprog
  // ufmec
  if (!rosidl_runtime_c__String__init(&msg->ufmec)) {
    abb_rapid_msgs__msg__WObjData__fini(msg);
    return false;
  }
  // uframe
  if (!abb_rapid_msgs__msg__Pose__init(&msg->uframe)) {
    abb_rapid_msgs__msg__WObjData__fini(msg);
    return false;
  }
  // oframe
  if (!abb_rapid_msgs__msg__Pose__init(&msg->oframe)) {
    abb_rapid_msgs__msg__WObjData__fini(msg);
    return false;
  }
  return true;
}

void
abb_rapid_msgs__msg__WObjData__fini(abb_rapid_msgs__msg__WObjData * msg)
{
  if (!msg) {
    return;
  }
  // robhold
  // ufprog
  // ufmec
  rosidl_runtime_c__String__fini(&msg->ufmec);
  // uframe
  abb_rapid_msgs__msg__Pose__fini(&msg->uframe);
  // oframe
  abb_rapid_msgs__msg__Pose__fini(&msg->oframe);
}

bool
abb_rapid_msgs__msg__WObjData__are_equal(const abb_rapid_msgs__msg__WObjData * lhs, const abb_rapid_msgs__msg__WObjData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robhold
  if (lhs->robhold != rhs->robhold) {
    return false;
  }
  // ufprog
  if (lhs->ufprog != rhs->ufprog) {
    return false;
  }
  // ufmec
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ufmec), &(rhs->ufmec)))
  {
    return false;
  }
  // uframe
  if (!abb_rapid_msgs__msg__Pose__are_equal(
      &(lhs->uframe), &(rhs->uframe)))
  {
    return false;
  }
  // oframe
  if (!abb_rapid_msgs__msg__Pose__are_equal(
      &(lhs->oframe), &(rhs->oframe)))
  {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__WObjData__copy(
  const abb_rapid_msgs__msg__WObjData * input,
  abb_rapid_msgs__msg__WObjData * output)
{
  if (!input || !output) {
    return false;
  }
  // robhold
  output->robhold = input->robhold;
  // ufprog
  output->ufprog = input->ufprog;
  // ufmec
  if (!rosidl_runtime_c__String__copy(
      &(input->ufmec), &(output->ufmec)))
  {
    return false;
  }
  // uframe
  if (!abb_rapid_msgs__msg__Pose__copy(
      &(input->uframe), &(output->uframe)))
  {
    return false;
  }
  // oframe
  if (!abb_rapid_msgs__msg__Pose__copy(
      &(input->oframe), &(output->oframe)))
  {
    return false;
  }
  return true;
}

abb_rapid_msgs__msg__WObjData *
abb_rapid_msgs__msg__WObjData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__WObjData * msg = (abb_rapid_msgs__msg__WObjData *)allocator.allocate(sizeof(abb_rapid_msgs__msg__WObjData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__WObjData));
  bool success = abb_rapid_msgs__msg__WObjData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__WObjData__destroy(abb_rapid_msgs__msg__WObjData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__WObjData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__WObjData__Sequence__init(abb_rapid_msgs__msg__WObjData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__WObjData * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__WObjData *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__WObjData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__WObjData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__WObjData__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__WObjData__Sequence__fini(abb_rapid_msgs__msg__WObjData__Sequence * array)
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
      abb_rapid_msgs__msg__WObjData__fini(&array->data[i]);
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

abb_rapid_msgs__msg__WObjData__Sequence *
abb_rapid_msgs__msg__WObjData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__WObjData__Sequence * array = (abb_rapid_msgs__msg__WObjData__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__WObjData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__WObjData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__WObjData__Sequence__destroy(abb_rapid_msgs__msg__WObjData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__WObjData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__WObjData__Sequence__are_equal(const abb_rapid_msgs__msg__WObjData__Sequence * lhs, const abb_rapid_msgs__msg__WObjData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__WObjData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__WObjData__Sequence__copy(
  const abb_rapid_msgs__msg__WObjData__Sequence * input,
  abb_rapid_msgs__msg__WObjData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__WObjData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__WObjData * data =
      (abb_rapid_msgs__msg__WObjData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__WObjData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__WObjData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__WObjData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
