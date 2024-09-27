// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from navigation_interfaces:action/NavigationToPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
#include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
#include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_Goal_type_support_ids_t;

static const _NavigationToPose_Goal_type_support_ids_t _NavigationToPose_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_Goal_type_support_symbol_names_t _NavigationToPose_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_Goal)),
  }
};

typedef struct _NavigationToPose_Goal_type_support_data_t
{
  void * data[2];
} _NavigationToPose_Goal_type_support_data_t;

static _NavigationToPose_Goal_type_support_data_t _NavigationToPose_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_Goal_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_Goal__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_Goal__get_type_description,
  &navigation_interfaces__action__NavigationToPose_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_Goal)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_Result_type_support_ids_t;

static const _NavigationToPose_Result_type_support_ids_t _NavigationToPose_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_Result_type_support_symbol_names_t _NavigationToPose_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_Result)),
  }
};

typedef struct _NavigationToPose_Result_type_support_data_t
{
  void * data[2];
} _NavigationToPose_Result_type_support_data_t;

static _NavigationToPose_Result_type_support_data_t _NavigationToPose_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_Result_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_Result__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_Result__get_type_description,
  &navigation_interfaces__action__NavigationToPose_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_Result)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_Feedback_type_support_ids_t;

static const _NavigationToPose_Feedback_type_support_ids_t _NavigationToPose_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_Feedback_type_support_symbol_names_t _NavigationToPose_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_Feedback)),
  }
};

typedef struct _NavigationToPose_Feedback_type_support_data_t
{
  void * data[2];
} _NavigationToPose_Feedback_type_support_data_t;

static _NavigationToPose_Feedback_type_support_data_t _NavigationToPose_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_Feedback_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_Feedback__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_Feedback__get_type_description,
  &navigation_interfaces__action__NavigationToPose_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_Feedback)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_SendGoal_Request_type_support_ids_t;

static const _NavigationToPose_SendGoal_Request_type_support_ids_t _NavigationToPose_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_SendGoal_Request_type_support_symbol_names_t _NavigationToPose_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_SendGoal_Request)),
  }
};

typedef struct _NavigationToPose_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavigationToPose_SendGoal_Request_type_support_data_t;

static _NavigationToPose_SendGoal_Request_type_support_data_t _NavigationToPose_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_SendGoal_Request_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Request__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Request__get_type_description,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_SendGoal_Request)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_SendGoal_Response_type_support_ids_t;

static const _NavigationToPose_SendGoal_Response_type_support_ids_t _NavigationToPose_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_SendGoal_Response_type_support_symbol_names_t _NavigationToPose_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_SendGoal_Response)),
  }
};

typedef struct _NavigationToPose_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavigationToPose_SendGoal_Response_type_support_data_t;

static _NavigationToPose_SendGoal_Response_type_support_data_t _NavigationToPose_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_SendGoal_Response_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Response__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Response__get_type_description,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_SendGoal_Response)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_SendGoal_Event_type_support_ids_t;

static const _NavigationToPose_SendGoal_Event_type_support_ids_t _NavigationToPose_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_SendGoal_Event_type_support_symbol_names_t _NavigationToPose_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_SendGoal_Event)),
  }
};

typedef struct _NavigationToPose_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _NavigationToPose_SendGoal_Event_type_support_data_t;

static _NavigationToPose_SendGoal_Event_type_support_data_t _NavigationToPose_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_SendGoal_Event_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Event__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Event__get_type_description,
  &navigation_interfaces__action__NavigationToPose_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_SendGoal_Event)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _NavigationToPose_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_SendGoal_type_support_ids_t;

static const _NavigationToPose_SendGoal_type_support_ids_t _NavigationToPose_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_SendGoal_type_support_symbol_names_t _NavigationToPose_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_SendGoal)),
  }
};

typedef struct _NavigationToPose_SendGoal_type_support_data_t
{
  void * data[2];
} _NavigationToPose_SendGoal_type_support_data_t;

static _NavigationToPose_SendGoal_type_support_data_t _NavigationToPose_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_SendGoal_service_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigationToPose_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &NavigationToPose_SendGoal_Request_message_type_support_handle,
  &NavigationToPose_SendGoal_Response_message_type_support_handle,
  &NavigationToPose_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces,
    action,
    NavigationToPose_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces,
    action,
    NavigationToPose_SendGoal
  ),
  &navigation_interfaces__action__NavigationToPose_SendGoal__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_SendGoal__get_type_description,
  &navigation_interfaces__action__NavigationToPose_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_SendGoal)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_GetResult_Request_type_support_ids_t;

static const _NavigationToPose_GetResult_Request_type_support_ids_t _NavigationToPose_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_GetResult_Request_type_support_symbol_names_t _NavigationToPose_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_GetResult_Request)),
  }
};

