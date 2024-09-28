// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manipulation_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manipulation_interfaces/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
#include "manipulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manipulation_interfaces/srv/detail/set_mode__functions.h"
#include "manipulation_interfaces/srv/detail/set_mode__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manipulation_interfaces__srv__SetMode_Request__init(message_memory);
}

void manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_fini_function(void * message_memory)
{
  manipulation_interfaces__srv__SetMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_member_array[1] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manipulation_interfaces__srv__SetMode_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_members = {
  "manipulation_interfaces__srv",  // message namespace
  "SetMode_Request",  // message name
  1,  // number of fields
  sizeof(manipulation_interfaces__srv__SetMode_Request),
  false,  // has_any_key_member_
  manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_member_array,  // message members
  manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle = {
  0,
  &manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_members,
  get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__SetMode_Request__get_type_hash,
  &manipulation_interfaces__srv__SetMode_Request__get_type_description,
  &manipulation_interfaces__srv__SetMode_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manipulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Request)() {
  if (!manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle.typesupport_identifier) {
    manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manipulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__functions.h"
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manipulation_interfaces__srv__SetMode_Response__init(message_memory);
}

void manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_fini_function(void * message_memory)
{
  manipulation_interfaces__srv__SetMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manipulation_interfaces__srv__SetMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_members = {
  "manipulation_interfaces__srv",  // message namespace
  "SetMode_Response",  // message name
  1,  // number of fields
  sizeof(manipulation_interfaces__srv__SetMode_Response),
  false,  // has_any_key_member_
  manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_member_array,  // message members
  manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle = {
  0,
  &manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_members,
  get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__SetMode_Response__get_type_hash,
  &manipulation_interfaces__srv__SetMode_Response__get_type_description,
  &manipulation_interfaces__srv__SetMode_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manipulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Response)() {
  if (!manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle.typesupport_identifier) {
    manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manipulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__functions.h"
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "manipulation_interfaces/srv/set_mode.h"
// Member `request`
// Member `response`
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manipulation_interfaces__srv__SetMode_Event__init(message_memory);
}

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_fini_function(void * message_memory)
{
  manipulation_interfaces__srv__SetMode_Event__fini(message_memory);
}

size_t manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__size_function__SetMode_Event__request(
  const void * untyped_member)
{
  const manipulation_interfaces__srv__SetMode_Request__Sequence * member =
    (const manipulation_interfaces__srv__SetMode_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__request(
  const void * untyped_member, size_t index)
{
  const manipulation_interfaces__srv__SetMode_Request__Sequence * member =
    (const manipulation_interfaces__srv__SetMode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__request(
  void * untyped_member, size_t index)
{
  manipulation_interfaces__srv__SetMode_Request__Sequence * member =
    (manipulation_interfaces__srv__SetMode_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetMode_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const manipulation_interfaces__srv__SetMode_Request * item =
    ((const manipulation_interfaces__srv__SetMode_Request *)
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__request(untyped_member, index));
  manipulation_interfaces__srv__SetMode_Request * value =
    (manipulation_interfaces__srv__SetMode_Request *)(untyped_value);
  *value = *item;
}

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__assign_function__SetMode_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  manipulation_interfaces__srv__SetMode_Request * item =
    ((manipulation_interfaces__srv__SetMode_Request *)
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__request(untyped_member, index));
  const manipulation_interfaces__srv__SetMode_Request * value =
    (const manipulation_interfaces__srv__SetMode_Request *)(untyped_value);
  *item = *value;
}

bool manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__resize_function__SetMode_Event__request(
  void * untyped_member, size_t size)
{
  manipulation_interfaces__srv__SetMode_Request__Sequence * member =
    (manipulation_interfaces__srv__SetMode_Request__Sequence *)(untyped_member);
  manipulation_interfaces__srv__SetMode_Request__Sequence__fini(member);
  return manipulation_interfaces__srv__SetMode_Request__Sequence__init(member, size);
}

size_t manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__size_function__SetMode_Event__response(
  const void * untyped_member)
{
  const manipulation_interfaces__srv__SetMode_Response__Sequence * member =
    (const manipulation_interfaces__srv__SetMode_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__response(
  const void * untyped_member, size_t index)
{
  const manipulation_interfaces__srv__SetMode_Response__Sequence * member =
    (const manipulation_interfaces__srv__SetMode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__response(
  void * untyped_member, size_t index)
{
  manipulation_interfaces__srv__SetMode_Response__Sequence * member =
    (manipulation_interfaces__srv__SetMode_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetMode_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const manipulation_interfaces__srv__SetMode_Response * item =
    ((const manipulation_interfaces__srv__SetMode_Response *)
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__response(untyped_member, index));
  manipulation_interfaces__srv__SetMode_Response * value =
    (manipulation_interfaces__srv__SetMode_Response *)(untyped_value);
  *value = *item;
}

void manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__assign_function__SetMode_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  manipulation_interfaces__srv__SetMode_Response * item =
    ((manipulation_interfaces__srv__SetMode_Response *)
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__response(untyped_member, index));
  const manipulation_interfaces__srv__SetMode_Response * value =
    (const manipulation_interfaces__srv__SetMode_Response *)(untyped_value);
  *item = *value;
}

bool manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__resize_function__SetMode_Event__response(
  void * untyped_member, size_t size)
{
  manipulation_interfaces__srv__SetMode_Response__Sequence * member =
    (manipulation_interfaces__srv__SetMode_Response__Sequence *)(untyped_member);
  manipulation_interfaces__srv__SetMode_Response__Sequence__fini(member);
  return manipulation_interfaces__srv__SetMode_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manipulation_interfaces__srv__SetMode_Event, info),  // bytes offset in struct
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
    offsetof(manipulation_interfaces__srv__SetMode_Event, request),  // bytes offset in struct
    NULL,  // default value
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__size_function__SetMode_Event__request,  // size() function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__request,  // get_const(index) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__request,  // get(index) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetMode_Event__request,  // fetch(index, &value) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__assign_function__SetMode_Event__request,  // assign(index, value) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__resize_function__SetMode_Event__request  // resize(index) function pointer
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
    offsetof(manipulation_interfaces__srv__SetMode_Event, response),  // bytes offset in struct
    NULL,  // default value
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__size_function__SetMode_Event__response,  // size() function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_const_function__SetMode_Event__response,  // get_const(index) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__get_function__SetMode_Event__response,  // get(index) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__fetch_function__SetMode_Event__response,  // fetch(index, &value) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__assign_function__SetMode_Event__response,  // assign(index, value) function pointer
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__resize_function__SetMode_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_members = {
  "manipulation_interfaces__srv",  // message namespace
  "SetMode_Event",  // message name
  3,  // number of fields
  sizeof(manipulation_interfaces__srv__SetMode_Event),
  false,  // has_any_key_member_
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_member_array,  // message members
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_type_support_handle = {
  0,
  &manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_members,
  get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__SetMode_Event__get_type_hash,
  &manipulation_interfaces__srv__SetMode_Event__get_type_description,
  &manipulation_interfaces__srv__SetMode_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manipulation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Event)() {
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Request)();
  manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Response)();
  if (!manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_type_support_handle.typesupport_identifier) {
    manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "manipulation_interfaces/srv/detail/set_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_members = {
  "manipulation_interfaces__srv",  // service namespace
  "SetMode",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle,
  NULL,  // response message
  // manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle
  NULL  // event_message
  // manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle
};


static rosidl_service_type_support_t manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle = {
  0,
  &manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_members,
  get_service_typesupport_handle_function,
  &manipulation_interfaces__srv__SetMode_Request__rosidl_typesupport_introspection_c__SetMode_Request_message_type_support_handle,
  &manipulation_interfaces__srv__SetMode_Response__rosidl_typesupport_introspection_c__SetMode_Response_message_type_support_handle,
  &manipulation_interfaces__srv__SetMode_Event__rosidl_typesupport_introspection_c__SetMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    SetMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    SetMode
  ),
  &manipulation_interfaces__srv__SetMode__get_type_hash,
  &manipulation_interfaces__srv__SetMode__get_type_description,
  &manipulation_interfaces__srv__SetMode__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manipulation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode)(void) {
  if (!manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.typesupport_identifier) {
    manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, SetMode_Event)()->data;
  }

  return &manipulation_interfaces__srv__detail__set_mode__rosidl_typesupport_introspection_c__SetMode_service_type_support_handle;
}
