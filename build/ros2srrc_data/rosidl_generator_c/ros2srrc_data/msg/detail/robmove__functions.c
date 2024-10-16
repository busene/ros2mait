// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Robmove.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/robmove__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2srrc_data__msg__Robmove__init(ros2srrc_data__msg__Robmove * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ros2srrc_data__msg__Robmove__fini(msg);
    return false;
  }
  // speed
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
  return true;
}

void
ros2srrc_data__msg__Robmove__fini(ros2srrc_data__msg__Robmove * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // speed
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
}

bool
ros2srrc_data__msg__Robmove__are_equal(const ros2srrc_data__msg__Robmove * lhs, const ros2srrc_data__msg__Robmove * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // qx
  if (lhs->qx != rhs->qx) {
    return false;
  }
  // qy
  if (lhs->qy != rhs->qy) {
    return false;
  }
  // qz
  if (lhs->qz != rhs->qz) {
    return false;
  }
  // qw
  if (lhs->qw != rhs->qw) {
    return false;
  }
  return true;
}

bool
ros2srrc_data__msg__Robmove__copy(
  const ros2srrc_data__msg__Robmove * input,
  ros2srrc_data__msg__Robmove * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // qx
  output->qx = input->qx;
  // qy
  output->qy = input->qy;
  // qz
  output->qz = input->qz;
  // qw
  output->qw = input->qw;
  return true;
}

ros2srrc_data__msg__Robmove *
ros2srrc_data__msg__Robmove__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Robmove * msg = (ros2srrc_data__msg__Robmove *)allocator.allocate(sizeof(ros2srrc_data__msg__Robmove), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Robmove));
  bool success = ros2srrc_data__msg__Robmove__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Robmove__destroy(ros2srrc_data__msg__Robmove * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Robmove__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Robmove__Sequence__init(ros2srrc_data__msg__Robmove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Robmove * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Robmove *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Robmove), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Robmove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Robmove__fini(&data[i - 1]);
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
ros2srrc_data__msg__Robmove__Sequence__fini(ros2srrc_data__msg__Robmove__Sequence * array)
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
      ros2srrc_data__msg__Robmove__fini(&array->data[i]);
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

ros2srrc_data__msg__Robmove__Sequence *
ros2srrc_data__msg__Robmove__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Robmove__Sequence * array = (ros2srrc_data__msg__Robmove__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Robmove__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Robmove__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Robmove__Sequence__destroy(ros2srrc_data__msg__Robmove__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Robmove__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Robmove__Sequence__are_equal(const ros2srrc_data__msg__Robmove__Sequence * lhs, const ros2srrc_data__msg__Robmove__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Robmove__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Robmove__Sequence__copy(
  const ros2srrc_data__msg__Robmove__Sequence * input,
  ros2srrc_data__msg__Robmove__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Robmove);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Robmove * data =
      (ros2srrc_data__msg__Robmove *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Robmove__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Robmove__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Robmove__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
