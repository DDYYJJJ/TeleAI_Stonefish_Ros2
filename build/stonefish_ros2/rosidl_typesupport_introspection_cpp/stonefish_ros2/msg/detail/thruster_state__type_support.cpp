// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stonefish_ros2:msg/ThrusterState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stonefish_ros2/msg/detail/thruster_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stonefish_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ThrusterState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stonefish_ros2::msg::ThrusterState(_init);
}

void ThrusterState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stonefish_ros2::msg::ThrusterState *>(message_memory);
  typed_message->~ThrusterState();
}

size_t size_function__ThrusterState__setpoint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterState__setpoint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterState__setpoint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterState__setpoint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterState__rpm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterState__rpm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterState__rpm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterState__rpm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterState__thrust(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterState__thrust(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterState__thrust(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterState__thrust(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterState__torque(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterState__torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterState__torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterState__torque(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ThrusterState_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::ThrusterState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "setpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::ThrusterState, setpoint),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterState__setpoint,  // size() function pointer
    get_const_function__ThrusterState__setpoint,  // get_const(index) function pointer
    get_function__ThrusterState__setpoint,  // get(index) function pointer
    resize_function__ThrusterState__setpoint  // resize(index) function pointer
  },
  {
    "rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::ThrusterState, rpm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterState__rpm,  // size() function pointer
    get_const_function__ThrusterState__rpm,  // get_const(index) function pointer
    get_function__ThrusterState__rpm,  // get(index) function pointer
    resize_function__ThrusterState__rpm  // resize(index) function pointer
  },
  {
    "thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::ThrusterState, thrust),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterState__thrust,  // size() function pointer
    get_const_function__ThrusterState__thrust,  // get_const(index) function pointer
    get_function__ThrusterState__thrust,  // get(index) function pointer
    resize_function__ThrusterState__thrust  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2::msg::ThrusterState, torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterState__torque,  // size() function pointer
    get_const_function__ThrusterState__torque,  // get_const(index) function pointer
    get_function__ThrusterState__torque,  // get(index) function pointer
    resize_function__ThrusterState__torque  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ThrusterState_message_members = {
  "stonefish_ros2::msg",  // message namespace
  "ThrusterState",  // message name
  5,  // number of fields
  sizeof(stonefish_ros2::msg::ThrusterState),
  ThrusterState_message_member_array,  // message members
  ThrusterState_init_function,  // function to initialize message memory (memory has to be allocated)
  ThrusterState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ThrusterState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ThrusterState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stonefish_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stonefish_ros2::msg::ThrusterState>()
{
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::ThrusterState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stonefish_ros2, msg, ThrusterState)() {
  return &::stonefish_ros2::msg::rosidl_typesupport_introspection_cpp::ThrusterState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
