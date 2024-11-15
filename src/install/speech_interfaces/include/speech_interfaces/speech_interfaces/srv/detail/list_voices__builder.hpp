// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speech_interfaces:srv/ListVoices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/list_voices.hpp"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__BUILDER_HPP_
#define SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speech_interfaces/srv/detail/list_voices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speech_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ListVoices_Request>()
{
  return ::speech_interfaces::srv::ListVoices_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListVoices_Response_voices
{
public:
  Init_ListVoices_Response_voices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::speech_interfaces::srv::ListVoices_Response voices(::speech_interfaces::srv::ListVoices_Response::_voices_type arg)
  {
    msg_.voices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::ListVoices_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ListVoices_Response>()
{
  return speech_interfaces::srv::builder::Init_ListVoices_Response_voices();
}

}  // namespace speech_interfaces


namespace speech_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListVoices_Event_response
{
public:
  explicit Init_ListVoices_Event_response(::speech_interfaces::srv::ListVoices_Event & msg)
  : msg_(msg)
  {}
  ::speech_interfaces::srv::ListVoices_Event response(::speech_interfaces::srv::ListVoices_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speech_interfaces::srv::ListVoices_Event msg_;
};

class Init_ListVoices_Event_request
{
public:
  explicit Init_ListVoices_Event_request(::speech_interfaces::srv::ListVoices_Event & msg)
  : msg_(msg)
  {}
  Init_ListVoices_Event_response request(::speech_interfaces::srv::ListVoices_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListVoices_Event_response(msg_);
  }

private:
  ::speech_interfaces::srv::ListVoices_Event msg_;
};

class Init_ListVoices_Event_info
{
public:
  Init_ListVoices_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListVoices_Event_request info(::speech_interfaces::srv::ListVoices_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListVoices_Event_request(msg_);
  }

private:
  ::speech_interfaces::srv::ListVoices_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::speech_interfaces::srv::ListVoices_Event>()
{
  return speech_interfaces::srv::builder::Init_ListVoices_Event_info();
}

}  // namespace speech_interfaces

#endif  // SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__BUILDER_HPP_
