// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/rob_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_msgs__msg__RobJoint__init(abb_rapid_msgs__msg__RobJoint * msg)
{
  if (!msg) {
    return false;
  }
  // rax_1
  // rax_2
  // rax_3
  // rax_4
  // rax_5
  // rax_6
  return true;
}

void
abb_rapid_msgs__msg__RobJoint__fini(abb_rapid_msgs__msg__RobJoint * msg)
{
  if (!msg) {
    return;
  }
  // rax_1
  // rax_2
  // rax_3
  // rax_4
  // rax_5
  // rax_6
}

bool
abb_rapid_msgs__msg__RobJoint__are_equal(const abb_rapid_msgs__msg__RobJoint * lhs, const abb_rapid_msgs__msg__RobJoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rax_1
  if (lhs->rax_1 != rhs->rax_1) {
    return false;
  }
  // rax_2
  if (lhs->rax_2 != rhs->rax_2) {
    return false;
  }
  // rax_3
  if (lhs->rax_3 != rhs->rax_3) {
    return false;
  }
  // rax_4
  if (lhs->rax_4 != rhs->rax_4) {
    return false;
  }
  // rax_5
  if (lhs->rax_5 != rhs->rax_5) {
    return false;
  }
  // rax_6
  if (lhs->rax_6 != rhs->rax_6) {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__RobJoint__copy(
  const abb_rapid_msgs__msg__RobJoint * input,
  abb_rapid_msgs__msg__RobJoint * output)
{
  if (!input || !output) {
    return false;
  }
  // rax_1
  output->rax_1 = input->rax_1;
  // rax_2
  output->rax_2 = input->rax_2;
  // rax_3
  output->rax_3 = input->rax_3;
  // rax_4
  output->rax_4 = input->rax_4;
  // rax_5
  output->rax_5 = input->rax_5;
  // rax_6
  output->rax_6 = input->rax_6;
  return true;
}

abb_rapid_msgs__msg__RobJoint *
abb_rapid_msgs__msg__RobJoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__RobJoint * msg = (abb_rapid_msgs__msg__RobJoint *)allocator.allocate(sizeof(abb_rapid_msgs__msg__RobJoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__RobJoint));
  bool success = abb_rapid_msgs__msg__RobJoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__RobJoint__destroy(abb_rapid_msgs__msg__RobJoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__RobJoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__RobJoint__Sequence__init(abb_rapid_msgs__msg__RobJoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__RobJoint * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__RobJoint *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__RobJoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__RobJoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__RobJoint__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__RobJoint__Sequence__fini(abb_rapid_msgs__msg__RobJoint__Sequence * array)
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
      abb_rapid_msgs__msg__RobJoint__fini(&array->data[i]);
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

abb_rapid_msgs__msg__RobJoint__Sequence *
abb_rapid_msgs__msg__RobJoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__RobJoint__Sequence * array = (abb_rapid_msgs__msg__RobJoint__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__RobJoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__RobJoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__RobJoint__Sequence__destroy(abb_rapid_msgs__msg__RobJoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__RobJoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__RobJoint__Sequence__are_equal(const abb_rapid_msgs__msg__RobJoint__Sequence * lhs, const abb_rapid_msgs__msg__RobJoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__RobJoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__RobJoint__Sequence__copy(
  const abb_rapid_msgs__msg__RobJoint__Sequence * input,
  abb_rapid_msgs__msg__RobJoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__RobJoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__RobJoint * data =
      (abb_rapid_msgs__msg__RobJoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__RobJoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__RobJoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__RobJoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
