#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gz-common5::gz-common5-profiler" for configuration "RelWithDebInfo"
set_property(TARGET gz-common5::gz-common5-profiler APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(gz-common5::gz-common5-profiler PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libgz-common5-profiler.so.5.3.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libgz-common5-profiler.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS gz-common5::gz-common5-profiler )
list(APPEND _IMPORT_CHECK_FILES_FOR_gz-common5::gz-common5-profiler "${_IMPORT_PREFIX}/lib/libgz-common5-profiler.so.5.3.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)