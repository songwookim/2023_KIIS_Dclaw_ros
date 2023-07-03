// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dclaw_interfaces:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_H_
#define DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetPositions in the package dclaw_interfaces.
typedef struct dclaw_interfaces__srv__SetPositions_Request
{
  uint8_t id;
  float position;
} dclaw_interfaces__srv__SetPositions_Request;

// Struct for a sequence of dclaw_interfaces__srv__SetPositions_Request.
typedef struct dclaw_interfaces__srv__SetPositions_Request__Sequence
{
  dclaw_interfaces__srv__SetPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dclaw_interfaces__srv__SetPositions_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetPositions in the package dclaw_interfaces.
typedef struct dclaw_interfaces__srv__SetPositions_Response
{
  float position;
} dclaw_interfaces__srv__SetPositions_Response;

// Struct for a sequence of dclaw_interfaces__srv__SetPositions_Response.
typedef struct dclaw_interfaces__srv__SetPositions_Response__Sequence
{
  dclaw_interfaces__srv__SetPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dclaw_interfaces__srv__SetPositions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DCLAW_INTERFACES__SRV__DETAIL__SET_POSITIONS__STRUCT_H_
