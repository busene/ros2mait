// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"
// Member `movej`
#include "ros2srrc_data/msg/detail/joints__functions.h"
// Member `mover`
#include "ros2srrc_data/msg/detail/joint__functions.h"
// Member `movel`
// Member `movexyz`
#include "ros2srrc_data/msg/detail/xyz__functions.h"
// Member `movexyzw`
// Member `moverp`
#include "ros2srrc_data/msg/detail/xyzypr__functions.h"
// Member `moveypr`
// Member `moverot`
#include "ros2srrc_data/msg/detail/ypr__functions.h"
// Member `attach`
// Member `detach`
#include "ros2srrc_data/msg/detail/linkattacher__functions.h"

bool
ros2srrc_data__msg__Action__init(ros2srrc_data__msg__Action * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // speed
  // movej
  if (!ros2srrc_data__msg__Joints__init(&msg->movej)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // mover
  if (!ros2srrc_data__msg__Joint__init(&msg->mover)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // movel
  if (!ros2srrc_data__msg__Xyz__init(&msg->movel)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // movexyzw
  if (!ros2srrc_data__msg__Xyzypr__init(&msg->movexyzw)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // movexyz
  if (!ros2srrc_data__msg__Xyz__init(&msg->movexyz)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // moveypr
  if (!ros2srrc_data__msg__Ypr__init(&msg->moveypr)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // moverot
  if (!ros2srrc_data__msg__Ypr__init(&msg->moverot)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // moverp
  if (!ros2srrc_data__msg__Xyzypr__init(&msg->moverp)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // moveg
  // attach
  if (!ros2srrc_data__msg__Linkattacher__init(&msg->attach)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  // detach
  if (!ros2srrc_data__msg__Linkattacher__init(&msg->detach)) {
    ros2srrc_data__msg__Action__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__msg__Action__fini(ros2srrc_data__msg__Action * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // speed
  // movej
  ros2srrc_data__msg__Joints__fini(&msg->movej);
  // mover
  ros2srrc_data__msg__Joint__fini(&msg->mover);
  // movel
  ros2srrc_data__msg__Xyz__fini(&msg->movel);
  // movexyzw
  ros2srrc_data__msg__Xyzypr__fini(&msg->movexyzw);
  // movexyz
  ros2srrc_data__msg__Xyz__fini(&msg->movexyz);
  // moveypr
  ros2srrc_data__msg__Ypr__fini(&msg->moveypr);
  // moverot
  ros2srrc_data__msg__Ypr__fini(&msg->moverot);
  // moverp
  ros2srrc_data__msg__Xyzypr__fini(&msg->moverp);
  // moveg
  // attach
  ros2srrc_data__msg__Linkattacher__fini(&msg->attach);
  // detach
  ros2srrc_data__msg__Linkattacher__fini(&msg->detach);
}

bool
ros2srrc_data__msg__Action__are_equal(const ros2srrc_data__msg__Action * lhs, const ros2srrc_data__msg__Action * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // movej
  if (!ros2srrc_data__msg__Joints__are_equal(
      &(lhs->movej), &(rhs->movej)))
  {
    return false;
  }
  // mover
  if (!ros2srrc_data__msg__Joint__are_equal(
      &(lhs->mover), &(rhs->mover)))
  {
    return false;
  }
  // movel
  if (!ros2srrc_data__msg__Xyz__are_equal(
      &(lhs->movel), &(rhs->movel)))
  {
    return false;
  }
  // movexyzw
  if (!ros2srrc_data__msg__Xyzypr__are_equal(
      &(lhs->movexyzw), &(rhs->movexyzw)))
  {
    return false;
  }
  // movexyz
  if (!ros2srrc_data__msg__Xyz__are_equal(
      &(lhs->movexyz), &(rhs->movexyz)))
  {
    return false;
  }
  // moveypr
  if (!ros2srrc_data__msg__Ypr__are_equal(
      &(lhs->moveypr), &(rhs->moveypr)))
  {
    return false;
  }
  // moverot
  if (!ros2srrc_data__msg__Ypr__are_equal(
      &(lhs->moverot), &(rhs->moverot)))
  {
    return false;
  }
  // moverp
  if (!ros2srrc_data__msg__Xyzypr__are_equal(
      &(lhs->moverp), &(rhs->moverp)))
  {
    return false;
  }
  // moveg
  if (lhs->moveg != rhs->moveg) {
    return false;
  }
  // attach
  if (!ros2srrc_data__msg__Linkattacher__are_equal(
      &(lhs->attach), &(rhs->attach)))
  {
    return false;
  }
  // detach
  if (!ros2srrc_data__msg__Linkattacher__are_equal(
      &(lhs->detach), &(rhs->detach)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__msg__Action__copy(
  const ros2srrc_data__msg__Action * input,
  ros2srrc_data__msg__Action * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // movej
  if (!ros2srrc_data__msg__Joints__copy(
      &(input->movej), &(output->movej)))
  {
    return false;
  }
  // mover
  if (!ros2srrc_data__msg__Joint__copy(
      &(input->mover), &(output->mover)))
  {
    return false;
  }
  // movel
  if (!ros2srrc_data__msg__Xyz__copy(
      &(input->movel), &(output->movel)))
  {
    return false;
  }
  // movexyzw
  if (!ros2srrc_data__msg__Xyzypr__copy(
      &(input->movexyzw), &(output->movexyzw)))
  {
    return false;
  }
  // movexyz
  if (!ros2srrc_data__msg__Xyz__copy(
      &(input->movexyz), &(output->movexyz)))
  {
    return false;
  }
  // moveypr
  if (!ros2srrc_data__msg__Ypr__copy(
      &(input->moveypr), &(output->moveypr)))
  {
    return false;
  }
  // moverot
  if (!ros2srrc_data__msg__Ypr__copy(
      &(input->moverot), &(output->moverot)))
  {
    return false;
  }
  // moverp
  if (!ros2srrc_data__msg__Xyzypr__copy(
      &(input->moverp), &(output->moverp)))
  {
    return false;
  }
  // moveg
  output->moveg = input->moveg;
  // attach
  if (!ros2srrc_data__msg__Linkattacher__copy(
      &(input->attach), &(output->attach)))
  {
    return false;
  }
  // detach
  if (!ros2srrc_data__msg__Linkattacher__copy(
      &(input->detach), &(output->detach)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__msg__Action *
ros2srrc_data__msg__Action__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Action * msg = (ros2srrc_data__msg__Action *)allocator.allocate(sizeof(ros2srrc_data__msg__Action), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Action));
  bool success = ros2srrc_data__msg__Action__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Action__destroy(ros2srrc_data__msg__Action * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Action__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Action__Sequence__init(ros2srrc_data__msg__Action__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Action * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Action *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Action), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Action__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Action__fini(&data[i - 1]);
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
ros2srrc_data__msg__Action__Sequence__fini(ros2srrc_data__msg__Action__Sequence * array)
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
      ros2srrc_data__msg__Action__fini(&array->data[i]);
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

ros2srrc_data__msg__Action__Sequence *
ros2srrc_data__msg__Action__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Action__Sequence * array = (ros2srrc_data__msg__Action__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Action__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Action__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Action__Sequence__destroy(ros2srrc_data__msg__Action__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Action__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Action__Sequence__are_equal(const ros2srrc_data__msg__Action__Sequence * lhs, const ros2srrc_data__msg__Action__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Action__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Action__Sequence__copy(
  const ros2srrc_data__msg__Action__Sequence * input,
  ros2srrc_data__msg__Action__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Action);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Action * data =
      (ros2srrc_data__msg__Action *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Action__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Action__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Action__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
