// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speech_interfaces:srv/ListVoices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/list_voices.hpp"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__TRAITS_HPP_
#define SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speech_interfaces/srv/detail/list_voices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace speech_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListVoices_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListVoices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListVoices_Request & msg, bool use_flow_style = false)
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

}  // namespace speech_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use speech_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_interfaces::srv::ListVoices_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const speech_interfaces::srv::ListVoices_Request & msg)
{
  return speech_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<speech_interfaces::srv::ListVoices_Request>()
{
  return "speech_interfaces::srv::ListVoices_Request";
}

template<>
inline const char * name<speech_interfaces::srv::ListVoices_Request>()
{
  return "speech_interfaces/srv/ListVoices_Request";
}

template<>
struct has_fixed_size<speech_interfaces::srv::ListVoices_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<speech_interfaces::srv::ListVoices_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<speech_interfaces::srv::ListVoices_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace speech_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListVoices_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: voices
  {
    if (msg.voices.size() == 0) {
      out << "voices: []";
    } else {
      out << "voices: [";
      size_t pending_items = msg.voices.size();
      for (auto item : msg.voices) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ListVoices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voices.size() == 0) {
      out << "voices: []\n";
    } else {
      out << "voices:\n";
      for (auto item : msg.voices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListVoices_Response & msg, bool use_flow_style = false)
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

}  // namespace speech_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use speech_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_interfaces::srv::ListVoices_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const speech_interfaces::srv::ListVoices_Response & msg)
{
  return speech_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<speech_interfaces::srv::ListVoices_Response>()
{
  return "speech_interfaces::srv::ListVoices_Response";
}

template<>
inline const char * name<speech_interfaces::srv::ListVoices_Response>()
{
  return "speech_interfaces/srv/ListVoices_Response";
}

template<>
struct has_fixed_size<speech_interfaces::srv::ListVoices_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_interfaces::srv::ListVoices_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<speech_interfaces::srv::ListVoices_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace speech_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListVoices_Event & msg,
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
  const ListVoices_Event & msg,
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

inline std::string to_yaml(const ListVoices_Event & msg, bool use_flow_style = false)
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

}  // namespace speech_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use speech_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speech_interfaces::srv::ListVoices_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  speech_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speech_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const speech_interfaces::srv::ListVoices_Event & msg)
{
  return speech_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<speech_interfaces::srv::ListVoices_Event>()
{
  return "speech_interfaces::srv::ListVoices_Event";
}

template<>
inline const char * name<speech_interfaces::srv::ListVoices_Event>()
{
  return "speech_interfaces/srv/ListVoices_Event";
}

template<>
struct has_fixed_size<speech_interfaces::srv::ListVoices_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<speech_interfaces::srv::ListVoices_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<speech_interfaces::srv::ListVoices_Request>::value && has_bounded_size<speech_interfaces::srv::ListVoices_Response>::value> {};

template<>
struct is_message<speech_interfaces::srv::ListVoices_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<speech_interfaces::srv::ListVoices>()
{
  return "speech_interfaces::srv::ListVoices";
}

template<>
inline const char * name<speech_interfaces::srv::ListVoices>()
{
  return "speech_interfaces/srv/ListVoices";
}

template<>
struct has_fixed_size<speech_interfaces::srv::ListVoices>
  : std::integral_constant<
    bool,
    has_fixed_size<speech_interfaces::srv::ListVoices_Request>::value &&
    has_fixed_size<speech_interfaces::srv::ListVoices_Response>::value
  >
{
};

template<>
struct has_bounded_size<speech_interfaces::srv::ListVoices>
  : std::integral_constant<
    bool,
    has_bounded_size<speech_interfaces::srv::ListVoices_Request>::value &&
    has_bounded_size<speech_interfaces::srv::ListVoices_Response>::value
  >
{
};

template<>
struct is_service<speech_interfaces::srv::ListVoices>
  : std::true_type
{
};

template<>
struct is_service_request<speech_interfaces::srv::ListVoices_Request>
  : std::true_type
{
};

template<>
struct is_service_response<speech_interfaces::srv::ListVoices_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__TRAITS_HPP_
