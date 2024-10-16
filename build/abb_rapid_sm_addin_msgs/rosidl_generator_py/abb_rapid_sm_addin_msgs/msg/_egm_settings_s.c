// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
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
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__functions.h"

bool abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_to_py(void * raw_ros_message);
bool abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_to_py(void * raw_ros_message);
bool abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_to_py(void * raw_ros_message);
bool abb_rapid_sm_addin_msgs__msg__egm_stop_settings__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_sm_addin_msgs__msg__egm_stop_settings__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__msg__egm_settings__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.msg._egm_settings.EGMSettings", full_classname_dest, 53) == 0);
  }
  abb_rapid_sm_addin_msgs__msg__EGMSettings * ros_message = _ros_message;
  {  // allow_egm_motions
    PyObject * field = PyObject_GetAttrString(_pymsg, "allow_egm_motions");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->allow_egm_motions = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_presync
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_presync");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_presync = (Py_True == field);
    Py_DECREF(field);
  }
  {  // setup_uc
    PyObject * field = PyObject_GetAttrString(_pymsg, "setup_uc");
    if (!field) {
      return false;
    }
    if (!abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_from_py(field, &ros_message->setup_uc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // activate
    PyObject * field = PyObject_GetAttrString(_pymsg, "activate");
    if (!field) {
      return false;
    }
    if (!abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_from_py(field, &ros_message->activate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // run
    PyObject * field = PyObject_GetAttrString(_pymsg, "run");
    if (!field) {
      return false;
    }
    if (!abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_from_py(field, &ros_message->run)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop");
    if (!field) {
      return false;
    }
    if (!abb_rapid_sm_addin_msgs__msg__egm_stop_settings__convert_from_py(field, &ros_message->stop)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__msg__egm_settings__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EGMSettings */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.msg._egm_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EGMSettings");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__msg__EGMSettings * ros_message = (abb_rapid_sm_addin_msgs__msg__EGMSettings *)raw_ros_message;
  {  // allow_egm_motions
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->allow_egm_motions ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allow_egm_motions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_presync
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_presync ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_presync", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setup_uc
    PyObject * field = NULL;
    field = abb_rapid_sm_addin_msgs__msg__egm_setup_settings__convert_to_py(&ros_message->setup_uc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "setup_uc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activate
    PyObject * field = NULL;
    field = abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_to_py(&ros_message->activate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "activate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run
    PyObject * field = NULL;
    field = abb_rapid_sm_addin_msgs__msg__egm_run_settings__convert_to_py(&ros_message->run);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "run", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop
    PyObject * field = NULL;
    field = abb_rapid_sm_addin_msgs__msg__egm_stop_settings__convert_to_py(&ros_message->stop);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
