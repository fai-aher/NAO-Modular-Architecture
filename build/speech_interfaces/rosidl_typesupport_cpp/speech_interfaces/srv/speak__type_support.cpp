// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from speech_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "speech_interfaces/srv/detail/speak__functions.h"
#include "speech_interfaces/srv/detail/speak__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Speak_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Request_type_support_ids_t;

static const _Speak_Request_type_support_ids_t _Speak_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, Speak_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, Speak_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Request__get_type_hash,
  &speech_interfaces__srv__Speak_Request__get_type_description,
  &speech_interfaces__srv__Speak_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::Speak_Request>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::Speak_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, Speak_Request)() {
  return get_message_type_support_handle<speech_interfaces::srv::Speak_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__functions.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Speak_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Response_type_support_ids_t;

static const _Speak_Response_type_support_ids_t _Speak_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, Speak_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, Speak_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Response__get_type_hash,
  &speech_interfaces__srv__Speak_Response__get_type_description,
  &speech_interfaces__srv__Speak_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::Speak_Response>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::Speak_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, Speak_Response)() {
  return get_message_type_support_handle<speech_interfaces::srv::Speak_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__functions.h"
// already included above
// #include "speech_interfaces/srv/detail/speak__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Speak_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_Event_type_support_ids_t;

static const _Speak_Event_type_support_ids_t _Speak_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, Speak_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, Speak_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__Speak_Event__get_type_hash,
  &speech_interfaces__srv__Speak_Event__get_type_description,
  &speech_interfaces__srv__Speak_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::Speak_Event>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::Speak_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, Speak_Event)() {
  return get_message_type_support_handle<speech_interfaces::srv::Speak_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "speech_interfaces/srv/detail/speak__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace speech_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Speak_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Speak_type_support_ids_t;

static const _Speak_type_support_ids_t _Speak_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, Speak)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, Speak)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speak_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::Speak_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::Speak_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::Speak_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<speech_interfaces::srv::Speak>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<speech_interfaces::srv::Speak>,
  &speech_interfaces__srv__Speak__get_type_hash,
  &speech_interfaces__srv__Speak__get_type_description,
  &speech_interfaces__srv__Speak__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<speech_interfaces::srv::Speak>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::Speak_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, Speak)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<speech_interfaces::srv::Speak>();
}

#ifdef __cplusplus
}
#endif