typedef struct _NavigationToPose_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavigationToPose_GetResult_Request_type_support_data_t;

static _NavigationToPose_GetResult_Request_type_support_data_t _NavigationToPose_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_GetResult_Request_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_GetResult_Request__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_GetResult_Request__get_type_description,
  &navigation_interfaces__action__NavigationToPose_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_GetResult_Request)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_GetResult_Response_type_support_ids_t;

static const _NavigationToPose_GetResult_Response_type_support_ids_t _NavigationToPose_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_GetResult_Response_type_support_symbol_names_t _NavigationToPose_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_GetResult_Response)),
  }
};

typedef struct _NavigationToPose_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavigationToPose_GetResult_Response_type_support_data_t;

static _NavigationToPose_GetResult_Response_type_support_data_t _NavigationToPose_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_GetResult_Response_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_GetResult_Response__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_GetResult_Response__get_type_description,
  &navigation_interfaces__action__NavigationToPose_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_GetResult_Response)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_GetResult_Event_type_support_ids_t;

static const _NavigationToPose_GetResult_Event_type_support_ids_t _NavigationToPose_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_GetResult_Event_type_support_symbol_names_t _NavigationToPose_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_GetResult_Event)),
  }
};

typedef struct _NavigationToPose_GetResult_Event_type_support_data_t
{
  void * data[2];
} _NavigationToPose_GetResult_Event_type_support_data_t;

static _NavigationToPose_GetResult_Event_type_support_data_t _NavigationToPose_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_GetResult_Event_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_GetResult_Event__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_GetResult_Event__get_type_description,
  &navigation_interfaces__action__NavigationToPose_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_GetResult_Event)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _NavigationToPose_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_GetResult_type_support_ids_t;

static const _NavigationToPose_GetResult_type_support_ids_t _NavigationToPose_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_GetResult_type_support_symbol_names_t _NavigationToPose_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_GetResult)),
  }
};

typedef struct _NavigationToPose_GetResult_type_support_data_t
{
  void * data[2];
} _NavigationToPose_GetResult_type_support_data_t;

static _NavigationToPose_GetResult_type_support_data_t _NavigationToPose_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_GetResult_service_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigationToPose_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &NavigationToPose_GetResult_Request_message_type_support_handle,
  &NavigationToPose_GetResult_Response_message_type_support_handle,
  &NavigationToPose_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces,
    action,
    NavigationToPose_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces,
    action,
    NavigationToPose_GetResult
  ),
  &navigation_interfaces__action__NavigationToPose_GetResult__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_GetResult__get_type_description,
  &navigation_interfaces__action__NavigationToPose_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_GetResult)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__struct.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"
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

namespace navigation_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigationToPose_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigationToPose_FeedbackMessage_type_support_ids_t;

static const _NavigationToPose_FeedbackMessage_type_support_ids_t _NavigationToPose_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigationToPose_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigationToPose_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigationToPose_FeedbackMessage_type_support_symbol_names_t _NavigationToPose_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces, action, NavigationToPose_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, action, NavigationToPose_FeedbackMessage)),
  }
};

typedef struct _NavigationToPose_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavigationToPose_FeedbackMessage_type_support_data_t;

static _NavigationToPose_FeedbackMessage_type_support_data_t _NavigationToPose_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigationToPose_FeedbackMessage_message_typesupport_map = {
  2,
  "navigation_interfaces",
  &_NavigationToPose_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavigationToPose_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavigationToPose_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigationToPose_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigationToPose_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces__action__NavigationToPose_FeedbackMessage__get_type_hash,
  &navigation_interfaces__action__NavigationToPose_FeedbackMessage__get_type_description,
  &navigation_interfaces__action__NavigationToPose_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_FeedbackMessage)() {
  return &::navigation_interfaces::action::rosidl_typesupport_c::NavigationToPose_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "navigation_interfaces/action/navigation_to_pose.h"
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__type_support.h"

static rosidl_action_type_support_t _navigation_interfaces__action__NavigationToPose__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &navigation_interfaces__action__NavigationToPose__get_type_hash,
  &navigation_interfaces__action__NavigationToPose__get_type_description,
  &navigation_interfaces__action__NavigationToPose__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose)()
{
  // Thread-safe by always writing the same values to the static struct
  _navigation_interfaces__action__NavigationToPose__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_SendGoal)();
  _navigation_interfaces__action__NavigationToPose__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_GetResult)();
  _navigation_interfaces__action__NavigationToPose__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _navigation_interfaces__action__NavigationToPose__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces, action, NavigationToPose_FeedbackMessage)();
  _navigation_interfaces__action__NavigationToPose__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_navigation_interfaces__action__NavigationToPose__typesupport_c;
}

#ifdef __cplusplus
}
#endif
