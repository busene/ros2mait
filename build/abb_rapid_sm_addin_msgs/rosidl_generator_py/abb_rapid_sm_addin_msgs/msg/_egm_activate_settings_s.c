// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
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
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool abb_rapid_msgs__msg__tool_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * abb_rapid_msgs__msg__tool_data__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool abb_rapid_msgs__msg__w_obj_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * abb_rapid_msgs__msg__w_obj_data__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool abb_rapid_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * abb_rapid_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool abb_rapid_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * abb_rapid_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.msg._egm_activate_settings.EGMActivateSettings", full_classname_dest, 70) == 0);
  }
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * ros_message = _ros_message;
  {  // tool
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__tool_data__convert_from_py(field, &ros_message->tool)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wobj
    PyObject * field = PyObject_GetAttrString(_pymsg, "wobj");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__w_obj_data__convert_from_py(field, &ros_message->wobj)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // correction_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "correction_frame");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pose__convert_from_py(field, &ros_message->correction_frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sensor_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_frame");
    if (!field) {
      return false;
    }
    if (!abb_rapid_msgs__msg__pose__convert_from_py(field, &ros_message->sensor_frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cond_min_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "cond_min_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cond_min_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lp_filter
    PyObject * field = PyObject_GetAttrString(_pymsg, "lp_filter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lp_filter = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sample_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sample_rate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_speed_deviation
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed_deviation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_speed_deviation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__msg__egm_activate_settings__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EGMActivateSettings */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.msg._egm_activate_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EGMActivateSettings");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * ros_message = (abb_rapid_sm_addin_msgs__msg__EGMActivateSettings *)raw_ros_message;
  {  // tool
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__tool_data__convert_to_py(&ros_message->tool);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wobj
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__w_obj_data__convert_to_py(&ros_message->wobj);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wobj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // correction_frame
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pose__convert_to_py(&ros_message->correction_frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "correction_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_frame
    PyObject * field = NULL;
    field = abb_rapid_msgs__msg__pose__convert_to_py(&ros_message->sensor_frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cond_min_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cond_min_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cond_min_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lp_filter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lp_filter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lp_filter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sample_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_speed_deviation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_speed_deviation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed_deviation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
