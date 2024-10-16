// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
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
#include "abb_rapid_msgs/msg/detail/ext_joint__struct.h"
#include "abb_rapid_msgs/msg/detail/ext_joint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__ext_joint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("abb_rapid_msgs.msg._ext_joint.ExtJoint", full_classname_dest, 38) == 0);
  }
  abb_rapid_msgs__msg__ExtJoint * ros_message = _ros_message;
  {  // eax_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eax_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eax_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_c = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eax_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_d = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eax_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eax_f
    PyObject * field = PyObject_GetAttrString(_pymsg, "eax_f");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eax_f = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__ext_joint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExtJoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._ext_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExtJoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__ExtJoint * ros_message = (abb_rapid_msgs__msg__ExtJoint *)raw_ros_message;
  {  // eax_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eax_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eax_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eax_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eax_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eax_f
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eax_f);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eax_f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
