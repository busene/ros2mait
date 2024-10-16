// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/JointTarget.idl
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
#include "abb_rapid_msgs/msg/detail/joint_target__struct.h"
#include "abb_rapid_msgs/msg/detail/joint_target__functions.h"

bool abb_rapid_msgs__msg__rob_joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__rob_joint__convert_to_py(void * raw_ros_message);
bool abb_rapid_msgs__msg__ext_joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__ext_joint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__joint_target__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("abb_rapid_msgs.msg._joint_target.JointTarget", full_classname_dest, 44) == 0);
  }
  abb_rapid_msgs__msg__JointTarget * ros_message = _ros_message;
  {  // robax
    PyObject * field = PyObject_GetAttrString(_pymsg, "robax");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__rob_joint__convert_from_py(field, &ros_message->robax)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // extax
    PyObject * field = PyObject_GetAttrString(_pymsg, "extax");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__ext_joint__convert_from_py(field, &ros_message->extax)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__joint_target__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointTarget */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._joint_target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointTarget");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__JointTarget * ros_message = (abb_rapid_msgs__msg__JointTarget *)raw_ros_message;
  {  // robax
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__rob_joint__convert_to_py(&ros_message->robax);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extax
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__ext_joint__convert_to_py(&ros_message->extax);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "extax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
