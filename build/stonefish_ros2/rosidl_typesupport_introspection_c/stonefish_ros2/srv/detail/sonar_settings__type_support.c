// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stonefish_ros2:srv/SonarSettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stonefish_ros2/srv/detail/sonar_settings__rosidl_typesupport_introspection_c.h"
#include "stonefish_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stonefish_ros2/srv/detail/sonar_settings__functions.h"
#include "stonefish_ros2/srv/detail/sonar_settings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stonefish_ros2__srv__SonarSettings_Request__init(message_memory);
}

void stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_fini_function(void * message_memory)
{
  stonefish_ros2__srv__SonarSettings_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_member_array[3] = {
  {
    "range_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__srv__SonarSettings_Request, range_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__srv__SonarSettings_Request, range_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__srv__SonarSettings_Request, gain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_members = {
  "stonefish_ros2__srv",  // message namespace
  "SonarSettings_Request",  // message name
  3,  // number of fields
  sizeof(stonefish_ros2__srv__SonarSettings_Request),
  stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_member_array,  // message members
  stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_type_support_handle = {
  0,
  &stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stonefish_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Request)() {
  if (!stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_type_support_handle.typesupport_identifier) {
    stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stonefish_ros2__srv__SonarSettings_Request__rosidl_typesupport_introspection_c__SonarSettings_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "stonefish_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__functions.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stonefish_ros2__srv__SonarSettings_Response__init(message_memory);
}

void stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_fini_function(void * message_memory)
{
  stonefish_ros2__srv__SonarSettings_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__srv__SonarSettings_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stonefish_ros2__srv__SonarSettings_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_members = {
  "stonefish_ros2__srv",  // message namespace
  "SonarSettings_Response",  // message name
  2,  // number of fields
  sizeof(stonefish_ros2__srv__SonarSettings_Response),
  stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_member_array,  // message members
  stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_type_support_handle = {
  0,
  &stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stonefish_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Response)() {
  if (!stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_type_support_handle.typesupport_identifier) {
    stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stonefish_ros2__srv__SonarSettings_Response__rosidl_typesupport_introspection_c__SonarSettings_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stonefish_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "stonefish_ros2/srv/detail/sonar_settings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_members = {
  "stonefish_ros2__srv",  // service namespace
  "SonarSettings",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_Request_message_type_support_handle,
  NULL  // response message
  // stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_Response_message_type_support_handle
};

static rosidl_service_type_support_t stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_type_support_handle = {
  0,
  &stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stonefish_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings)() {
  if (!stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_type_support_handle.typesupport_identifier) {
    stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stonefish_ros2, srv, SonarSettings_Response)()->data;
  }

  return &stonefish_ros2__srv__detail__sonar_settings__rosidl_typesupport_introspection_c__SonarSettings_service_type_support_handle;
}
