# Install script for directory: /home/julia/workspace/src/gz-rendering/ogre2/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/julia/workspace/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gz/rendering8/gz/rendering/ogre2/detail" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/include/gz/rendering/ogre2/detail/Export.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gz/rendering8/gz/rendering/ogre2" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/include/gz/rendering/ogre2/Export.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so.8.0.0~pre1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so.8.0.0~pre1"
    "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so.8"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so.8.0.0~pre1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3:/home/julia/workspace/build/gz-rendering8/lib:/home/julia/workspace/install/lib:"
           NEW_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so"
         RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3:/home/julia/workspace/build/gz-rendering8/lib:/home/julia/workspace/install/lib:"
         NEW_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgz-rendering8-ogre2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcmakex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2" TYPE FILE FILES
    "/home/julia/workspace/build/gz-rendering8/cmake/gz-rendering8-ogre2-config.cmake"
    "/home/julia/workspace/build/gz-rendering8/cmake/gz-rendering8-ogre2-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets.cmake"
         "/home/julia/workspace/build/gz-rendering8/ogre2/src/CMakeFiles/Export/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/ogre2/src/CMakeFiles/Export/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/gz-rendering8-ogre2" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/ogre2/src/CMakeFiles/Export/lib/cmake/gz-rendering8-ogre2/gz-rendering8-ogre2-targets-relwithdebinfo.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpkgconfigx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/julia/workspace/install/lib/pkgconfig/gz-rendering8-ogre2.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/julia/workspace/install/lib/pkgconfig" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/cmake/pkgconfig/gz-rendering8-ogre2.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8.0.0~pre1"
      "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8.0.0~pre1;/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins" TYPE SHARED_LIBRARY FILES
    "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so.8.0.0~pre1"
    "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so.8"
    )
  foreach(file
      "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8.0.0~pre1"
      "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3:/home/julia/workspace/build/gz-rendering8/lib:/home/julia/workspace/install/lib:"
           NEW_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so"
         RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins" TYPE SHARED_LIBRARY FILES "/home/julia/workspace/build/gz-rendering8/lib/libgz-rendering8-ogre2.so")
  if(EXISTS "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so"
         OLD_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3:/home/julia/workspace/build/gz-rendering8/lib:/home/julia/workspace/install/lib:"
         NEW_RPATH "/usr/lib/x86_64-linux-gnu/OGRE-2.3")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering8-ogre2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins/libgz-rendering-ogre2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/julia/workspace/install/lib/gz-rendering-8/engine-plugins" TYPE FILE FILES "/home/julia/workspace/build/gz-rendering8/libgz-rendering-ogre2.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/julia/workspace/install/share/gz/gz-rendering8/ogre2/media")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/julia/workspace/install/share/gz/gz-rendering8/ogre2" TYPE DIRECTORY FILES "/home/julia/workspace/src/gz-rendering/ogre2/src/media")
endif()

