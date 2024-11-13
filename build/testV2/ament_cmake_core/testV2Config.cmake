# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_testV2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED testV2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(testV2_FOUND FALSE)
  elseif(NOT testV2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(testV2_FOUND FALSE)
  endif()
  return()
endif()
set(_testV2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT testV2_FIND_QUIETLY)
  message(STATUS "Found testV2: 0.0.0 (${testV2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'testV2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${testV2_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(testV2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${testV2_DIR}/${_extra}")
endforeach()
