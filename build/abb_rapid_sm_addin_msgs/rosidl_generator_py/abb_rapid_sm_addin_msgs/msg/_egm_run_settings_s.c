// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
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
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool abb_rapid_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * abb_rapid_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.msg._egm_run_settings.EGMRunSettings", full_classname_dest, 60) == 0);
  }
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings * ros_message = _ros_message;
  {  // cond_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "cond_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cond_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ramp_in_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ramp_in_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ramp_in_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pose__convert_from_py(field, &ros_message->offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_corr_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_corr_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_corr_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EGMRunSettings */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.msg._egm_run_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EGMRunSettings");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings * ros_message = (abb_rapid_sm_addin_msgs__msg__EGMRunSettings *)raw_ros_message;
  {  // cond_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cond_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cond_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ramp_in_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ramp_in_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ramp_in_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pose__convert_to_py(&ros_message->offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_corr_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_corr_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_corr_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
