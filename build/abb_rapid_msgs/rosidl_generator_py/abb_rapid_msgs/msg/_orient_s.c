// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/Orient.idl
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
#include "abb_rapid_msgs/msg/detail/orient__struct.h"
#include "abb_rapid_msgs/msg/detail/orient__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__orient__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("abb_rapid_msgs.msg._orient.Orient", full_classname_dest, 33) == 0);
  }
  abb_rapid_msgs__msg__Orient * ros_message = _ros_message;
  {  // q1
    PyObject * field = PyObject_GetAttrString(_pymsg, "q1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q2
    PyObject * field = PyObject_GetAttrString(_pymsg, "q2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q3
    PyObject * field = PyObject_GetAttrString(_pymsg, "q3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q4
    PyObject * field = PyObject_GetAttrString(_pymsg, "q4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__orient__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Orient */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._orient");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Orient");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__Orient * ros_message = (abb_rapid_msgs__msg__Orient *)raw_ros_message;
  {  // q1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
