// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
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
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.msg._egm_setup_settings.EGMSetupSettings", full_classname_dest, 64) == 0);
  }
  abb_rapid_sm_addin_msgs__msg__EGMSetupSettings * ros_message = _ros_message;
  {  // use_filtering
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_filtering");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_filtering = (Py_True == field);
    Py_DECREF(field);
  }
  {  // comm_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "comm_timeout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->comm_timeout = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EGMSetupSettings */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.msg._egm_setup_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EGMSetupSettings");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__msg__EGMSetupSettings * ros_message = (abb_rapid_sm_addin_msgs__msg__EGMSetupSettings *)raw_ros_message;
  {  // use_filtering
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_filtering ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_filtering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comm_timeout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->comm_timeout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comm_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
