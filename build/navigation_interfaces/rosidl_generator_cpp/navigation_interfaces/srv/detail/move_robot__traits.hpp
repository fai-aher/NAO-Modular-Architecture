// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigation_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navigation_interfaces/srv/move_robot.hpp"


#ifndef NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigation_interfaces/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Request & msg, bool use_flow_style = false)
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

}  // namespace navigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigation_interfaces::srv::MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigation_interfaces::srv::MoveRobot_Request & msg)
{
  return navigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigation_interfaces::srv::MoveRobot_Request>()
{
  return "navigation_interfaces::srv::MoveRobot_Request";
}

template<>
inline const char * name<navigation_interfaces::srv::MoveRobot_Request>()
{
  return "navigation_interfaces/srv/MoveRobot_Request";
}

template<>
struct has_fixed_size<navigation_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigation_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigation_interfaces::srv::MoveRobot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Response & msg, bool use_flow_style = false)
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

}  // namespace navigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigation_interfaces::srv::MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigation_interfaces::srv::MoveRobot_Response & msg)
{
  return navigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigation_interfaces::srv::MoveRobot_Response>()
{
  return "navigation_interfaces::srv::MoveRobot_Response";
}

template<>
inline const char * name<navigation_interfaces::srv::MoveRobot_Response>()
{
  return "navigation_interfaces/srv/MoveRobot_Response";
}

template<>
struct has_fixed_size<navigation_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navigation_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navigation_interfaces::srv::MoveRobot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace navigation_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Event & msg,
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
  const MoveRobot_Event & msg,
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

inline std::string to_yaml(const MoveRobot_Event & msg, bool use_flow_style = false)
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

}  // namespace navigation_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigation_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigation_interfaces::srv::MoveRobot_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigation_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigation_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigation_interfaces::srv::MoveRobot_Event & msg)
{
  return navigation_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigation_interfaces::srv::MoveRobot_Event>()
{
  return "navigation_interfaces::srv::MoveRobot_Event";
}

template<>
inline const char * name<navigation_interfaces::srv::MoveRobot_Event>()
{
  return "navigation_interfaces/srv/MoveRobot_Event";
}

template<>
struct has_fixed_size<navigation_interfaces::srv::MoveRobot_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navigation_interfaces::srv::MoveRobot_Event>
  : std::integral_constant<bool, has_bounded_size<navigation_interfaces::srv::MoveRobot_Request>::value && has_bounded_size<navigation_interfaces::srv::MoveRobot_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<navigation_interfaces::srv::MoveRobot_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigation_interfaces::srv::MoveRobot>()
{
  return "navigation_interfaces::srv::MoveRobot";
}

template<>
inline const char * name<navigation_interfaces::srv::MoveRobot>()
{
  return "navigation_interfaces/srv/MoveRobot";
}

template<>
struct has_fixed_size<navigation_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_fixed_size<navigation_interfaces::srv::MoveRobot_Request>::value &&
    has_fixed_size<navigation_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigation_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_bounded_size<navigation_interfaces::srv::MoveRobot_Request>::value &&
    has_bounded_size<navigation_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct is_service<navigation_interfaces::srv::MoveRobot>
  : std::true_type
{
};

template<>
struct is_service_request<navigation_interfaces::srv::MoveRobot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigation_interfaces::srv::MoveRobot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
