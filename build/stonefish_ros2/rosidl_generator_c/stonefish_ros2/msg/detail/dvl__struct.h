// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stonefish_ros2:msg/DVL.idl
// generated code does not contain a copyright notice

#ifndef STONEFISH_ROS2__MSG__DETAIL__DVL__STRUCT_H_
#define STONEFISH_ROS2__MSG__DETAIL__DVL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'beams'
#include "stonefish_ros2/msg/detail/dvl_beam__struct.h"

// Struct defined in msg/DVL in the package stonefish_ros2.
typedef struct stonefish_ros2__msg__DVL
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 velocity;
  double velocity_covariance[9];
  double altitude;
  stonefish_ros2__msg__DVLBeam__Sequence beams;
} stonefish_ros2__msg__DVL;

// Struct for a sequence of stonefish_ros2__msg__DVL.
typedef struct stonefish_ros2__msg__DVL__Sequence
{
  stonefish_ros2__msg__DVL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stonefish_ros2__msg__DVL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STONEFISH_ROS2__MSG__DETAIL__DVL__STRUCT_H_
