// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from manipulation_interfaces:srv/ToggleAwareness.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "manipulation_interfaces/srv/detail/toggle_awareness__struct.h"
#include "manipulation_interfaces/srv/detail/toggle_awareness__type_support.h"
#include "manipulation_interfaces/srv/detail/toggle_awareness__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleAwareness_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleAwareness_Request_type_support_ids_t;

static const _ToggleAwareness_Request_type_support_ids_t _ToggleAwareness_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleAwareness_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleAwareness_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleAwareness_Request_type_support_symbol_names_t _ToggleAwareness_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, ToggleAwareness_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, ToggleAwareness_Request)),
  }
};

typedef struct _ToggleAwareness_Request_type_support_data_t
{
  void * data[2];
} _ToggleAwareness_Request_type_support_data_t;

static _ToggleAwareness_Request_type_support_data_t _ToggleAwareness_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleAwareness_Request_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_ToggleAwareness_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleAwareness_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleAwareness_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleAwareness_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleAwareness_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__ToggleAwareness_Request__get_type_hash,
  &manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description,
  &manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, ToggleAwareness_Request)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::ToggleAwareness_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__type_support.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleAwareness_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleAwareness_Response_type_support_ids_t;

static const _ToggleAwareness_Response_type_support_ids_t _ToggleAwareness_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleAwareness_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleAwareness_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleAwareness_Response_type_support_symbol_names_t _ToggleAwareness_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, ToggleAwareness_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, ToggleAwareness_Response)),
  }
};

typedef struct _ToggleAwareness_Response_type_support_data_t
{
  void * data[2];
} _ToggleAwareness_Response_type_support_data_t;

static _ToggleAwareness_Response_type_support_data_t _ToggleAwareness_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleAwareness_Response_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_ToggleAwareness_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleAwareness_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleAwareness_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleAwareness_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleAwareness_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__ToggleAwareness_Response__get_type_hash,
  &manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description,
  &manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, ToggleAwareness_Response)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::ToggleAwareness_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__type_support.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleAwareness_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleAwareness_Event_type_support_ids_t;

static const _ToggleAwareness_Event_type_support_ids_t _ToggleAwareness_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleAwareness_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleAwareness_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleAwareness_Event_type_support_symbol_names_t _ToggleAwareness_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, ToggleAwareness_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, ToggleAwareness_Event)),
  }
};

typedef struct _ToggleAwareness_Event_type_support_data_t
{
  void * data[2];
} _ToggleAwareness_Event_type_support_data_t;

static _ToggleAwareness_Event_type_support_data_t _ToggleAwareness_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleAwareness_Event_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_ToggleAwareness_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleAwareness_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleAwareness_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleAwareness_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleAwareness_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__ToggleAwareness_Event__get_type_hash,
  &manipulation_interfaces__srv__ToggleAwareness_Event__get_type_description,
  &manipulation_interfaces__srv__ToggleAwareness_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, ToggleAwareness_Event)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::ToggleAwareness_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/toggle_awareness__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ToggleAwareness_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleAwareness_type_support_ids_t;

static const _ToggleAwareness_type_support_ids_t _ToggleAwareness_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleAwareness_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleAwareness_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleAwareness_type_support_symbol_names_t _ToggleAwareness_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, ToggleAwareness)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, ToggleAwareness)),
  }
};

typedef struct _ToggleAwareness_type_support_data_t
{
  void * data[2];
} _ToggleAwareness_type_support_data_t;

static _ToggleAwareness_type_support_data_t _ToggleAwareness_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleAwareness_service_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_ToggleAwareness_service_typesupport_ids.typesupport_identifier[0],
  &_ToggleAwareness_service_typesupport_symbol_names.symbol_name[0],
  &_ToggleAwareness_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ToggleAwareness_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleAwareness_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ToggleAwareness_Request_message_type_support_handle,
  &ToggleAwareness_Response_message_type_support_handle,
  &ToggleAwareness_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    ToggleAwareness
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    ToggleAwareness
  ),
  &manipulation_interfaces__srv__ToggleAwareness__get_type_hash,
  &manipulation_interfaces__srv__ToggleAwareness__get_type_description,
  &manipulation_interfaces__srv__ToggleAwareness__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, ToggleAwareness)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::ToggleAwareness_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
