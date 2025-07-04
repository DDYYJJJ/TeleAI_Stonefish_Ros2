// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stonefish_ros2:msg/ThrusterState.idl
// generated code does not contain a copyright notice
#include "stonefish_ros2/msg/detail/thruster_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stonefish_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stonefish_ros2/msg/detail/thruster_state__struct.h"
#include "stonefish_ros2/msg/detail/thruster_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // rpm, setpoint, thrust, torque
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // rpm, setpoint, thrust, torque
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_stonefish_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ThrusterState__ros_msg_type = stonefish_ros2__msg__ThrusterState;

static bool _ThrusterState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ThrusterState__ros_msg_type * ros_message = static_cast<const _ThrusterState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: setpoint
  {
    size_t size = ros_message->setpoint.size;
    auto array_ptr = ros_message->setpoint.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rpm
  {
    size_t size = ros_message->rpm.size;
    auto array_ptr = ros_message->rpm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: thrust
  {
    size_t size = ros_message->thrust.size;
    auto array_ptr = ros_message->thrust.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: torque
  {
    size_t size = ros_message->torque.size;
    auto array_ptr = ros_message->torque.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ThrusterState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ThrusterState__ros_msg_type * ros_message = static_cast<_ThrusterState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: setpoint
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->setpoint.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->setpoint);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->setpoint, size)) {
      fprintf(stderr, "failed to create array for field 'setpoint'");
      return false;
    }
    auto array_ptr = ros_message->setpoint.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rpm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rpm.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rpm);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rpm, size)) {
      fprintf(stderr, "failed to create array for field 'rpm'");
      return false;
    }
    auto array_ptr = ros_message->rpm.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: thrust
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->thrust.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->thrust);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->thrust, size)) {
      fprintf(stderr, "failed to create array for field 'thrust'");
      return false;
    }
    auto array_ptr = ros_message->thrust.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: torque
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->torque.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->torque);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->torque, size)) {
      fprintf(stderr, "failed to create array for field 'torque'");
      return false;
    }
    auto array_ptr = ros_message->torque.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t get_serialized_size_stonefish_ros2__msg__ThrusterState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThrusterState__ros_msg_type * ros_message = static_cast<const _ThrusterState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name setpoint
  {
    size_t array_size = ros_message->setpoint.size;
    auto array_ptr = ros_message->setpoint.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpm
  {
    size_t array_size = ros_message->rpm.size;
    auto array_ptr = ros_message->rpm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thrust
  {
    size_t array_size = ros_message->thrust.size;
    auto array_ptr = ros_message->thrust.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t array_size = ros_message->torque.size;
    auto array_ptr = ros_message->torque.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ThrusterState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stonefish_ros2__msg__ThrusterState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stonefish_ros2
size_t max_serialized_size_stonefish_ros2__msg__ThrusterState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: setpoint
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rpm
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thrust
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: torque
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ThrusterState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stonefish_ros2__msg__ThrusterState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ThrusterState = {
  "stonefish_ros2::msg",
  "ThrusterState",
  _ThrusterState__cdr_serialize,
  _ThrusterState__cdr_deserialize,
  _ThrusterState__get_serialized_size,
  _ThrusterState__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThrusterState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stonefish_ros2, msg, ThrusterState)() {
  return &_ThrusterState__type_support;
}

#if defined(__cplusplus)
}
#endif
