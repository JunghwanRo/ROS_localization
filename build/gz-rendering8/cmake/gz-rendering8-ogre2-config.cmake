# - Config file for the gz-rendering8-ogre2 component
#
# This should only be invoked by gz-rendering8-config.cmake.
#
# To load this component into your project, use:
# find_package(gz-rendering8 COMPONENTS ogre2)
#
# This creates the following targets:
#
#   Component library target                - gz-rendering8::gz-rendering8-ogre2
#   Alternative target name                 - gz-rendering8::ogre2
#   Core library + all requested components - gz-rendering8::requested
#
# Use target_link_libraries() to link your library or executable to one of the
# above targets.
#
# We also provide the following variable for backwards compatibility, but use of
# this is discouraged:
#
#   gz-rendering8-ogre2_LIBRARY  - Component library (actually contains gz-rendering8::ogre2)
#
# We will also set gz-rendering8-ogre2_FOUND to indicate that the component was found.
#
################################################################################

# We explicitly set the desired cmake version to ensure that the policy settings
# of users or of toolchains do not result in the wrong behavior for our modules.
# Note that the call to find_package(~) will PUSH a new policy stack before
# taking on these version settings, and then that stack will POP after the
# find_package(~) has exited, so this will not affect the cmake policy settings
# of a caller.
cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

if(gz-rendering8-ogre2_CONFIG_INCLUDED)
  return()
endif()
set(gz-rendering8-ogre2_CONFIG_INCLUDED TRUE)

if(NOT gz-rendering8-ogre2_FIND_QUIETLY)
  message(STATUS "Looking for gz-rendering8-ogre2 -- found version 8.0.0~pre1")
endif()


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was gz-component-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# Get access to the find_dependency utility
include(CMakeFindDependencyMacro)

# Find gz-cmake, because we need its modules in order to find the rest of
# our dependencies.
find_dependency(gz-cmake3)

# Set the REQUIRED flag for the find_package(~) calls on this component's
# dependencies.
if(gz-rendering8-ogre2_FIND_REQUIRED)
  set(gz_package_required REQUIRED)
else()
  set(gz_package_required "")
endif()

# Set the QUIET flag for the find_package(~) calls on this component's
# dependencies.
if(gz-rendering8-ogre2_FIND_QUIETLY)
  set(gz_package_quiet QUIET)
else()
  set(gz_package_quiet "")
endif()

# --------------------------------
# Find the dependencies that are specific to this component (if nothing is
# below, then the component has no additional dependencies). We use
# find_package(~) instead of find_dependency(~) here so that we can support
# COMPONENT arguments.
#
# TODO: When we migrate to cmake-3.9+, change these to find_dependency(~),
#       because at that point the find_dependency(~) function will support
#       the COMPONENT argument.
if(NOT gz-rendering8-ogre2_FIND_QUIETLY)
  message(STATUS "Searching for dependencies of gz-rendering8-ogre2")
endif()
find_package(OpenGL ${gz_package_quiet} ${gz_package_required})
if(NOT gz-rendering8_CONFIG_INCLUDED)
  find_package(gz-rendering8 8.0.0 EXACT ${gz_package_quiet} ${gz_package_required})
endif()
# --------------------------------

if(NOT TARGET gz-rendering8::gz-rendering8-ogre2)
  include("${CMAKE_CURRENT_LIST_DIR}/gz-rendering8-ogre2-targets.cmake")

  # Create a simplified imported target name for the ogre2 library.
  # You can link to this target instead of the ogre2 library.
  add_library(gz-rendering8::ogre2 INTERFACE IMPORTED)
  set_target_properties(gz-rendering8::ogre2 PROPERTIES
    INTERFACE_LINK_LIBRARIES "gz-rendering8::gz-rendering8-ogre2")
  # Note: In a future version of cmake, we can replace this with an ALIAS target

endif()

# Create the "requested" target if it does not already exist
if(NOT TARGET gz-rendering8::requested)
  add_library(gz-rendering8::requested INTERFACE IMPORTED)
endif()

# Link the ogre2 library to the "requested" target
get_target_property(gz_requested_components gz-rendering8::requested INTERFACE_LINK_LIBRARIES)
if(NOT gz_requested_components)
  set_target_properties(gz-rendering8::requested PROPERTIES
    INTERFACE_LINK_LIBRARIES "gz-rendering8::gz-rendering8-ogre2")
else()
  set_target_properties(gz-rendering8::requested PROPERTIES
    INTERFACE_LINK_LIBRARIES "${gz_requested_components};gz-rendering8::gz-rendering8-ogre2")
endif()

set(gz-rendering8-ogre2_LIBRARY gz-rendering8::gz-rendering8-ogre2)

# This macro is used by gz-cmake to automatically configure the pkgconfig
# files for Gazebo projects.
gz_pkg_config_entry(gz-rendering8-ogre2 "gz-rendering8-ogre2")
