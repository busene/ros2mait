// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice
#include "linkpose_msgs/msg/detail/link_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `modelname`
// Member `linkname`
#include "rosidl_runtime_c/string_functions.h"

bool
linkpose_msgs__msg__LinkPose__init(linkpose_msgs__msg__LinkPose * msg)
{
  if (!msg) {
    return false;
  }
  // modelname
  if (!rosidl_runtime_c__String__init(&msg->modelname)) {
    linkpose_msgs__msg__LinkPose__fini(msg);
    return false;
  }
  // linkname
  if (!rosidl_runtime_c__String__init(&msg->linkname)) {
    linkpose_msgs__msg__LinkPose__fini(msg);
    return false;
  }
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
linkpose_msgs__msg__LinkPose__fini(linkpose_msgs__msg__LinkPose * msg)
{
  if (!msg) {
    return;
  }
  // modelname
  rosidl_runtime_c__String__fini(&msg->modelname);
  // linkname
  rosidl_runtime_c__String__fini(&msg->linkname);
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
}

bool
linkpose_msgs__msg__LinkPose__are_equal(const linkpose_msgs__msg__LinkPose * lhs, const linkpose_msgs__msg__LinkPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // modelname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->modelname), &(rhs->modelname)))
  {
    return false;
  }
  // linkname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->linkname), &(rhs->linkname)))
  {
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
linkpose_msgs__msg__LinkPose__copy(
  const linkpose_msgs__msg__LinkPose * input,
  linkpose_msgs__msg__LinkPose * output)
{
  if (!input || !output) {
    return false;
  }
  // modelname
  if (!rosidl_runtime_c__String__copy(
      &(input->modelname), &(output->modelname)))
  {
    return false;
  }
  // linkname
  if (!rosidl_runtime_c__String__copy(
      &(input->linkname), &(output->linkname)))
  {
    return false;
  }
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

linkpose_msgs__msg__LinkPose *
linkpose_msgs__msg__LinkPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linkpose_msgs__msg__LinkPose * msg = (linkpose_msgs__msg__LinkPose *)allocator.allocate(sizeof(linkpose_msgs__msg__LinkPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(linkpose_msgs__msg__LinkPose));
  bool success = linkpose_msgs__msg__LinkPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
linkpose_msgs__msg__LinkPose__destroy(linkpose_msgs__msg__LinkPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    linkpose_msgs__msg__LinkPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
linkpose_msgs__msg__LinkPose__Sequence__init(linkpose_msgs__msg__LinkPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linkpose_msgs__msg__LinkPose * data = NULL;

  if (size) {
    data = (linkpose_msgs__msg__LinkPose *)allocator.zero_allocate(size, sizeof(linkpose_msgs__msg__LinkPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = linkpose_msgs__msg__LinkPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        linkpose_msgs__msg__LinkPose__fini(&data[i - 1]);
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
linkpose_msgs__msg__LinkPose__Sequence__fini(linkpose_msgs__msg__LinkPose__Sequence * array)
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
      linkpose_msgs__msg__LinkPose__fini(&array->data[i]);
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

linkpose_msgs__msg__LinkPose__Sequence *
linkpose_msgs__msg__LinkPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linkpose_msgs__msg__LinkPose__Sequence * array = (linkpose_msgs__msg__LinkPose__Sequence *)allocator.allocate(sizeof(linkpose_msgs__msg__LinkPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = linkpose_msgs__msg__LinkPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
linkpose_msgs__msg__LinkPose__Sequence__destroy(linkpose_msgs__msg__LinkPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    linkpose_msgs__msg__LinkPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
linkpose_msgs__msg__LinkPose__Sequence__are_equal(const linkpose_msgs__msg__LinkPose__Sequence * lhs, const linkpose_msgs__msg__LinkPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!linkpose_msgs__msg__LinkPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
linkpose_msgs__msg__LinkPose__Sequence__copy(
  const linkpose_msgs__msg__LinkPose__Sequence * input,
  linkpose_msgs__msg__LinkPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(linkpose_msgs__msg__LinkPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    linkpose_msgs__msg__LinkPose * data =
      (linkpose_msgs__msg__LinkPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!linkpose_msgs__msg__LinkPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          linkpose_msgs__msg__LinkPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!linkpose_msgs__msg__LinkPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
