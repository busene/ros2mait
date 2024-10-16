// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2srrc_data:msg/Action.idl
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
#include "ros2srrc_data/msg/detail/action__struct.h"
#include "ros2srrc_data/msg/detail/action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool ros2srrc_data__msg__joints__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__joints__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__joint__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__xyz__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__xyz__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__xyzypr__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__xyzypr__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__xyz__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__xyz__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__ypr__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__ypr__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__ypr__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__ypr__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__xyzypr__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__xyzypr__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__linkattacher__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__linkattacher__convert_to_py(void * raw_ros_message);
bool ros2srrc_data__msg__linkattacher__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros2srrc_data__msg__linkattacher__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros2srrc_data__msg__action__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("ros2srrc_data.msg._action.Action", full_classname_dest, 32) == 0);
  }
  ros2srrc_data__msg__Action * ros_message = _ros_message;
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->action, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // movej
    PyObject * field = PyObject_GetAttrString(_pymsg, "movej");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__joints__convert_from_py(field, &ros_message->movej)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mover
    PyObject * field = PyObject_GetAttrString(_pymsg, "mover");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__joint__convert_from_py(field, &ros_message->mover)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // movel
    PyObject * field = PyObject_GetAttrString(_pymsg, "movel");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__xyz__convert_from_py(field, &ros_message->movel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // movexyzw
    PyObject * field = PyObject_GetAttrString(_pymsg, "movexyzw");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__xyzypr__convert_from_py(field, &ros_message->movexyzw)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // movexyz
    PyObject * field = PyObject_GetAttrString(_pymsg, "movexyz");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__xyz__convert_from_py(field, &ros_message->movexyz)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moveypr
    PyObject * field = PyObject_GetAttrString(_pymsg, "moveypr");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__ypr__convert_from_py(field, &ros_message->moveypr)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moverot
    PyObject * field = PyObject_GetAttrString(_pymsg, "moverot");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__ypr__convert_from_py(field, &ros_message->moverot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moverp
    PyObject * field = PyObject_GetAttrString(_pymsg, "moverp");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__xyzypr__convert_from_py(field, &ros_message->moverp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moveg
    PyObject * field = PyObject_GetAttrString(_pymsg, "moveg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->moveg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // attach
    PyObject * field = PyObject_GetAttrString(_pymsg, "attach");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__linkattacher__convert_from_py(field, &ros_message->attach)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // detach
    PyObject * field = PyObject_GetAttrString(_pymsg, "detach");
    if (!field) {
      return false;
    }
    if (!ros2srrc_data__msg__linkattacher__convert_from_py(field, &ros_message->detach)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2srrc_data__msg__action__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Action */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2srrc_data.msg._action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Action");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2srrc_data__msg__Action * ros_message = (ros2srrc_data__msg__Action *)raw_ros_message;
  {  // action
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->action.data,
      strlen(ros_message->action.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movej
    PyObject * field = NULL;
    field = ros2srrc_data__msg__joints__convert_to_py(&ros_message->movej);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "movej", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mover
    PyObject * field = NULL;
    field = ros2srrc_data__msg__joint__convert_to_py(&ros_message->mover);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movel
    PyObject * field = NULL;
    field = ros2srrc_data__msg__xyz__convert_to_py(&ros_message->movel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "movel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movexyzw
    PyObject * field = NULL;
    field = ros2srrc_data__msg__xyzypr__convert_to_py(&ros_message->movexyzw);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "movexyzw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movexyz
    PyObject * field = NULL;
    field = ros2srrc_data__msg__xyz__convert_to_py(&ros_message->movexyz);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "movexyz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moveypr
    PyObject * field = NULL;
    field = ros2srrc_data__msg__ypr__convert_to_py(&ros_message->moveypr);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "moveypr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moverot
    PyObject * field = NULL;
    field = ros2srrc_data__msg__ypr__convert_to_py(&ros_message->moverot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "moverot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moverp
    PyObject * field = NULL;
    field = ros2srrc_data__msg__xyzypr__convert_to_py(&ros_message->moverp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "moverp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moveg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->moveg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moveg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attach
    PyObject * field = NULL;
    field = ros2srrc_data__msg__linkattacher__convert_to_py(&ros_message->attach);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "attach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detach
    PyObject * field = NULL;
    field = ros2srrc_data__msg__linkattacher__convert_to_py(&ros_message->detach);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "detach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
