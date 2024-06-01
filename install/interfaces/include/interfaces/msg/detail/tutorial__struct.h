// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Tutorial.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_H_
#define INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Tutorial in the package interfaces.
typedef struct interfaces__msg__Tutorial
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  uint8_t age;
} interfaces__msg__Tutorial;

// Struct for a sequence of interfaces__msg__Tutorial.
typedef struct interfaces__msg__Tutorial__Sequence
{
  interfaces__msg__Tutorial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Tutorial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__TUTORIAL__STRUCT_H_
