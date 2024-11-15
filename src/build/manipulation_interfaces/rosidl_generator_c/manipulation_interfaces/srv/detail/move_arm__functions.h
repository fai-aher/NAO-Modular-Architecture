// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/move_arm.h"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_
#define MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "manipulation_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "manipulation_interfaces/srv/detail/move_arm__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manipulation_interfaces__srv__MoveArm_Request
 * )) before or use
 * manipulation_interfaces__srv__MoveArm_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__init(manipulation_interfaces__srv__MoveArm_Request * msg);

/// Finalize srv/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Request__fini(manipulation_interfaces__srv__MoveArm_Request * msg);

/// Create srv/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manipulation_interfaces__srv__MoveArm_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Request *
manipulation_interfaces__srv__MoveArm_Request__create(void);

/// Destroy srv/MoveArm message.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Request__destroy(manipulation_interfaces__srv__MoveArm_Request * msg);

/// Check for srv/MoveArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__are_equal(const manipulation_interfaces__srv__MoveArm_Request * lhs, const manipulation_interfaces__srv__MoveArm_Request * rhs);

/// Copy a srv/MoveArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__copy(
  const manipulation_interfaces__srv__MoveArm_Request * input,
  manipulation_interfaces__srv__MoveArm_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * manipulation_interfaces__srv__MoveArm_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__Sequence__init(manipulation_interfaces__srv__MoveArm_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Request__Sequence__fini(manipulation_interfaces__srv__MoveArm_Request__Sequence * array);

/// Create array of srv/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * manipulation_interfaces__srv__MoveArm_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Request__Sequence *
manipulation_interfaces__srv__MoveArm_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Request__Sequence__destroy(manipulation_interfaces__srv__MoveArm_Request__Sequence * array);

/// Check for srv/MoveArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__Sequence__are_equal(const manipulation_interfaces__srv__MoveArm_Request__Sequence * lhs, const manipulation_interfaces__srv__MoveArm_Request__Sequence * rhs);

/// Copy an array of srv/MoveArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Request__Sequence__copy(
  const manipulation_interfaces__srv__MoveArm_Request__Sequence * input,
  manipulation_interfaces__srv__MoveArm_Request__Sequence * output);

/// Initialize srv/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manipulation_interfaces__srv__MoveArm_Response
 * )) before or use
 * manipulation_interfaces__srv__MoveArm_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__init(manipulation_interfaces__srv__MoveArm_Response * msg);

/// Finalize srv/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Response__fini(manipulation_interfaces__srv__MoveArm_Response * msg);

/// Create srv/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manipulation_interfaces__srv__MoveArm_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Response *
manipulation_interfaces__srv__MoveArm_Response__create(void);

/// Destroy srv/MoveArm message.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Response__destroy(manipulation_interfaces__srv__MoveArm_Response * msg);

/// Check for srv/MoveArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__are_equal(const manipulation_interfaces__srv__MoveArm_Response * lhs, const manipulation_interfaces__srv__MoveArm_Response * rhs);

/// Copy a srv/MoveArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__copy(
  const manipulation_interfaces__srv__MoveArm_Response * input,
  manipulation_interfaces__srv__MoveArm_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * manipulation_interfaces__srv__MoveArm_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__Sequence__init(manipulation_interfaces__srv__MoveArm_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Response__Sequence__fini(manipulation_interfaces__srv__MoveArm_Response__Sequence * array);

/// Create array of srv/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * manipulation_interfaces__srv__MoveArm_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Response__Sequence *
manipulation_interfaces__srv__MoveArm_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Response__Sequence__destroy(manipulation_interfaces__srv__MoveArm_Response__Sequence * array);

/// Check for srv/MoveArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__Sequence__are_equal(const manipulation_interfaces__srv__MoveArm_Response__Sequence * lhs, const manipulation_interfaces__srv__MoveArm_Response__Sequence * rhs);

/// Copy an array of srv/MoveArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Response__Sequence__copy(
  const manipulation_interfaces__srv__MoveArm_Response__Sequence * input,
  manipulation_interfaces__srv__MoveArm_Response__Sequence * output);

/// Initialize srv/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manipulation_interfaces__srv__MoveArm_Event
 * )) before or use
 * manipulation_interfaces__srv__MoveArm_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__init(manipulation_interfaces__srv__MoveArm_Event * msg);

/// Finalize srv/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Event__fini(manipulation_interfaces__srv__MoveArm_Event * msg);

/// Create srv/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manipulation_interfaces__srv__MoveArm_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Event *
manipulation_interfaces__srv__MoveArm_Event__create(void);

/// Destroy srv/MoveArm message.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Event__destroy(manipulation_interfaces__srv__MoveArm_Event * msg);

/// Check for srv/MoveArm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__are_equal(const manipulation_interfaces__srv__MoveArm_Event * lhs, const manipulation_interfaces__srv__MoveArm_Event * rhs);

/// Copy a srv/MoveArm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__copy(
  const manipulation_interfaces__srv__MoveArm_Event * input,
  manipulation_interfaces__srv__MoveArm_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * manipulation_interfaces__srv__MoveArm_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__Sequence__init(manipulation_interfaces__srv__MoveArm_Event__Sequence * array, size_t size);

/// Finalize array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Event__Sequence__fini(manipulation_interfaces__srv__MoveArm_Event__Sequence * array);

/// Create array of srv/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * manipulation_interfaces__srv__MoveArm_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
manipulation_interfaces__srv__MoveArm_Event__Sequence *
manipulation_interfaces__srv__MoveArm_Event__Sequence__create(size_t size);

/// Destroy array of srv/MoveArm messages.
/**
 * It calls
 * manipulation_interfaces__srv__MoveArm_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
void
manipulation_interfaces__srv__MoveArm_Event__Sequence__destroy(manipulation_interfaces__srv__MoveArm_Event__Sequence * array);

/// Check for srv/MoveArm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__Sequence__are_equal(const manipulation_interfaces__srv__MoveArm_Event__Sequence * lhs, const manipulation_interfaces__srv__MoveArm_Event__Sequence * rhs);

/// Copy an array of srv/MoveArm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
bool
manipulation_interfaces__srv__MoveArm_Event__Sequence__copy(
  const manipulation_interfaces__srv__MoveArm_Event__Sequence * input,
  manipulation_interfaces__srv__MoveArm_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_
