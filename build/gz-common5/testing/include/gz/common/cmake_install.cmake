# Install script for directory: /home/julia/workspace/src/gz-common/testing/include/gz/common

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gz/common5/gz/common/testing" TYPE FILE FILES
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/AutoLogFixture.hh"
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/BazelTestPaths.hh"
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/CMakeTestPaths.hh"
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/RedirectConsoleStream.hh"
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/TestPaths.hh"
    "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/Utils.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gz/common5/gz/common/testing/detail" TYPE FILE FILES "/home/julia/workspace/src/gz-common/testing/include/gz/common/testing/detail/AutoLogFixture.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gz/common5/gz/common/testing/.." TYPE FILE FILES "/home/julia/workspace/build/gz-common5/testing/include/gz/common/testing.hh")
endif()

