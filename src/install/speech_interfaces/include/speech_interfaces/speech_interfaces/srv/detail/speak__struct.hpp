// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speech_interfaces:srv/Speak.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/speak.hpp"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_
#define SPEECH_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__speech_interfaces__srv__Speak_Request __attribute__((deprecated))
#else
# define DEPRECATED__speech_interfaces__srv__Speak_Request __declspec(deprecated)
#endif

namespace speech_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Speak_Request_
{
  using Type = Speak_Request_<ContainerAllocator>;

  explicit Speak_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->animated = false;
    }
  }

  explicit Speak_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->animated = false;
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _animated_type =
    bool;
  _animated_type animated;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__animated(
    const bool & _arg)
  {
    this->animated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_interfaces::srv::Speak_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_interfaces::srv::Speak_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_interfaces__srv__Speak_Request
    std::shared_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_interfaces__srv__Speak_Request
    std::shared_ptr<speech_interfaces::srv::Speak_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speak_Request_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->animated != other.animated) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speak_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speak_Request_

// alias to use template instance with default allocator
using Speak_Request =
  speech_interfaces::srv::Speak_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace speech_interfaces


#ifndef _WIN32
# define DEPRECATED__speech_interfaces__srv__Speak_Response __attribute__((deprecated))
#else
# define DEPRECATED__speech_interfaces__srv__Speak_Response __declspec(deprecated)
#endif

namespace speech_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Speak_Response_
{
  using Type = Speak_Response_<ContainerAllocator>;

  explicit Speak_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Speak_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_interfaces::srv::Speak_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_interfaces::srv::Speak_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_interfaces__srv__Speak_Response
    std::shared_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_interfaces__srv__Speak_Response
    std::shared_ptr<speech_interfaces::srv::Speak_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speak_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speak_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speak_Response_

// alias to use template instance with default allocator
using Speak_Response =
  speech_interfaces::srv::Speak_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace speech_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__speech_interfaces__srv__Speak_Event __attribute__((deprecated))
#else
# define DEPRECATED__speech_interfaces__srv__Speak_Event __declspec(deprecated)
#endif

namespace speech_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Speak_Event_
{
  using Type = Speak_Event_<ContainerAllocator>;

  explicit Speak_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Speak_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<speech_interfaces::srv::Speak_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_interfaces::srv::Speak_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<speech_interfaces::srv::Speak_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_interfaces::srv::Speak_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<speech_interfaces::srv::Speak_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_interfaces::srv::Speak_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<speech_interfaces::srv::Speak_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<speech_interfaces::srv::Speak_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speech_interfaces::srv::Speak_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const speech_interfaces::srv::Speak_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speech_interfaces::srv::Speak_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speech_interfaces__srv__Speak_Event
    std::shared_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speech_interfaces__srv__Speak_Event
    std::shared_ptr<speech_interfaces::srv::Speak_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speak_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speak_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speak_Event_

// alias to use template instance with default allocator
using Speak_Event =
  speech_interfaces::srv::Speak_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace speech_interfaces

namespace speech_interfaces
{

namespace srv
{

struct Speak
{
  using Request = speech_interfaces::srv::Speak_Request;
  using Response = speech_interfaces::srv::Speak_Response;
  using Event = speech_interfaces::srv::Speak_Event;
};

}  // namespace srv

}  // namespace speech_interfaces

#endif  // SPEECH_INTERFACES__SRV__DETAIL__SPEAK__STRUCT_HPP_