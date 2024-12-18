// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perception_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perception_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
#include "perception_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perception_interfaces/srv/detail/detect_objects__functions.h"
#include "perception_interfaces/srv/detail/detect_objects__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_interfaces__srv__DetectObjects_Request__init(message_memory);
}

void perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_fini_function(void * message_memory)
{
  perception_interfaces__srv__DetectObjects_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_members = {
  "perception_interfaces__srv",  // message namespace
  "DetectObjects_Request",  // message name
  1,  // number of fields
  sizeof(perception_interfaces__srv__DetectObjects_Request),
  false,  // has_any_key_member_
  perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array,  // message members
  perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle = {
  0,
  &perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_members,
  get_message_typesupport_handle_function,
  &perception_interfaces__srv__DetectObjects_Request__get_type_hash,
  &perception_interfaces__srv__DetectObjects_Request__get_type_description,
  &perception_interfaces__srv__DetectObjects_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Request)() {
  if (!perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle.typesupport_identifier) {
    perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "perception_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__functions.h"
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__struct.h"


// Include directives for member types
// Member `object_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_poses`
#include "geometry_msgs/msg/pose.h"
// Member `object_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_interfaces__srv__DetectObjects_Response__init(message_memory);
}

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_fini_function(void * message_memory)
{
  perception_interfaces__srv__DetectObjects_Response__fini(message_memory);
}

size_t perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectObjects_Response__object_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Response__object_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Response__object_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Response__object_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectObjects_Response__object_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Response__object_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Response__object_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Response__object_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Response, object_names),  // bytes offset in struct
    NULL,  // default value
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectObjects_Response__object_names,  // size() function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_names,  // get_const(index) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_names,  // get(index) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Response__object_names,  // fetch(index, &value) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Response__object_names,  // assign(index, value) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Response__object_names  // resize(index) function pointer
  },
  {
    "object_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Response, object_poses),  // bytes offset in struct
    NULL,  // default value
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectObjects_Response__object_poses,  // size() function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Response__object_poses,  // get_const(index) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectObjects_Response__object_poses,  // get(index) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Response__object_poses,  // fetch(index, &value) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Response__object_poses,  // assign(index, value) function pointer
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Response__object_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_members = {
  "perception_interfaces__srv",  // message namespace
  "DetectObjects_Response",  // message name
  3,  // number of fields
  sizeof(perception_interfaces__srv__DetectObjects_Response),
  false,  // has_any_key_member_
  perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array,  // message members
  perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle = {
  0,
  &perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_members,
  get_message_typesupport_handle_function,
  &perception_interfaces__srv__DetectObjects_Response__get_type_hash,
  &perception_interfaces__srv__DetectObjects_Response__get_type_description,
  &perception_interfaces__srv__DetectObjects_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Response)() {
  perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle.typesupport_identifier) {
    perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "perception_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__functions.h"
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "perception_interfaces/srv/detect_objects.h"
// Member `request`
// Member `response`
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_interfaces__srv__DetectObjects_Event__init(message_memory);
}

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_fini_function(void * message_memory)
{
  perception_interfaces__srv__DetectObjects_Event__fini(message_memory);
}

size_t perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__size_function__DetectObjects_Event__request(
  const void * untyped_member)
{
  const perception_interfaces__srv__DetectObjects_Request__Sequence * member =
    (const perception_interfaces__srv__DetectObjects_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__request(
  const void * untyped_member, size_t index)
{
  const perception_interfaces__srv__DetectObjects_Request__Sequence * member =
    (const perception_interfaces__srv__DetectObjects_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__request(
  void * untyped_member, size_t index)
{
  perception_interfaces__srv__DetectObjects_Request__Sequence * member =
    (perception_interfaces__srv__DetectObjects_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const perception_interfaces__srv__DetectObjects_Request * item =
    ((const perception_interfaces__srv__DetectObjects_Request *)
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__request(untyped_member, index));
  perception_interfaces__srv__DetectObjects_Request * value =
    (perception_interfaces__srv__DetectObjects_Request *)(untyped_value);
  *value = *item;
}

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  perception_interfaces__srv__DetectObjects_Request * item =
    ((perception_interfaces__srv__DetectObjects_Request *)
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__request(untyped_member, index));
  const perception_interfaces__srv__DetectObjects_Request * value =
    (const perception_interfaces__srv__DetectObjects_Request *)(untyped_value);
  *item = *value;
}

bool perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Event__request(
  void * untyped_member, size_t size)
{
  perception_interfaces__srv__DetectObjects_Request__Sequence * member =
    (perception_interfaces__srv__DetectObjects_Request__Sequence *)(untyped_member);
  perception_interfaces__srv__DetectObjects_Request__Sequence__fini(member);
  return perception_interfaces__srv__DetectObjects_Request__Sequence__init(member, size);
}

size_t perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__size_function__DetectObjects_Event__response(
  const void * untyped_member)
{
  const perception_interfaces__srv__DetectObjects_Response__Sequence * member =
    (const perception_interfaces__srv__DetectObjects_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__response(
  const void * untyped_member, size_t index)
{
  const perception_interfaces__srv__DetectObjects_Response__Sequence * member =
    (const perception_interfaces__srv__DetectObjects_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__response(
  void * untyped_member, size_t index)
{
  perception_interfaces__srv__DetectObjects_Response__Sequence * member =
    (perception_interfaces__srv__DetectObjects_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const perception_interfaces__srv__DetectObjects_Response * item =
    ((const perception_interfaces__srv__DetectObjects_Response *)
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__response(untyped_member, index));
  perception_interfaces__srv__DetectObjects_Response * value =
    (perception_interfaces__srv__DetectObjects_Response *)(untyped_value);
  *value = *item;
}

void perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  perception_interfaces__srv__DetectObjects_Response * item =
    ((perception_interfaces__srv__DetectObjects_Response *)
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__response(untyped_member, index));
  const perception_interfaces__srv__DetectObjects_Response * value =
    (const perception_interfaces__srv__DetectObjects_Response *)(untyped_value);
  *item = *value;
}

bool perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Event__response(
  void * untyped_member, size_t size)
{
  perception_interfaces__srv__DetectObjects_Response__Sequence * member =
    (perception_interfaces__srv__DetectObjects_Response__Sequence *)(untyped_member);
  perception_interfaces__srv__DetectObjects_Response__Sequence__fini(member);
  return perception_interfaces__srv__DetectObjects_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Event, request),  // bytes offset in struct
    NULL,  // default value
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__size_function__DetectObjects_Event__request,  // size() function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__request,  // get_const(index) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__request,  // get(index) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Event__request,  // fetch(index, &value) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Event__request,  // assign(index, value) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(perception_interfaces__srv__DetectObjects_Event, response),  // bytes offset in struct
    NULL,  // default value
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__size_function__DetectObjects_Event__response,  // size() function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_const_function__DetectObjects_Event__response,  // get_const(index) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__get_function__DetectObjects_Event__response,  // get(index) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__fetch_function__DetectObjects_Event__response,  // fetch(index, &value) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__assign_function__DetectObjects_Event__response,  // assign(index, value) function pointer
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__resize_function__DetectObjects_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_members = {
  "perception_interfaces__srv",  // message namespace
  "DetectObjects_Event",  // message name
  3,  // number of fields
  sizeof(perception_interfaces__srv__DetectObjects_Event),
  false,  // has_any_key_member_
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_member_array,  // message members
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_type_support_handle = {
  0,
  &perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_members,
  get_message_typesupport_handle_function,
  &perception_interfaces__srv__DetectObjects_Event__get_type_hash,
  &perception_interfaces__srv__DetectObjects_Event__get_type_description,
  &perception_interfaces__srv__DetectObjects_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Event)() {
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Request)();
  perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Response)();
  if (!perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_type_support_handle.typesupport_identifier) {
    perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "perception_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_members = {
  "perception_interfaces__srv",  // service namespace
  "DetectObjects",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle,
  NULL,  // response message
  // perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle
  NULL  // event_message
  // perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle
};


static rosidl_service_type_support_t perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle = {
  0,
  &perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_members,
  get_service_typesupport_handle_function,
  &perception_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle,
  &perception_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle,
  &perception_interfaces__srv__DetectObjects_Event__rosidl_typesupport_introspection_c__DetectObjects_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    perception_interfaces,
    srv,
    DetectObjects
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    perception_interfaces,
    srv,
    DetectObjects
  ),
  &perception_interfaces__srv__DetectObjects__get_type_hash,
  &perception_interfaces__srv__DetectObjects__get_type_description,
  &perception_interfaces__srv__DetectObjects__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects)(void) {
  if (!perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.typesupport_identifier) {
    perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_interfaces, srv, DetectObjects_Event)()->data;
  }

  return &perception_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle;
}
