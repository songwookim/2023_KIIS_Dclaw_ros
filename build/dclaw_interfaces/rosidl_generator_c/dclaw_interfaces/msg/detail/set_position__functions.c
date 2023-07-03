// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dclaw_interfaces:msg/SetPosition.idl
// generated code does not contain a copyright notice
#include "dclaw_interfaces/msg/detail/set_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dclaw_interfaces__msg__SetPosition__init(dclaw_interfaces__msg__SetPosition * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  return true;
}

void
dclaw_interfaces__msg__SetPosition__fini(dclaw_interfaces__msg__SetPosition * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
}

bool
dclaw_interfaces__msg__SetPosition__are_equal(const dclaw_interfaces__msg__SetPosition * lhs, const dclaw_interfaces__msg__SetPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
dclaw_interfaces__msg__SetPosition__copy(
  const dclaw_interfaces__msg__SetPosition * input,
  dclaw_interfaces__msg__SetPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  output->position = input->position;
  return true;
}

dclaw_interfaces__msg__SetPosition *
dclaw_interfaces__msg__SetPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__msg__SetPosition * msg = (dclaw_interfaces__msg__SetPosition *)allocator.allocate(sizeof(dclaw_interfaces__msg__SetPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dclaw_interfaces__msg__SetPosition));
  bool success = dclaw_interfaces__msg__SetPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dclaw_interfaces__msg__SetPosition__destroy(dclaw_interfaces__msg__SetPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dclaw_interfaces__msg__SetPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dclaw_interfaces__msg__SetPosition__Sequence__init(dclaw_interfaces__msg__SetPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__msg__SetPosition * data = NULL;

  if (size) {
    data = (dclaw_interfaces__msg__SetPosition *)allocator.zero_allocate(size, sizeof(dclaw_interfaces__msg__SetPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dclaw_interfaces__msg__SetPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dclaw_interfaces__msg__SetPosition__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dclaw_interfaces__msg__SetPosition__Sequence__fini(dclaw_interfaces__msg__SetPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dclaw_interfaces__msg__SetPosition__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dclaw_interfaces__msg__SetPosition__Sequence *
dclaw_interfaces__msg__SetPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__msg__SetPosition__Sequence * array = (dclaw_interfaces__msg__SetPosition__Sequence *)allocator.allocate(sizeof(dclaw_interfaces__msg__SetPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dclaw_interfaces__msg__SetPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dclaw_interfaces__msg__SetPosition__Sequence__destroy(dclaw_interfaces__msg__SetPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dclaw_interfaces__msg__SetPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dclaw_interfaces__msg__SetPosition__Sequence__are_equal(const dclaw_interfaces__msg__SetPosition__Sequence * lhs, const dclaw_interfaces__msg__SetPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dclaw_interfaces__msg__SetPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dclaw_interfaces__msg__SetPosition__Sequence__copy(
  const dclaw_interfaces__msg__SetPosition__Sequence * input,
  dclaw_interfaces__msg__SetPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dclaw_interfaces__msg__SetPosition);
    dclaw_interfaces__msg__SetPosition * data =
      (dclaw_interfaces__msg__SetPosition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dclaw_interfaces__msg__SetPosition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dclaw_interfaces__msg__SetPosition__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dclaw_interfaces__msg__SetPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
