// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/ext_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_msgs__msg__ExtJoint__init(abb_rapid_msgs__msg__ExtJoint * msg)
{
  if (!msg) {
    return false;
  }
  // eax_a
  // eax_b
  // eax_c
  // eax_d
  // eax_e
  // eax_f
  return true;
}

void
abb_rapid_msgs__msg__ExtJoint__fini(abb_rapid_msgs__msg__ExtJoint * msg)
{
  if (!msg) {
    return;
  }
  // eax_a
  // eax_b
  // eax_c
  // eax_d
  // eax_e
  // eax_f
}

bool
abb_rapid_msgs__msg__ExtJoint__are_equal(const abb_rapid_msgs__msg__ExtJoint * lhs, const abb_rapid_msgs__msg__ExtJoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // eax_a
  if (lhs->eax_a != rhs->eax_a) {
    return false;
  }
  // eax_b
  if (lhs->eax_b != rhs->eax_b) {
    return false;
  }
  // eax_c
  if (lhs->eax_c != rhs->eax_c) {
    return false;
  }
  // eax_d
  if (lhs->eax_d != rhs->eax_d) {
    return false;
  }
  // eax_e
  if (lhs->eax_e != rhs->eax_e) {
    return false;
  }
  // eax_f
  if (lhs->eax_f != rhs->eax_f) {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__ExtJoint__copy(
  const abb_rapid_msgs__msg__ExtJoint * input,
  abb_rapid_msgs__msg__ExtJoint * output)
{
  if (!input || !output) {
    return false;
  }
  // eax_a
  output->eax_a = input->eax_a;
  // eax_b
  output->eax_b = input->eax_b;
  // eax_c
  output->eax_c = input->eax_c;
  // eax_d
  output->eax_d = input->eax_d;
  // eax_e
  output->eax_e = input->eax_e;
  // eax_f
  output->eax_f = input->eax_f;
  return true;
}

abb_rapid_msgs__msg__ExtJoint *
abb_rapid_msgs__msg__ExtJoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ExtJoint * msg = (abb_rapid_msgs__msg__ExtJoint *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ExtJoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__ExtJoint));
  bool success = abb_rapid_msgs__msg__ExtJoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__ExtJoint__destroy(abb_rapid_msgs__msg__ExtJoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__ExtJoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__ExtJoint__Sequence__init(abb_rapid_msgs__msg__ExtJoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ExtJoint * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__ExtJoint *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__ExtJoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__ExtJoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__ExtJoint__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__ExtJoint__Sequence__fini(abb_rapid_msgs__msg__ExtJoint__Sequence * array)
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
      abb_rapid_msgs__msg__ExtJoint__fini(&array->data[i]);
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

abb_rapid_msgs__msg__ExtJoint__Sequence *
abb_rapid_msgs__msg__ExtJoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__ExtJoint__Sequence * array = (abb_rapid_msgs__msg__ExtJoint__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__ExtJoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__ExtJoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__ExtJoint__Sequence__destroy(abb_rapid_msgs__msg__ExtJoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__ExtJoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__ExtJoint__Sequence__are_equal(const abb_rapid_msgs__msg__ExtJoint__Sequence * lhs, const abb_rapid_msgs__msg__ExtJoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__ExtJoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__ExtJoint__Sequence__copy(
  const abb_rapid_msgs__msg__ExtJoint__Sequence * input,
  abb_rapid_msgs__msg__ExtJoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__ExtJoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__ExtJoint * data =
      (abb_rapid_msgs__msg__ExtJoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__ExtJoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__ExtJoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__ExtJoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
