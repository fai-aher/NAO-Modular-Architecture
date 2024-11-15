// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from speech_interfaces:srv/ChangeVoice.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "speech_interfaces/srv/detail/change_voice__functions.h"
#include "speech_interfaces/srv/detail/change_voice__struct.hpp"
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

typedef struct _ChangeVoice_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeVoice_Request_type_support_ids_t;

static const _ChangeVoice_Request_type_support_ids_t _ChangeVoice_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeVoice_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeVoice_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeVoice_Request_type_support_symbol_names_t _ChangeVoice_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, ChangeVoice_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, ChangeVoice_Request)),
  }
};

typedef struct _ChangeVoice_Request_type_support_data_t
{
  void * data[2];
} _ChangeVoice_Request_type_support_data_t;

static _ChangeVoice_Request_type_support_data_t _ChangeVoice_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeVoice_Request_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_ChangeVoice_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeVoice_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeVoice_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeVoice_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeVoice_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__ChangeVoice_Request__get_type_hash,
  &speech_interfaces__srv__ChangeVoice_Request__get_type_description,
  &speech_interfaces__srv__ChangeVoice_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Request>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::ChangeVoice_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, ChangeVoice_Request)() {
  return get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Request>();
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
// #include "speech_interfaces/srv/detail/change_voice__functions.h"
// already included above
// #include "speech_interfaces/srv/detail/change_voice__struct.hpp"
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

typedef struct _ChangeVoice_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeVoice_Response_type_support_ids_t;

static const _ChangeVoice_Response_type_support_ids_t _ChangeVoice_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeVoice_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeVoice_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeVoice_Response_type_support_symbol_names_t _ChangeVoice_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, ChangeVoice_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, ChangeVoice_Response)),
  }
};

typedef struct _ChangeVoice_Response_type_support_data_t
{
  void * data[2];
} _ChangeVoice_Response_type_support_data_t;

static _ChangeVoice_Response_type_support_data_t _ChangeVoice_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeVoice_Response_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_ChangeVoice_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeVoice_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeVoice_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeVoice_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeVoice_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__ChangeVoice_Response__get_type_hash,
  &speech_interfaces__srv__ChangeVoice_Response__get_type_description,
  &speech_interfaces__srv__ChangeVoice_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Response>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::ChangeVoice_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, ChangeVoice_Response)() {
  return get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Response>();
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
// #include "speech_interfaces/srv/detail/change_voice__functions.h"
// already included above
// #include "speech_interfaces/srv/detail/change_voice__struct.hpp"
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

typedef struct _ChangeVoice_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeVoice_Event_type_support_ids_t;

static const _ChangeVoice_Event_type_support_ids_t _ChangeVoice_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeVoice_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeVoice_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeVoice_Event_type_support_symbol_names_t _ChangeVoice_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, ChangeVoice_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, ChangeVoice_Event)),
  }
};

typedef struct _ChangeVoice_Event_type_support_data_t
{
  void * data[2];
} _ChangeVoice_Event_type_support_data_t;

static _ChangeVoice_Event_type_support_data_t _ChangeVoice_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeVoice_Event_message_typesupport_map = {
  2,
  "speech_interfaces",
  &_ChangeVoice_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeVoice_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeVoice_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeVoice_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeVoice_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &speech_interfaces__srv__ChangeVoice_Event__get_type_hash,
  &speech_interfaces__srv__ChangeVoice_Event__get_type_description,
  &speech_interfaces__srv__ChangeVoice_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Event>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::ChangeVoice_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, ChangeVoice_Event)() {
  return get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Event>();
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
// #include "speech_interfaces/srv/detail/change_voice__struct.hpp"
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

typedef struct _ChangeVoice_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeVoice_type_support_ids_t;

static const _ChangeVoice_type_support_ids_t _ChangeVoice_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeVoice_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeVoice_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeVoice_type_support_symbol_names_t _ChangeVoice_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, speech_interfaces, srv, ChangeVoice)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, speech_interfaces, srv, ChangeVoice)),
  }
};

typedef struct _ChangeVoice_type_support_data_t
{
  void * data[2];
} _ChangeVoice_type_support_data_t;

static _ChangeVoice_type_support_data_t _ChangeVoice_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeVoice_service_typesupport_map = {
  2,
  "speech_interfaces",
  &_ChangeVoice_service_typesupport_ids.typesupport_identifier[0],
  &_ChangeVoice_service_typesupport_symbol_names.symbol_name[0],
  &_ChangeVoice_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChangeVoice_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeVoice_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<speech_interfaces::srv::ChangeVoice_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<speech_interfaces::srv::ChangeVoice>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<speech_interfaces::srv::ChangeVoice>,
  &speech_interfaces__srv__ChangeVoice__get_type_hash,
  &speech_interfaces__srv__ChangeVoice__get_type_description,
  &speech_interfaces__srv__ChangeVoice__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace speech_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<speech_interfaces::srv::ChangeVoice>()
{
  return &::speech_interfaces::srv::rosidl_typesupport_cpp::ChangeVoice_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, speech_interfaces, srv, ChangeVoice)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<speech_interfaces::srv::ChangeVoice>();
}

#ifdef __cplusplus
}
#endif
