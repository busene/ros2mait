// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2srrc_data:msg/Robpose.idl
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
#include "ros2srrc_data/msg/detail/robpose__struct.h"
#include "ros2srrc_data/msg/detail/robpose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2srrc_data__msg__robpose__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("ros2srrc_data.msg._robpose.Robpose", full_classname_dest, 34) == 0);
  }
  ros2srrc_data__msg__Robpose * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qx
    PyObject * field = PyObject_GetAttrString(_pymsg, "qx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qy
    PyObject * field = PyObject_GetAttrString(_pymsg, "qy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qz
    PyObject * field = PyObject_GetAttrString(_pymsg, "qz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qw
    PyObject * field = PyObject_GetAttrString(_pymsg, "qw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2srrc_data__msg__robpose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Robpose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2srrc_data.msg._robpose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Robpose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2srrc_data__msg__Robpose * ros_message = (ros2srrc_data__msg__Robpose *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
