// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_msgs:msg/LoadData.idl
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
#include "abb_rapid_msgs/msg/detail/load_data__struct.h"
#include "abb_rapid_msgs/msg/detail/load_data__functions.h"

bool abb_rapid_msgs__msg__pos__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__pos__convert_to_py(void * raw_ros_message);
bool abb_rapid_msgs__msg__orient__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_msgs__msg__orient__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_msgs__msg__load_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("abb_rapid_msgs.msg._load_data.LoadData", full_classname_dest, 38) == 0);
  }
  abb_rapid_msgs__msg__LoadData * ros_message = _ros_message;
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "cog");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pos__convert_from_py(field, &ros_message->cog)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aom
    PyObject * field = PyObject_GetAttrString(_pymsg, "aom");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__orient__convert_from_py(field, &ros_message->aom)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ix
    PyObject * field = PyObject_GetAttrString(_pymsg, "ix");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ix = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iy
    PyObject * field = PyObject_GetAttrString(_pymsg, "iy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->iy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iz
    PyObject * field = PyObject_GetAttrString(_pymsg, "iz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->iz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_msgs__msg__load_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LoadData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_msgs.msg._load_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoadData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_msgs__msg__LoadData * ros_message = (abb_rapid_msgs__msg__LoadData *)raw_ros_message;
  {  // mass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cog
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pos__convert_to_py(&ros_message->cog);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aom
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__orient__convert_to_py(&ros_message->aom);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ix
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ix);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->iy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->iz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
