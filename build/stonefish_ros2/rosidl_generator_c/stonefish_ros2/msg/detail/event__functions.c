// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stonefish_ros2:msg/Event.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ts`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
stonefish_ros2__msg__Event__init(stonefish_ros2__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // ts
  if (!builtin_interfaces__msg__Time__init(&msg->ts)) {
    stonefish_ros2__msg__Event__fini(msg);
    return false;
  }
  // polarity
  return true;
}

void
stonefish_ros2__msg__Event__fini(stonefish_ros2__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // ts
  builtin_interfaces__msg__Time__fini(&msg->ts);
  // polarity
}

stonefish_ros2__msg__Event *
stonefish_ros2__msg__Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event * msg = (stonefish_ros2__msg__Event *)allocator.allocate(sizeof(stonefish_ros2__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stonefish_ros2__msg__Event));
  bool success = stonefish_ros2__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stonefish_ros2__msg__Event__destroy(stonefish_ros2__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stonefish_ros2__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stonefish_ros2__msg__Event__Sequence__init(stonefish_ros2__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event * data = NULL;

  if (size) {
    data = (stonefish_ros2__msg__Event *)allocator.zero_allocate(size, sizeof(stonefish_ros2__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stonefish_ros2__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stonefish_ros2__msg__Event__fini(&data[i - 1]);
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
stonefish_ros2__msg__Event__Sequence__fini(stonefish_ros2__msg__Event__Sequence * array)
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
      stonefish_ros2__msg__Event__fini(&array->data[i]);
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

stonefish_ros2__msg__Event__Sequence *
stonefish_ros2__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stonefish_ros2__msg__Event__Sequence * array = (stonefish_ros2__msg__Event__Sequence *)allocator.allocate(sizeof(stonefish_ros2__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stonefish_ros2__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stonefish_ros2__msg__Event__Sequence__destroy(stonefish_ros2__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stonefish_ros2__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
