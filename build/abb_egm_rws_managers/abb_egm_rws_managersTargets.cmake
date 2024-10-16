# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget abb_egm_rws_managers::abb_egm_rws_managers)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target abb_egm_rws_managers::abb_egm_rws_managers
add_library(abb_egm_rws_managers::abb_egm_rws_managers SHARED IMPORTED)

set_target_properties(abb_egm_rws_managers::abb_egm_rws_managers PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/ros2ws/build/abb_egm_rws_managers;/home/ubuntu/ros2ws/src/ABBDriver/abb_egm_rws_managers/include"
  INTERFACE_LINK_LIBRARIES "abb_libegm::abb_libegm;abb_librws::abb_librws;protobuf::libprotobuf;Threads::Threads"
)

# Import target "abb_egm_rws_managers::abb_egm_rws_managers" for configuration "RelWithDebInfo"
set_property(TARGET abb_egm_rws_managers::abb_egm_rws_managers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(abb_egm_rws_managers::abb_egm_rws_managers PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "/home/ubuntu/ros2ws/build/abb_egm_rws_managers/libabb_egm_rws_managers.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libabb_egm_rws_managers.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
