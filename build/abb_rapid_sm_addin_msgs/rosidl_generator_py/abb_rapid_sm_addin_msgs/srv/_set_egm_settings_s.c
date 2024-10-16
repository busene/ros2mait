// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_rapid_sm_addin_msgs:srv/SetEGMSettings.idl
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
#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool abb_rapid_sm_addin_msgs__msg__egm_settings__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_rapid_sm_addin_msgs__msg__egm_settings__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__srv__set_egm_settings__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.srv._set_egm_settings.SetEGMSettings_Request", full_classname_dest, 68) == 0);
  }
  abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request * ros_message = _ros_message;
  {  // task
    PyObject * field = PyObject_GetAttrString(_pymsg, "task");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // settings
    PyObject * field = PyObject_GetAttrString(_pymsg, "settings");
    if (!field) {
      return false;
    }
    if (!abb_rapid_sm_addin_msgs__msg__egm_settings__convert_from_py(field, &ros_message->settings)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__srv__set_egm_settings__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetEGMSettings_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.srv._set_egm_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetEGMSettings_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request * ros_message = (abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Request *)raw_ros_message;
  {  // task
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task.data,
      strlen(ros_message->task.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // settings
    PyObject * field = NULL;
    field = abb_rapid_sm_addin_msgs__msg__egm_settings__convert_to_py(&ros_message->settings);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "settings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__struct.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abb_rapid_sm_addin_msgs__srv__set_egm_settings__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("abb_rapid_sm_addin_msgs.srv._set_egm_settings.SetEGMSettings_Response", full_classname_dest, 69) == 0);
  }
  abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response * ros_message = _ros_message;
  {  // result_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_rapid_sm_addin_msgs__srv__set_egm_settings__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetEGMSettings_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_rapid_sm_addin_msgs.srv._set_egm_settings");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetEGMSettings_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response * ros_message = (abb_rapid_sm_addin_msgs__srv__SetEGMSettings_Response *)raw_ros_message;
  {  // result_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}