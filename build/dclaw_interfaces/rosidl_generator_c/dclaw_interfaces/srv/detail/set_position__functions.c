// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dclaw_interfaces:srv/SetPosition.idl
// generated code does not contain a copyright notice
#include "dclaw_interfaces/srv/detail/set_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dclaw_interfaces__srv__SetPosition_Request__init(dclaw_interfaces__srv__SetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  return true;
}

void
dclaw_interfaces__srv__SetPosition_Request__fini(dclaw_interfaces__srv__SetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
}

bool
dclaw_interfaces__srv__SetPosition_Request__are_equal(const dclaw_interfaces__srv__SetPosition_Request * lhs, const dclaw_interfaces__srv__SetPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
dclaw_interfaces__srv__SetPosition_Request__copy(
  const dclaw_interfaces__srv__SetPosition_Request * input,
  dclaw_interfaces__srv__SetPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

dclaw_interfaces__srv__SetPosition_Request *
dclaw_interfaces__srv__SetPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Request * msg = (dclaw_interfaces__srv__SetPosition_Request *)allocator.allocate(sizeof(dclaw_interfaces__srv__SetPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dclaw_interfaces__srv__SetPosition_Request));
  bool success = dclaw_interfaces__srv__SetPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dclaw_interfaces__srv__SetPosition_Request__destroy(dclaw_interfaces__srv__SetPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dclaw_interfaces__srv__SetPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dclaw_interfaces__srv__SetPosition_Request__Sequence__init(dclaw_interfaces__srv__SetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Request * data = NULL;

  if (size) {
    data = (dclaw_interfaces__srv__SetPosition_Request *)allocator.zero_allocate(size, sizeof(dclaw_interfaces__srv__SetPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dclaw_interfaces__srv__SetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dclaw_interfaces__srv__SetPosition_Request__fini(&data[i - 1]);
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
dclaw_interfaces__srv__SetPosition_Request__Sequence__fini(dclaw_interfaces__srv__SetPosition_Request__Sequence * array)
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
      dclaw_interfaces__srv__SetPosition_Request__fini(&array->data[i]);
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

dclaw_interfaces__srv__SetPosition_Request__Sequence *
dclaw_interfaces__srv__SetPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Request__Sequence * array = (dclaw_interfaces__srv__SetPosition_Request__Sequence *)allocator.allocate(sizeof(dclaw_interfaces__srv__SetPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dclaw_interfaces__srv__SetPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dclaw_interfaces__srv__SetPosition_Request__Sequence__destroy(dclaw_interfaces__srv__SetPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dclaw_interfaces__srv__SetPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dclaw_interfaces__srv__SetPosition_Request__Sequence__are_equal(const dclaw_interfaces__srv__SetPosition_Request__Sequence * lhs, const dclaw_interfaces__srv__SetPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dclaw_interfaces__srv__SetPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dclaw_interfaces__srv__SetPosition_Request__Sequence__copy(
  const dclaw_interfaces__srv__SetPosition_Request__Sequence * input,
  dclaw_interfaces__srv__SetPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dclaw_interfaces__srv__SetPosition_Request);
    dclaw_interfaces__srv__SetPosition_Request * data =
      (dclaw_interfaces__srv__SetPosition_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dclaw_interfaces__srv__SetPosition_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dclaw_interfaces__srv__SetPosition_Request__fini(&data[i]);
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
    if (!dclaw_interfaces__srv__SetPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dclaw_interfaces__srv__SetPosition_Response__init(dclaw_interfaces__srv__SetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position
  return true;
}

void
dclaw_interfaces__srv__SetPosition_Response__fini(dclaw_interfaces__srv__SetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // position
}

bool
dclaw_interfaces__srv__SetPosition_Response__are_equal(const dclaw_interfaces__srv__SetPosition_Response * lhs, const dclaw_interfaces__srv__SetPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
dclaw_interfaces__srv__SetPosition_Response__copy(
  const dclaw_interfaces__srv__SetPosition_Response * input,
  dclaw_interfaces__srv__SetPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  return true;
}

dclaw_interfaces__srv__SetPosition_Response *
dclaw_interfaces__srv__SetPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Response * msg = (dclaw_interfaces__srv__SetPosition_Response *)allocator.allocate(sizeof(dclaw_interfaces__srv__SetPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dclaw_interfaces__srv__SetPosition_Response));
  bool success = dclaw_interfaces__srv__SetPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dclaw_interfaces__srv__SetPosition_Response__destroy(dclaw_interfaces__srv__SetPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dclaw_interfaces__srv__SetPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dclaw_interfaces__srv__SetPosition_Response__Sequence__init(dclaw_interfaces__srv__SetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Response * data = NULL;

  if (size) {
    data = (dclaw_interfaces__srv__SetPosition_Response *)allocator.zero_allocate(size, sizeof(dclaw_interfaces__srv__SetPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dclaw_interfaces__srv__SetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dclaw_interfaces__srv__SetPosition_Response__fini(&data[i - 1]);
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
dclaw_interfaces__srv__SetPosition_Response__Sequence__fini(dclaw_interfaces__srv__SetPosition_Response__Sequence * array)
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
      dclaw_interfaces__srv__SetPosition_Response__fini(&array->data[i]);
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

dclaw_interfaces__srv__SetPosition_Response__Sequence *
dclaw_interfaces__srv__SetPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dclaw_interfaces__srv__SetPosition_Response__Sequence * array = (dclaw_interfaces__srv__SetPosition_Response__Sequence *)allocator.allocate(sizeof(dclaw_interfaces__srv__SetPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dclaw_interfaces__srv__SetPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dclaw_interfaces__srv__SetPosition_Response__Sequence__destroy(dclaw_interfaces__srv__SetPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dclaw_interfaces__srv__SetPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dclaw_interfaces__srv__SetPosition_Response__Sequence__are_equal(const dclaw_interfaces__srv__SetPosition_Response__Sequence * lhs, const dclaw_interfaces__srv__SetPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dclaw_interfaces__srv__SetPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dclaw_interfaces__srv__SetPosition_Response__Sequence__copy(
  const dclaw_interfaces__srv__SetPosition_Response__Sequence * input,
  dclaw_interfaces__srv__SetPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dclaw_interfaces__srv__SetPosition_Response);
    dclaw_interfaces__srv__SetPosition_Response * data =
      (dclaw_interfaces__srv__SetPosition_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dclaw_interfaces__srv__SetPosition_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dclaw_interfaces__srv__SetPosition_Response__fini(&data[i]);
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
    if (!dclaw_interfaces__srv__SetPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
