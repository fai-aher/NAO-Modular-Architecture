// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "perception_interfaces/srv/detect_objects.hpp"


#ifndef PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_
#define PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_interfaces/srv/detail/detect_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace perception_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjects_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjects_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perception_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use perception_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_interfaces::srv::DetectObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const perception_interfaces::srv::DetectObjects_Request & msg)
{
  return perception_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perception_interfaces::srv::DetectObjects_Request>()
{
  return "perception_interfaces::srv::DetectObjects_Request";
}

template<>
inline const char * name<perception_interfaces::srv::DetectObjects_Request>()
{
  return "perception_interfaces/srv/DetectObjects_Request";
}

template<>
struct has_fixed_size<perception_interfaces::srv::DetectObjects_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<perception_interfaces::srv::DetectObjects_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<perception_interfaces::srv::DetectObjects_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'object_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace perception_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjects_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: object_names
  {
    if (msg.object_names.size() == 0) {
      out << "object_names: []";
    } else {
      out << "object_names: [";
      size_t pending_items = msg.object_names.size();
      for (auto item : msg.object_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_poses
  {
    if (msg.object_poses.size() == 0) {
      out << "object_poses: []";
    } else {
      out << "object_poses: [";
      size_t pending_items = msg.object_poses.size();
      for (auto item : msg.object_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: object_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_names.size() == 0) {
      out << "object_names: []\n";
    } else {
      out << "object_names:\n";
      for (auto item : msg.object_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_poses.size() == 0) {
      out << "object_poses: []\n";
    } else {
      out << "object_poses:\n";
      for (auto item : msg.object_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjects_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perception_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use perception_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_interfaces::srv::DetectObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const perception_interfaces::srv::DetectObjects_Response & msg)
{
  return perception_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perception_interfaces::srv::DetectObjects_Response>()
{
  return "perception_interfaces::srv::DetectObjects_Response";
}

template<>
inline const char * name<perception_interfaces::srv::DetectObjects_Response>()
{
  return "perception_interfaces/srv/DetectObjects_Response";
}

template<>
struct has_fixed_size<perception_interfaces::srv::DetectObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_interfaces::srv::DetectObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<perception_interfaces::srv::DetectObjects_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace perception_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjects_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjects_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjects_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace perception_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use perception_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_interfaces::srv::DetectObjects_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const perception_interfaces::srv::DetectObjects_Event & msg)
{
  return perception_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<perception_interfaces::srv::DetectObjects_Event>()
{
  return "perception_interfaces::srv::DetectObjects_Event";
}

template<>
inline const char * name<perception_interfaces::srv::DetectObjects_Event>()
{
  return "perception_interfaces/srv/DetectObjects_Event";
}

template<>
struct has_fixed_size<perception_interfaces::srv::DetectObjects_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_interfaces::srv::DetectObjects_Event>
  : std::integral_constant<bool, has_bounded_size<perception_interfaces::srv::DetectObjects_Request>::value && has_bounded_size<perception_interfaces::srv::DetectObjects_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<perception_interfaces::srv::DetectObjects_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<perception_interfaces::srv::DetectObjects>()
{
  return "perception_interfaces::srv::DetectObjects";
}

template<>
inline const char * name<perception_interfaces::srv::DetectObjects>()
{
  return "perception_interfaces/srv/DetectObjects";
}

template<>
struct has_fixed_size<perception_interfaces::srv::DetectObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<perception_interfaces::srv::DetectObjects_Request>::value &&
    has_fixed_size<perception_interfaces::srv::DetectObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<perception_interfaces::srv::DetectObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<perception_interfaces::srv::DetectObjects_Request>::value &&
    has_bounded_size<perception_interfaces::srv::DetectObjects_Response>::value
  >
{
};

template<>
struct is_service<perception_interfaces::srv::DetectObjects>
  : std::true_type
{
};

template<>
struct is_service_request<perception_interfaces::srv::DetectObjects_Request>
  : std::true_type
{
};

template<>
struct is_service_response<perception_interfaces::srv::DetectObjects_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_
