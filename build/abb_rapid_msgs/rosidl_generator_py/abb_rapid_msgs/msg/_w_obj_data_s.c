// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/WObjData.idl
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
#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.h"
#include "abb_rapid_msgs/msg/detail/w_obj_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool abb_rapid_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool abb_rapid_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__w_obj_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("abb_rapid_msgs.msg._w_obj_data.WObjData", full_classname_dest, 39) == 0);
  }
  abb_rapid_msgs__msg__WObjData * ros_message = _ros_message;
  {  // robhold
    PyObject * field = PyObject_GetAttrString(_pymsg, "robhold");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->robhold = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ufprog
    PyObject * field = PyObject_GetAttrString(_pymsg, "ufprog");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ufprog = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ufmec
    PyObject * field = PyObject_GetAttrString(_pymsg, "ufmec");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ufmec, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // uframe
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pose__convert_from_py(field, &ros_message->uframe)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // oframe
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pose__convert_from_py(field, &ros_message->oframe)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__w_obj_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WObjData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._w_obj_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WObjData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__WObjData * ros_message = (abb_rapid_msgs__msg__WObjData *)raw_ros_message;
  {  // robhold
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->robhold ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robhold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ufprog
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ufprog ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ufprog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ufmec
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ufmec.data,
      strlen(ros_message->ufmec.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ufmec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pose__convert_to_py(&ros_message->uframe);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pose__convert_to_py(&ros_message->oframe);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
