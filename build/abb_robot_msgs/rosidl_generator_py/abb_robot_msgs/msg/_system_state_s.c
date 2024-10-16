// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abb_robot_msgs:msg/SystemState.idl
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
#include "abb_robot_msgs/msg/detail/system_state__struct.h"
#include "abb_robot_msgs/msg/detail/system_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__functions.h"
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool abb_robot_msgs__msg__rapid_task_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_robot_msgs__msg__rapid_task_state__convert_to_py(void * raw_ros_message);
bool abb_robot_msgs__msg__mechanical_unit_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * abb_robot_msgs__msg__mechanical_unit_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool abb_robot_msgs__msg__system_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("abb_robot_msgs.msg._system_state.SystemState", full_classname_dest, 44) == 0);
  }
  abb_robot_msgs__msg__SystemState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motors_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "motors_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motors_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rapid_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "rapid_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rapid_running = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rapid_tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "rapid_tasks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rapid_tasks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(&(ros_message->rapid_tasks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create abb_robot_msgs__msg__RAPIDTaskState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    abb_robot_msgs__msg__RAPIDTaskState * dest = ros_message->rapid_tasks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!abb_robot_msgs__msg__rapid_task_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // mechanical_units
    PyObject * field = PyObject_GetAttrString(_pymsg, "mechanical_units");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'mechanical_units'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!abb_robot_msgs__msg__MechanicalUnitState__Sequence__init(&(ros_message->mechanical_units), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create abb_robot_msgs__msg__MechanicalUnitState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    abb_robot_msgs__msg__MechanicalUnitState * dest = ros_message->mechanical_units.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!abb_robot_msgs__msg__mechanical_unit_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abb_robot_msgs__msg__system_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abb_robot_msgs.msg._system_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abb_robot_msgs__msg__SystemState * ros_message = (abb_robot_msgs__msg__SystemState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motors_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motors_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motors_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rapid_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rapid_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rapid_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rapid_tasks
    PyObject * field = NULL;
    size_t size = ros_message->rapid_tasks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    abb_robot_msgs__msg__RAPIDTaskState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->rapid_tasks.data[i]);
      PyObject * pyitem = abb_robot_msgs__msg__rapid_task_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "rapid_tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mechanical_units
    PyObject * field = NULL;
    size_t size = ros_message->mechanical_units.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    abb_robot_msgs__msg__MechanicalUnitState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->mechanical_units.data[i]);
      PyObject * pyitem = abb_robot_msgs__msg__mechanical_unit_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "mechanical_units", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
