// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dclaw_interfaces:srv/GetPositions.idl
// generated code does not contain a copyright notice
#include "dclaw_interfaces/srv/detail/get_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dclaw_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dclaw_interfaces/srv/detail/get_positions__struct.h"
#include "dclaw_interfaces/srv/detail/get_positions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetPositions_Request__ros_msg_type = dclaw_interfaces__srv__GetPositions_Request;

static bool _GetPositions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPositions_Request__ros_msg_type * ros_message = static_cast<const _GetPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: position
  {
    cdr << ros_message->position;
  }

  return true;
}

static bool _GetPositions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPositions_Request__ros_msg_type * ros_message = static_cast<_GetPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: position
  {
    cdr >> ros_message->position;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dclaw_interfaces
size_t get_serialized_size_dclaw_interfaces__srv__GetPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPositions_Request__ros_msg_type * ros_message = static_cast<const _GetPositions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPositions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dclaw_interfaces__srv__GetPositions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dclaw_interfaces
size_t max_serialized_size_dclaw_interfaces__srv__GetPositions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPositions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dclaw_interfaces__srv__GetPositions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPositions_Request = {
  "dclaw_interfaces::srv",
  "GetPositions_Request",
  _GetPositions_Request__cdr_serialize,
  _GetPositions_Request__cdr_deserialize,
  _GetPositions_Request__get_serialized_size,
  _GetPositions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPositions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPositions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dclaw_interfaces, srv, GetPositions_Request)() {
  return &_GetPositions_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dclaw_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dclaw_interfaces/srv/detail/get_positions__struct.h"
// already included above
// #include "dclaw_interfaces/srv/detail/get_positions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetPositions_Response__ros_msg_type = dclaw_interfaces__srv__GetPositions_Response;

static bool _GetPositions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPositions_Response__ros_msg_type * ros_message = static_cast<const _GetPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    cdr << ros_message->position;
  }

  return true;
}

static bool _GetPositions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPositions_Response__ros_msg_type * ros_message = static_cast<_GetPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    cdr >> ros_message->position;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dclaw_interfaces
size_t get_serialized_size_dclaw_interfaces__srv__GetPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPositions_Response__ros_msg_type * ros_message = static_cast<const _GetPositions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPositions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dclaw_interfaces__srv__GetPositions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dclaw_interfaces
size_t max_serialized_size_dclaw_interfaces__srv__GetPositions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPositions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dclaw_interfaces__srv__GetPositions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPositions_Response = {
  "dclaw_interfaces::srv",
  "GetPositions_Response",
  _GetPositions_Response__cdr_serialize,
  _GetPositions_Response__cdr_deserialize,
  _GetPositions_Response__get_serialized_size,
  _GetPositions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPositions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPositions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dclaw_interfaces, srv, GetPositions_Response)() {
  return &_GetPositions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dclaw_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dclaw_interfaces/srv/get_positions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetPositions__callbacks = {
  "dclaw_interfaces::srv",
  "GetPositions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dclaw_interfaces, srv, GetPositions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dclaw_interfaces, srv, GetPositions_Response)(),
};

static rosidl_service_type_support_t GetPositions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetPositions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dclaw_interfaces, srv, GetPositions)() {
  return &GetPositions__handle;
}

#if defined(__cplusplus)
}
#endif
