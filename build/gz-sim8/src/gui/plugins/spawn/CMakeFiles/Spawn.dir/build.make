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
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-sim8

# Include any dependencies generated for this target.
include src/gui/plugins/spawn/CMakeFiles/Spawn.dir/depend.make

# Include the progress variables for this target.
include src/gui/plugins/spawn/CMakeFiles/Spawn.dir/progress.make

# Include the compile flags for this target's objects.
include src/gui/plugins/spawn/CMakeFiles/Spawn.dir/flags.make

src/gui/plugins/spawn/moc_Spawn.cpp: /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_Spawn.cpp"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/moc_Spawn.cpp_parameters

src/gui/plugins/spawn/qrc_Spawn.cpp: /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.qml
src/gui/plugins/spawn/qrc_Spawn.cpp: src/gui/plugins/spawn/Spawn.qrc.depends
src/gui/plugins/spawn/qrc_Spawn.cpp: /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_Spawn.cpp"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/lib/qt5/bin/rcc --name Spawn --output /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/qrc_Spawn.cpp /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.qrc

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.o: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/flags.make
src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.o: /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.o"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Spawn.dir/Spawn.cc.o -c /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.cc

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spawn.dir/Spawn.cc.i"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.cc > CMakeFiles/Spawn.dir/Spawn.cc.i

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spawn.dir/Spawn.cc.s"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn/Spawn.cc -o CMakeFiles/Spawn.dir/Spawn.cc.s

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.o: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/flags.make
src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.o: src/gui/plugins/spawn/moc_Spawn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.o"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Spawn.dir/moc_Spawn.cpp.o -c /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/moc_Spawn.cpp

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spawn.dir/moc_Spawn.cpp.i"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/moc_Spawn.cpp > CMakeFiles/Spawn.dir/moc_Spawn.cpp.i

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spawn.dir/moc_Spawn.cpp.s"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/moc_Spawn.cpp -o CMakeFiles/Spawn.dir/moc_Spawn.cpp.s

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/flags.make
src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o: src/gui/plugins/spawn/qrc_Spawn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o -c /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/qrc_Spawn.cpp

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Spawn.dir/qrc_Spawn.cpp.i"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/qrc_Spawn.cpp > CMakeFiles/Spawn.dir/qrc_Spawn.cpp.i

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Spawn.dir/qrc_Spawn.cpp.s"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/qrc_Spawn.cpp -o CMakeFiles/Spawn.dir/qrc_Spawn.cpp.s

# Object files for target Spawn
Spawn_OBJECTS = \
"CMakeFiles/Spawn.dir/Spawn.cc.o" \
"CMakeFiles/Spawn.dir/moc_Spawn.cpp.o" \
"CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o"

# External object files for target Spawn
Spawn_EXTERNAL_OBJECTS =

lib/libSpawn.so: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/Spawn.cc.o
lib/libSpawn.so: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/moc_Spawn.cpp.o
lib/libSpawn.so: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/qrc_Spawn.cpp.o
lib/libSpawn.so: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/build.make
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libSpawn.so: lib/libgz-sim8-rendering.so.8.0.0~pre1
lib/libSpawn.so: lib/libgz-sim8-gui.so.8.0.0~pre1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-rendering8.so.8.0.0~pre1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-av.so.5.3.1
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libswscale.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libswscale.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavdevice.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavdevice.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavformat.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavformat.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavcodec.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavcodec.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavutil.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libavutil.so
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-io.so.5.3.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-geospatial.so.5.3.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-graphics.so.5.3.1
lib/libSpawn.so: lib/libgz-sim8.so.8.0.0~pre1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-profiler.so.5.3.1
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libgz-fuel_tools8.so.8.0.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libsdformat13.so.13.3.0
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-gui8.so.8.0.0~pre1
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libSpawn.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libSpawn.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libSpawn.so: src/gui/plugins/spawn/CMakeFiles/Spawn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../../lib/libSpawn.so"
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Spawn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/gui/plugins/spawn/CMakeFiles/Spawn.dir/build: lib/libSpawn.so

.PHONY : src/gui/plugins/spawn/CMakeFiles/Spawn.dir/build

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/clean:
	cd /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn && $(CMAKE_COMMAND) -P CMakeFiles/Spawn.dir/cmake_clean.cmake
.PHONY : src/gui/plugins/spawn/CMakeFiles/Spawn.dir/clean

src/gui/plugins/spawn/CMakeFiles/Spawn.dir/depend: src/gui/plugins/spawn/moc_Spawn.cpp
src/gui/plugins/spawn/CMakeFiles/Spawn.dir/depend: src/gui/plugins/spawn/qrc_Spawn.cpp
	cd /home/julia/workspace/build/gz-sim8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-sim /home/julia/workspace/src/gz-sim/src/gui/plugins/spawn /home/julia/workspace/build/gz-sim8 /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn /home/julia/workspace/build/gz-sim8/src/gui/plugins/spawn/CMakeFiles/Spawn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/gui/plugins/spawn/CMakeFiles/Spawn.dir/depend

