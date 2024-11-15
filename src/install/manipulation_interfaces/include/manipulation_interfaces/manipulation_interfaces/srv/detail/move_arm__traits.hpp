// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/move_arm.hpp"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_
#define MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manipulation_interfaces/srv/detail/move_arm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace manipulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveArm_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArm_Request & msg, bool use_flow_style = false)
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

}  // namespace manipulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use manipulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manipulation_interfaces::srv::MoveArm_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  manipulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manipulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const manipulation_interfaces::srv::MoveArm_Request & msg)
{
  return manipulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manipulation_interfaces::srv::MoveArm_Request>()
{
  return "manipulation_interfaces::srv::MoveArm_Request";
}

template<>
inline const char * name<manipulation_interfaces::srv::MoveArm_Request>()
{
  return "manipulation_interfaces/srv/MoveArm_Request";
}

template<>
struct has_fixed_size<manipulation_interfaces::srv::MoveArm_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<manipulation_interfaces::srv::MoveArm_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<manipulation_interfaces::srv::MoveArm_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace manipulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveArm_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveArm_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveArm_Response & msg, bool use_flow_style = false)
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

}  // namespace manipulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use manipulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manipulation_interfaces::srv::MoveArm_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  manipulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manipulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const manipulation_interfaces::srv::MoveArm_Response & msg)
{
  return manipulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manipulation_interfaces::srv::MoveArm_Response>()
{
  return "manipulation_interfaces::srv::MoveArm_Response";
}

template<>
inline const char * name<manipulation_interfaces::srv::MoveArm_Response>()
{
  return "manipulation_interfaces/srv/MoveArm_Response";
}

template<>
struct has_fixed_size<manipulation_interfaces::srv::MoveArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<manipulation_interfaces::srv::MoveArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<manipulation_interfaces::srv::MoveArm_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace manipulation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveArm_Event & msg,
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
  const MoveArm_Event & msg,
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

inline std::string to_yaml(const MoveArm_Event & msg, bool use_flow_style = false)
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

}  // namespace manipulation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use manipulation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manipulation_interfaces::srv::MoveArm_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  manipulation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manipulation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const manipulation_interfaces::srv::MoveArm_Event & msg)
{
  return manipulation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manipulation_interfaces::srv::MoveArm_Event>()
{
  return "manipulation_interfaces::srv::MoveArm_Event";
}

template<>
inline const char * name<manipulation_interfaces::srv::MoveArm_Event>()
{
  return "manipulation_interfaces/srv/MoveArm_Event";
}

template<>
struct has_fixed_size<manipulation_interfaces::srv::MoveArm_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manipulation_interfaces::srv::MoveArm_Event>
  : std::integral_constant<bool, has_bounded_size<manipulation_interfaces::srv::MoveArm_Request>::value && has_bounded_size<manipulation_interfaces::srv::MoveArm_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<manipulation_interfaces::srv::MoveArm_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<manipulation_interfaces::srv::MoveArm>()
{
  return "manipulation_interfaces::srv::MoveArm";
}

template<>
inline const char * name<manipulation_interfaces::srv::MoveArm>()
{
  return "manipulation_interfaces/srv/MoveArm";
}

template<>
struct has_fixed_size<manipulation_interfaces::srv::MoveArm>
  : std::integral_constant<
    bool,
    has_fixed_size<manipulation_interfaces::srv::MoveArm_Request>::value &&
    has_fixed_size<manipulation_interfaces::srv::MoveArm_Response>::value
  >
{
};

template<>
struct has_bounded_size<manipulation_interfaces::srv::MoveArm>
  : std::integral_constant<
    bool,
    has_bounded_size<manipulation_interfaces::srv::MoveArm_Request>::value &&
    has_bounded_size<manipulation_interfaces::srv::MoveArm_Response>::value
  >
{
};

template<>
struct is_service<manipulation_interfaces::srv::MoveArm>
  : std::true_type
{
};

template<>
struct is_service_request<manipulation_interfaces::srv::MoveArm_Request>
  : std::true_type
{
};

template<>
struct is_service_response<manipulation_interfaces::srv::MoveArm_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_