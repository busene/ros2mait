// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice
#include "objectpose_msgs/msg/detail/object_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `objectname`
#include "rosidl_runtime_c/string_functions.h"

bool
objectpose_msgs__msg__ObjectPose__init(objectpose_msgs__msg__ObjectPose * msg)
{
  if (!msg) {
    return false;
  }
  // objectname
  if (!rosidl_runtime_c__String__init(&msg->objectname)) {
    objectpose_msgs__msg__ObjectPose__fini(msg);
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
objectpose_msgs__msg__ObjectPose__fini(objectpose_msgs__msg__ObjectPose * msg)
{
  if (!msg) {
    return;
  }
  // objectname
  rosidl_runtime_c__String__fini(&msg->objectname);
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
}

bool
objectpose_msgs__msg__ObjectPose__are_equal(const objectpose_msgs__msg__ObjectPose * lhs, const objectpose_msgs__msg__ObjectPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // objectname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->objectname), &(rhs->objectname)))
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
objectpose_msgs__msg__ObjectPose__copy(
  const objectpose_msgs__msg__ObjectPose * input,
  objectpose_msgs__msg__ObjectPose * output)
{
  if (!input || !output) {
    return false;
  }
  // objectname
  if (!rosidl_runtime_c__String__copy(
      &(input->objectname), &(output->objectname)))
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

objectpose_msgs__msg__ObjectPose *
objectpose_msgs__msg__ObjectPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  objectpose_msgs__msg__ObjectPose * msg = (objectpose_msgs__msg__ObjectPose *)allocator.allocate(sizeof(objectpose_msgs__msg__ObjectPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(objectpose_msgs__msg__ObjectPose));
  bool success = objectpose_msgs__msg__ObjectPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
objectpose_msgs__msg__ObjectPose__destroy(objectpose_msgs__msg__ObjectPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    objectpose_msgs__msg__ObjectPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
objectpose_msgs__msg__ObjectPose__Sequence__init(objectpose_msgs__msg__ObjectPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  objectpose_msgs__msg__ObjectPose * data = NULL;

  if (size) {
    data = (objectpose_msgs__msg__ObjectPose *)allocator.zero_allocate(size, sizeof(objectpose_msgs__msg__ObjectPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = objectpose_msgs__msg__ObjectPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        objectpose_msgs__msg__ObjectPose__fini(&data[i - 1]);
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
objectpose_msgs__msg__ObjectPose__Sequence__fini(objectpose_msgs__msg__ObjectPose__Sequence * array)
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
      objectpose_msgs__msg__ObjectPose__fini(&array->data[i]);
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

objectpose_msgs__msg__ObjectPose__Sequence *
objectpose_msgs__msg__ObjectPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  objectpose_msgs__msg__ObjectPose__Sequence * array = (objectpose_msgs__msg__ObjectPose__Sequence *)allocator.allocate(sizeof(objectpose_msgs__msg__ObjectPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = objectpose_msgs__msg__ObjectPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
objectpose_msgs__msg__ObjectPose__Sequence__destroy(objectpose_msgs__msg__ObjectPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    objectpose_msgs__msg__ObjectPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
objectpose_msgs__msg__ObjectPose__Sequence__are_equal(const objectpose_msgs__msg__ObjectPose__Sequence * lhs, const objectpose_msgs__msg__ObjectPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!objectpose_msgs__msg__ObjectPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
objectpose_msgs__msg__ObjectPose__Sequence__copy(
  const objectpose_msgs__msg__ObjectPose__Sequence * input,
  objectpose_msgs__msg__ObjectPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(objectpose_msgs__msg__ObjectPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    objectpose_msgs__msg__ObjectPose * data =
      (objectpose_msgs__msg__ObjectPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!objectpose_msgs__msg__ObjectPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          objectpose_msgs__msg__ObjectPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!objectpose_msgs__msg__ObjectPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
