# - Config file for the gz-sim8-user-commands-system component
#
# This should only be invoked by gz-sim8-config.cmake.
#
# To load this component into your project, use:
# find_package(gz-sim8 COMPONENTS user-commands-system)
#
# This creates the following targets:
#
#   Component library target                - gz-sim8::gz-sim8-user-commands-system
#   Alternative target name                 - gz-sim8::user-commands-system
#   Core library + all requested components - gz-sim8::requested
#
# Use target_link_libraries() to link your library or executable to one of the
# above targets.
#
# We also provide the following variable for backwards compatibility, but use of
# this is discouraged:
#
#   gz-sim8-user-commands-system_LIBRARY  - Component library (actually contains gz-sim8::user-commands-system)
#
# We will also set gz-sim8-user-commands-system_FOUND to indicate that the component was found.
#
################################################################################

# We explicitly set the desired cmake version to ensure that the policy settings
# of users or of toolchains do not result in the wrong behavior for our modules.
# Note that the call to find_package(~) will PUSH a new policy stack before
# taking on these version settings, and then that stack will POP after the
# find_package(~) has exited, so this will not affect the cmake policy settings
# of a caller.
cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

if(gz-sim8-user-commands-system_CONFIG_INCLUDED)
  return()
endif()
set(gz-sim8-user-commands-system_CONFIG_INCLUDED TRUE)

if(NOT gz-sim8-user-commands-system_FIND_QUIETLY)
  message(STATUS "Looking for gz-sim8-user-commands-system -- found version 8.0.0~pre1")
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
if(gz-sim8-user-commands-system_FIND_REQUIRED)
  set(gz_package_required REQUIRED)
else()
  set(gz_package_required "")
endif()

# Set the QUIET flag for the find_package(~) calls on this component's
# dependencies.
if(gz-sim8-user-commands-system_FIND_QUIETLY)
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
if(NOT gz-sim8-user-commands-system_FIND_QUIETLY)
  message(STATUS "Searching for dependencies of gz-sim8-user-commands-system")
endif()
if(NOT gz-sim8_CONFIG_INCLUDED)
  find_package(gz-sim8 8.0.0 EXACT ${gz_package_quiet} ${gz_package_required})
endif()
# --------------------------------

if(NOT TARGET gz-sim8::gz-sim8-user-commands-system)
  include("${CMAKE_CURRENT_LIST_DIR}/gz-sim8-user-commands-system-targets.cmake")

  # Create a simplified imported target name for the user-commands-system library.
  # You can link to this target instead of the user-commands-system library.
  add_library(gz-sim8::user-commands-system INTERFACE IMPORTED)
  set_target_properties(gz-sim8::user-commands-system PROPERTIES
    INTERFACE_LINK_LIBRARIES "gz-sim8::gz-sim8-user-commands-system")
  # Note: In a future version of cmake, we can replace this with an ALIAS target

endif()

# Create the "requested" target if it does not already exist
if(NOT TARGET gz-sim8::requested)
  add_library(gz-sim8::requested INTERFACE IMPORTED)
endif()

# Link the user-commands-system library to the "requested" target
get_target_property(gz_requested_components gz-sim8::requested INTERFACE_LINK_LIBRARIES)
if(NOT gz_requested_components)
  set_target_properties(gz-sim8::requested PROPERTIES
    INTERFACE_LINK_LIBRARIES "gz-sim8::gz-sim8-user-commands-system")
else()
  set_target_properties(gz-sim8::requested PROPERTIES
    INTERFACE_LINK_LIBRARIES "${gz_requested_components};gz-sim8::gz-sim8-user-commands-system")
endif()

set(gz-sim8-user-commands-system_LIBRARY gz-sim8::gz-sim8-user-commands-system)

# This macro is used by gz-cmake to automatically configure the pkgconfig
# files for Gazebo projects.
gz_pkg_config_entry(gz-sim8-user-commands-system "gz-sim8-user-commands-system")
