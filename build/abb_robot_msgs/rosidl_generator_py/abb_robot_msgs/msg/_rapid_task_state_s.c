// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.h"
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_robot_msgs__msg__rapid_task_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("abb_robot_msgs.msg._rapid_task_state.RAPIDTaskState", full_classname_dest, 51) == 0);
  }
  abb_robot_msgs__msg__RAPIDTaskState * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // activated
    PyObject * field = PyObject_GetAttrString(_pymsg, "activated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->activated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // execution_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "execution_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->execution_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motion_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_task");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_task = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_robot_msgs__msg__rapid_task_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RAPIDTaskState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_robot_msgs.msg._rapid_task_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RAPIDTaskState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_robot_msgs__msg__RAPIDTaskState * ros_message = (abb_robot_msgs__msg__RAPIDTaskState *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->activated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "activated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // execution_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->execution_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "execution_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_task
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_task ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
