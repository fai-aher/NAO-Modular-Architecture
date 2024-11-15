// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from speech_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "speech_interfaces/srv/detail/speak__struct.h"
#include "speech_interfaces/srv/detail/speak__type_support.h"
#include "speech_interfaces/srv/detail/speak__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Speak_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Request_type_support_ids_t;

static const _Speak_Request_type_support_ids_t _Speak_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Speak_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Speak_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Speak_Request_type_support_symbol_names_t _Speak_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_interfaces, srv, Speak_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_interfaces, srv, Speak_Request)),
  }
};

typedef struct _Speak_Request_type_support_data_t
{
  void * data[2];
} _Speak_Request_type_support_data_t;

static _Speak_Request_type_support_data_t _Speak_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Speak_Request_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_Speak_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Speak_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Speak_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Speak_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Request__get_type_hash,
  &speech_interfaces__srv__Speak_Request__get_type_description,
  &speech_interfaces__srv__Speak_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace speech_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, speech_interfaces, srv, Speak_Request)() {
  return &::speech_interfaces::srv::rosidl_typesupport_c::Speak_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__type_support.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__functions.h"
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

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Speak_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Response_type_support_ids_t;

static const _Speak_Response_type_support_ids_t _Speak_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Speak_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Speak_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Speak_Response_type_support_symbol_names_t _Speak_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_interfaces, srv, Speak_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_interfaces, srv, Speak_Response)),
  }
};

typedef struct _Speak_Response_type_support_data_t
{
  void * data[2];
} _Speak_Response_type_support_data_t;

static _Speak_Response_type_support_data_t _Speak_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Speak_Response_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_Speak_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Speak_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Speak_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Speak_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Response__get_type_hash,
  &speech_interfaces__srv__Speak_Response__get_type_description,
  &speech_interfaces__srv__Speak_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace speech_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, speech_interfaces, srv, Speak_Response)() {
  return &::speech_interfaces::srv::rosidl_typesupport_c::Speak_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__type_support.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__functions.h"
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

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Speak_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Event_type_support_ids_t;

static const _Speak_Event_type_support_ids_t _Speak_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Speak_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Speak_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Speak_Event_type_support_symbol_names_t _Speak_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_interfaces, srv, Speak_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_interfaces, srv, Speak_Event)),
  }
};

typedef struct _Speak_Event_type_support_data_t
{
  void * data[2];
} _Speak_Event_type_support_data_t;

static _Speak_Event_type_support_data_t _Speak_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Speak_Event_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_Speak_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Speak_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Speak_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Speak_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Event__get_type_hash,
  &speech_interfaces__srv__Speak_Event__get_type_description,
  &speech_interfaces__srv__Speak_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace speech_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, speech_interfaces, srv, Speak_Event)() {
  return &::speech_interfaces::srv::rosidl_typesupport_c::Speak_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Speak_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_type_support_ids_t;

static const _Speak_type_support_ids_t _Speak_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Speak_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Speak_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Speak_type_support_symbol_names_t _Speak_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_interfaces, srv, Speak)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, speech_interfaces, srv, Speak)),
  }
};

typedef struct _Speak_type_support_data_t
{
  void * data[2];
} _Speak_type_support_data_t;

static _Speak_type_support_data_t _Speak_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Speak_service_typesupport_map = {
  2,
  "speech_interfaces",
  &_Speak_service_typesupport_ids.typesupport_identifier[0],
  &_Speak_service_typesupport_symbol_names.symbol_name[0],
  &_Speak_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Speak_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Speak_Request_message_type_support_handle,
  &Speak_Response_message_type_support_handle,
  &Speak_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    speech_interfaces,
    srv,
    Speak
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    speech_interfaces,
    srv,
    Speak
  ),
  &speech_interfaces__srv__Speak__get_type_hash,
  &speech_interfaces__srv__Speak__get_type_description,
  &speech_interfaces__srv__Speak__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace speech_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, speech_interfaces, srv, Speak)() {
  return &::speech_interfaces::srv::rosidl_typesupport_c::Speak_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif