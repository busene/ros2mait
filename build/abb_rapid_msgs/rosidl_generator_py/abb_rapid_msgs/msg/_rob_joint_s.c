// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
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
#include "abb_rapid_msgs/msg/detail/rob_joint__struct.h"
#include "abb_rapid_msgs/msg/detail/rob_joint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__rob_joint__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("abb_rapid_msgs.msg._rob_joint.RobJoint", full_classname_dest, 38) == 0);
  }
  abb_rapid_msgs__msg__RobJoint * ros_message = _ros_message;
  {  // rax_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rax_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rax_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rax_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rax_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rax_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "rax_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rax_6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__rob_joint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobJoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._rob_joint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobJoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__RobJoint * ros_message = (abb_rapid_msgs__msg__RobJoint *)raw_ros_message;
  {  // rax_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rax_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rax_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rax_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rax_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rax_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rax_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rax_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
