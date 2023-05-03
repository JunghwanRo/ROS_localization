# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-sensors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-sensors8

# Include any dependencies generated for this target.
include src/CMakeFiles/gz-sensors8-air_pressure.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/gz-sensors8-air_pressure.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/gz-sensors8-air_pressure.dir/flags.make

src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o: src/CMakeFiles/gz-sensors8-air_pressure.dir/flags.make
src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o: /home/julia/workspace/src/gz-sensors/src/AirPressureSensor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-sensors8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o"
	cd /home/julia/workspace/build/gz-sensors8/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o -c /home/julia/workspace/src/gz-sensors/src/AirPressureSensor.cc

src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.i"
	cd /home/julia/workspace/build/gz-sensors8/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-sensors/src/AirPressureSensor.cc > CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.i

src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.s"
	cd /home/julia/workspace/build/gz-sensors8/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-sensors/src/AirPressureSensor.cc -o CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.s

# Object files for target gz-sensors8-air_pressure
gz__sensors8__air_pressure_OBJECTS = \
"CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o"

# External object files for target gz-sensors8-air_pressure
gz__sensors8__air_pressure_EXTERNAL_OBJECTS =

lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: src/CMakeFiles/gz-sensors8-air_pressure.dir/AirPressureSensor.cc.o
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: src/CMakeFiles/gz-sensors8-air_pressure.dir/build.make
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: lib/libgz-sensors8.so.8.0.0~pre1
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /home/julia/workspace/install/lib/libsdformat13.so.13.3.0
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libgz-sensors8-air_pressure.so.8.0.0~pre1: src/CMakeFiles/gz-sensors8-air_pressure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-sensors8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../lib/libgz-sensors8-air_pressure.so"
	cd /home/julia/workspace/build/gz-sensors8/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gz-sensors8-air_pressure.dir/link.txt --verbose=$(VERBOSE)
	cd /home/julia/workspace/build/gz-sensors8/src && $(CMAKE_COMMAND) -E cmake_symlink_library "../lib/libgz-sensors8-air_pressure.so.8.0.0~pre1" ../lib/libgz-sensors8-air_pressure.so.8 ../lib/libgz-sensors8-air_pressure.so

lib/libgz-sensors8-air_pressure.so.8: lib/libgz-sensors8-air_pressure.so.8.0.0~pre1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libgz-sensors8-air_pressure.so.8

lib/libgz-sensors8-air_pressure.so: lib/libgz-sensors8-air_pressure.so.8.0.0~pre1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libgz-sensors8-air_pressure.so

# Rule to build all files generated by this target.
src/CMakeFiles/gz-sensors8-air_pressure.dir/build: lib/libgz-sensors8-air_pressure.so

.PHONY : src/CMakeFiles/gz-sensors8-air_pressure.dir/build

src/CMakeFiles/gz-sensors8-air_pressure.dir/clean:
	cd /home/julia/workspace/build/gz-sensors8/src && $(CMAKE_COMMAND) -P CMakeFiles/gz-sensors8-air_pressure.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/gz-sensors8-air_pressure.dir/clean

src/CMakeFiles/gz-sensors8-air_pressure.dir/depend:
	cd /home/julia/workspace/build/gz-sensors8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-sensors /home/julia/workspace/src/gz-sensors/src /home/julia/workspace/build/gz-sensors8 /home/julia/workspace/build/gz-sensors8/src /home/julia/workspace/build/gz-sensors8/src/CMakeFiles/gz-sensors8-air_pressure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/gz-sensors8-air_pressure.dir/depend
