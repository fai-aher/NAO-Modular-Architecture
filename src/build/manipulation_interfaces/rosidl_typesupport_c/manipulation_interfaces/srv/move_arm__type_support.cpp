// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "manipulation_interfaces/srv/detail/move_arm__struct.h"
#include "manipulation_interfaces/srv/detail/move_arm__type_support.h"
#include "manipulation_interfaces/srv/detail/move_arm__functions.h"
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

typedef struct _MoveArm_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveArm_Request_type_support_ids_t;

static const _MoveArm_Request_type_support_ids_t _MoveArm_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveArm_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveArm_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveArm_Request_type_support_symbol_names_t _MoveArm_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, MoveArm_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, MoveArm_Request)),
  }
};

typedef struct _MoveArm_Request_type_support_data_t
{
  void * data[2];
} _MoveArm_Request_type_support_data_t;

static _MoveArm_Request_type_support_data_t _MoveArm_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveArm_Request_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_MoveArm_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveArm_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveArm_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveArm_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveArm_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__MoveArm_Request__get_type_hash,
  &manipulation_interfaces__srv__MoveArm_Request__get_type_description,
  &manipulation_interfaces__srv__MoveArm_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, MoveArm_Request)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::MoveArm_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__type_support.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__functions.h"
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

typedef struct _MoveArm_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveArm_Response_type_support_ids_t;

static const _MoveArm_Response_type_support_ids_t _MoveArm_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveArm_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveArm_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveArm_Response_type_support_symbol_names_t _MoveArm_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, MoveArm_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, MoveArm_Response)),
  }
};

typedef struct _MoveArm_Response_type_support_data_t
{
  void * data[2];
} _MoveArm_Response_type_support_data_t;

static _MoveArm_Response_type_support_data_t _MoveArm_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveArm_Response_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_MoveArm_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveArm_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveArm_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveArm_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveArm_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__MoveArm_Response__get_type_hash,
  &manipulation_interfaces__srv__MoveArm_Response__get_type_description,
  &manipulation_interfaces__srv__MoveArm_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, MoveArm_Response)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::MoveArm_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__type_support.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__functions.h"
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

typedef struct _MoveArm_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveArm_Event_type_support_ids_t;

static const _MoveArm_Event_type_support_ids_t _MoveArm_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveArm_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveArm_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveArm_Event_type_support_symbol_names_t _MoveArm_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, MoveArm_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, MoveArm_Event)),
  }
};

typedef struct _MoveArm_Event_type_support_data_t
{
  void * data[2];
} _MoveArm_Event_type_support_data_t;

static _MoveArm_Event_type_support_data_t _MoveArm_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveArm_Event_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_MoveArm_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveArm_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveArm_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveArm_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveArm_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__MoveArm_Event__get_type_hash,
  &manipulation_interfaces__srv__MoveArm_Event__get_type_description,
  &manipulation_interfaces__srv__MoveArm_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, MoveArm_Event)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::MoveArm_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manipulation_interfaces/srv/detail/move_arm__type_support.h"
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
typedef struct _MoveArm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveArm_type_support_ids_t;

static const _MoveArm_type_support_ids_t _MoveArm_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveArm_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveArm_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveArm_type_support_symbol_names_t _MoveArm_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manipulation_interfaces, srv, MoveArm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manipulation_interfaces, srv, MoveArm)),
  }
};

typedef struct _MoveArm_type_support_data_t
{
  void * data[2];
} _MoveArm_type_support_data_t;

static _MoveArm_type_support_data_t _MoveArm_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveArm_service_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_MoveArm_service_typesupport_ids.typesupport_identifier[0],
  &_MoveArm_service_typesupport_symbol_names.symbol_name[0],
  &_MoveArm_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveArm_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveArm_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveArm_Request_message_type_support_handle,
  &MoveArm_Response_message_type_support_handle,
  &MoveArm_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    MoveArm
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    manipulation_interfaces,
    srv,
    MoveArm
  ),
  &manipulation_interfaces__srv__MoveArm__get_type_hash,
  &manipulation_interfaces__srv__MoveArm__get_type_description,
  &manipulation_interfaces__srv__MoveArm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace manipulation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, manipulation_interfaces, srv, MoveArm)() {
  return &::manipulation_interfaces::srv::rosidl_typesupport_c::MoveArm_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
