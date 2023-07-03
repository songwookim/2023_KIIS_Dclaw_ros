// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dclaw_interfaces:srv/GetPositions.idl
// generated code does not contain a copyright notice

#ifndef DCLAW_INTERFACES__SRV__DETAIL__GET_POSITIONS__TRAITS_HPP_
#define DCLAW_INTERFACES__SRV__DETAIL__GET_POSITIONS__TRAITS_HPP_

#include "dclaw_interfaces/srv/detail/get_positions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPositions_Request>()
{
  return "dclaw_interfaces::srv::GetPositions_Request";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPositions_Request>()
{
  return "dclaw_interfaces/srv/GetPositions_Request";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPositions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::GetPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPositions_Response>()
{
  return "dclaw_interfaces::srv::GetPositions_Response";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPositions_Response>()
{
  return "dclaw_interfaces/srv/GetPositions_Response";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dclaw_interfaces::srv::GetPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dclaw_interfaces::srv::GetPositions>()
{
  return "dclaw_interfaces::srv::GetPositions";
}

template<>
inline const char * name<dclaw_interfaces::srv::GetPositions>()
{
  return "dclaw_interfaces/srv/GetPositions";
}

template<>
struct has_fixed_size<dclaw_interfaces::srv::GetPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<dclaw_interfaces::srv::GetPositions_Request>::value &&
    has_fixed_size<dclaw_interfaces::srv::GetPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<dclaw_interfaces::srv::GetPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<dclaw_interfaces::srv::GetPositions_Request>::value &&
    has_bounded_size<dclaw_interfaces::srv::GetPositions_Response>::value
  >
{
};

template<>
struct is_service<dclaw_interfaces::srv::GetPositions>
  : std::true_type
{
};

template<>
struct is_service_request<dclaw_interfaces::srv::GetPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dclaw_interfaces::srv::GetPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DCLAW_INTERFACES__SRV__DETAIL__GET_POSITIONS__TRAITS_HPP_
