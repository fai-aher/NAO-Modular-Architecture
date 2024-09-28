// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from manipulation_interfaces:srv/StandUp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "manipulation_interfaces/srv/detail/stand_up__functions.h"
#include "manipulation_interfaces/srv/detail/stand_up__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StandUp_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StandUp_Request_type_support_ids_t;

static const _StandUp_Request_type_support_ids_t _StandUp_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StandUp_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StandUp_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StandUp_Request_type_support_symbol_names_t _StandUp_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manipulation_interfaces, srv, StandUp_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manipulation_interfaces, srv, StandUp_Request)),
  }
};

typedef struct _StandUp_Request_type_support_data_t
{
  void * data[2];
} _StandUp_Request_type_support_data_t;

static _StandUp_Request_type_support_data_t _StandUp_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StandUp_Request_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_StandUp_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StandUp_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StandUp_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StandUp_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StandUp_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__StandUp_Request__get_type_hash,
  &manipulation_interfaces__srv__StandUp_Request__get_type_description,
  &manipulation_interfaces__srv__StandUp_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace manipulation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Request>()
{
  return &::manipulation_interfaces::srv::rosidl_typesupport_cpp::StandUp_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, manipulation_interfaces, srv, StandUp_Request)() {
  return get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Request>();
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
// #include "manipulation_interfaces/srv/detail/stand_up__functions.h"
// already included above
// #include "manipulation_interfaces/srv/detail/stand_up__struct.hpp"
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

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StandUp_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StandUp_Response_type_support_ids_t;

static const _StandUp_Response_type_support_ids_t _StandUp_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StandUp_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StandUp_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StandUp_Response_type_support_symbol_names_t _StandUp_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manipulation_interfaces, srv, StandUp_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manipulation_interfaces, srv, StandUp_Response)),
  }
};

typedef struct _StandUp_Response_type_support_data_t
{
  void * data[2];
} _StandUp_Response_type_support_data_t;

static _StandUp_Response_type_support_data_t _StandUp_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StandUp_Response_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_StandUp_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StandUp_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StandUp_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StandUp_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StandUp_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__StandUp_Response__get_type_hash,
  &manipulation_interfaces__srv__StandUp_Response__get_type_description,
  &manipulation_interfaces__srv__StandUp_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace manipulation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Response>()
{
  return &::manipulation_interfaces::srv::rosidl_typesupport_cpp::StandUp_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, manipulation_interfaces, srv, StandUp_Response)() {
  return get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Response>();
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
// #include "manipulation_interfaces/srv/detail/stand_up__functions.h"
// already included above
// #include "manipulation_interfaces/srv/detail/stand_up__struct.hpp"
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

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StandUp_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StandUp_Event_type_support_ids_t;

static const _StandUp_Event_type_support_ids_t _StandUp_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StandUp_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StandUp_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StandUp_Event_type_support_symbol_names_t _StandUp_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manipulation_interfaces, srv, StandUp_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manipulation_interfaces, srv, StandUp_Event)),
  }
};

typedef struct _StandUp_Event_type_support_data_t
{
  void * data[2];
} _StandUp_Event_type_support_data_t;

static _StandUp_Event_type_support_data_t _StandUp_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StandUp_Event_message_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_StandUp_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StandUp_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StandUp_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StandUp_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StandUp_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &manipulation_interfaces__srv__StandUp_Event__get_type_hash,
  &manipulation_interfaces__srv__StandUp_Event__get_type_description,
  &manipulation_interfaces__srv__StandUp_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace manipulation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Event>()
{
  return &::manipulation_interfaces::srv::rosidl_typesupport_cpp::StandUp_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, manipulation_interfaces, srv, StandUp_Event)() {
  return get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Event>();
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
// #include "manipulation_interfaces/srv/detail/stand_up__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manipulation_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StandUp_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StandUp_type_support_ids_t;

static const _StandUp_type_support_ids_t _StandUp_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StandUp_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StandUp_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StandUp_type_support_symbol_names_t _StandUp_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manipulation_interfaces, srv, StandUp)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manipulation_interfaces, srv, StandUp)),
  }
};

typedef struct _StandUp_type_support_data_t
{
  void * data[2];
} _StandUp_type_support_data_t;

static _StandUp_type_support_data_t _StandUp_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StandUp_service_typesupport_map = {
  2,
  "manipulation_interfaces",
  &_StandUp_service_typesupport_ids.typesupport_identifier[0],
  &_StandUp_service_typesupport_symbol_names.symbol_name[0],
  &_StandUp_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StandUp_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StandUp_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<manipulation_interfaces::srv::StandUp_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<manipulation_interfaces::srv::StandUp>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<manipulation_interfaces::srv::StandUp>,
  &manipulation_interfaces__srv__StandUp__get_type_hash,
  &manipulation_interfaces__srv__StandUp__get_type_description,
  &manipulation_interfaces__srv__StandUp__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace manipulation_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<manipulation_interfaces::srv::StandUp>()
{
  return &::manipulation_interfaces::srv::rosidl_typesupport_cpp::StandUp_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, manipulation_interfaces, srv, StandUp)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<manipulation_interfaces::srv::StandUp>();
}

#ifdef __cplusplus
}
#endif