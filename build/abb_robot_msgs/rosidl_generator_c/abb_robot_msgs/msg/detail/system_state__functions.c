// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/system_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rapid_tasks`
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"
// Member `mechanical_units`
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__functions.h"

bool
abb_robot_msgs__msg__SystemState__init(abb_robot_msgs__msg__SystemState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    abb_robot_msgs__msg__SystemState__fini(msg);
    return false;
  }
  // motors_on
  // auto_mode
  // rapid_running
  // rapid_tasks
  if (!abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(&msg->rapid_tasks, 0)) {
    abb_robot_msgs__msg__SystemState__fini(msg);
    return false;
  }
  // mechanical_units
  if (!abb_robot_msgs__msg__MechanicalUnitState__Sequence__init(&msg->mechanical_units, 0)) {
    abb_robot_msgs__msg__SystemState__fini(msg);
    return false;
  }
  return true;
}

void
abb_robot_msgs__msg__SystemState__fini(abb_robot_msgs__msg__SystemState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // motors_on
  // auto_mode
  // rapid_running
  // rapid_tasks
  abb_robot_msgs__msg__RAPIDTaskState__Sequence__fini(&msg->rapid_tasks);
  // mechanical_units
  abb_robot_msgs__msg__MechanicalUnitState__Sequence__fini(&msg->mechanical_units);
}

bool
abb_robot_msgs__msg__SystemState__are_equal(const abb_robot_msgs__msg__SystemState * lhs, const abb_robot_msgs__msg__SystemState * rhs)
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
  // motors_on
  if (lhs->motors_on != rhs->motors_on) {
    return false;
  }
  // auto_mode
  if (lhs->auto_mode != rhs->auto_mode) {
    return false;
  }
  // rapid_running
  if (lhs->rapid_running != rhs->rapid_running) {
    return false;
  }
  // rapid_tasks
  if (!abb_robot_msgs__msg__RAPIDTaskState__Sequence__are_equal(
      &(lhs->rapid_tasks), &(rhs->rapid_tasks)))
  {
    return false;
  }
  // mechanical_units
  if (!abb_robot_msgs__msg__MechanicalUnitState__Sequence__are_equal(
      &(lhs->mechanical_units), &(rhs->mechanical_units)))
  {
    return false;
  }
  return true;
}

bool
abb_robot_msgs__msg__SystemState__copy(
  const abb_robot_msgs__msg__SystemState * input,
  abb_robot_msgs__msg__SystemState * output)
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
  // motors_on
  output->motors_on = input->motors_on;
  // auto_mode
  output->auto_mode = input->auto_mode;
  // rapid_running
  output->rapid_running = input->rapid_running;
  // rapid_tasks
  if (!abb_robot_msgs__msg__RAPIDTaskState__Sequence__copy(
      &(input->rapid_tasks), &(output->rapid_tasks)))
  {
    return false;
  }
  // mechanical_units
  if (!abb_robot_msgs__msg__MechanicalUnitState__Sequence__copy(
      &(input->mechanical_units), &(output->mechanical_units)))
  {
    return false;
  }
  return true;
}

abb_robot_msgs__msg__SystemState *
abb_robot_msgs__msg__SystemState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__SystemState * msg = (abb_robot_msgs__msg__SystemState *)allocator.allocate(sizeof(abb_robot_msgs__msg__SystemState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_robot_msgs__msg__SystemState));
  bool success = abb_robot_msgs__msg__SystemState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_robot_msgs__msg__SystemState__destroy(abb_robot_msgs__msg__SystemState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_robot_msgs__msg__SystemState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_robot_msgs__msg__SystemState__Sequence__init(abb_robot_msgs__msg__SystemState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__SystemState * data = NULL;

  if (size) {
    data = (abb_robot_msgs__msg__SystemState *)allocator.zero_allocate(size, sizeof(abb_robot_msgs__msg__SystemState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_robot_msgs__msg__SystemState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_robot_msgs__msg__SystemState__fini(&data[i - 1]);
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
abb_robot_msgs__msg__SystemState__Sequence__fini(abb_robot_msgs__msg__SystemState__Sequence * array)
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
      abb_robot_msgs__msg__SystemState__fini(&array->data[i]);
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

abb_robot_msgs__msg__SystemState__Sequence *
abb_robot_msgs__msg__SystemState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__SystemState__Sequence * array = (abb_robot_msgs__msg__SystemState__Sequence *)allocator.allocate(sizeof(abb_robot_msgs__msg__SystemState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_robot_msgs__msg__SystemState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_robot_msgs__msg__SystemState__Sequence__destroy(abb_robot_msgs__msg__SystemState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_robot_msgs__msg__SystemState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_robot_msgs__msg__SystemState__Sequence__are_equal(const abb_robot_msgs__msg__SystemState__Sequence * lhs, const abb_robot_msgs__msg__SystemState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_robot_msgs__msg__SystemState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_robot_msgs__msg__SystemState__Sequence__copy(
  const abb_robot_msgs__msg__SystemState__Sequence * input,
  abb_robot_msgs__msg__SystemState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_robot_msgs__msg__SystemState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_robot_msgs__msg__SystemState * data =
      (abb_robot_msgs__msg__SystemState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_robot_msgs__msg__SystemState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_robot_msgs__msg__SystemState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_robot_msgs__msg__SystemState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
