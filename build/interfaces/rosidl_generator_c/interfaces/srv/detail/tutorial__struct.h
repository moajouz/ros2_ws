// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__TUTORIAL__STRUCT_H_
#define INTERFACES__SRV__DETAIL__TUTORIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tutorial in the package interfaces.
typedef struct interfaces__srv__Tutorial_Request
{
  uint64_t a;
  uint64_t b;
} interfaces__srv__Tutorial_Request;

// Struct for a sequence of interfaces__srv__Tutorial_Request.
typedef struct interfaces__srv__Tutorial_Request__Sequence
{
  interfaces__srv__Tutorial_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Tutorial_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Tutorial in the package interfaces.
typedef struct interfaces__srv__Tutorial_Response
{
  double sum;
} interfaces__srv__Tutorial_Response;

// Struct for a sequence of interfaces__srv__Tutorial_Response.
typedef struct interfaces__srv__Tutorial_Response__Sequence
{
  interfaces__srv__Tutorial_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Tutorial_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__TUTORIAL__STRUCT_H_
