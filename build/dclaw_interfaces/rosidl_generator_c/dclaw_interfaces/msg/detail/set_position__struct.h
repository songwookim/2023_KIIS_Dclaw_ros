// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dclaw_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_
#define DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SetPosition in the package dclaw_interfaces.
typedef struct dclaw_interfaces__msg__SetPosition
{
  uint8_t id;
  int32_t position;
} dclaw_interfaces__msg__SetPosition;

// Struct for a sequence of dclaw_interfaces__msg__SetPosition.
typedef struct dclaw_interfaces__msg__SetPosition__Sequence
{
  dclaw_interfaces__msg__SetPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dclaw_interfaces__msg__SetPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DCLAW_INTERFACES__MSG__DETAIL__SET_POSITION__STRUCT_H_
