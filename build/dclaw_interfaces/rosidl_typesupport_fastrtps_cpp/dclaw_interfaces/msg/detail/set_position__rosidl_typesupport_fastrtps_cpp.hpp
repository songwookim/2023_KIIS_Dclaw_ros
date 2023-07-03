// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from dclaw_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dclaw_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "dclaw_interfaces/msg/detail/set_position__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace dclaw_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dclaw_interfaces
cdr_serialize(
  const dclaw_interfaces::msg::SetPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dclaw_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dclaw_interfaces::msg::SetPosition & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dclaw_interfaces
get_serialized_size(
  const dclaw_interfaces::msg::SetPosition & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dclaw_interfaces
max_serialized_size_SetPosition(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dclaw_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dclaw_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dclaw_interfaces, msg, SetPosition)();

#ifdef __cplusplus
}
#endif

#endif  // DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
