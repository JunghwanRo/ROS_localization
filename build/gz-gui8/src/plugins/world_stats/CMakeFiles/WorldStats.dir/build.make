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
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-gui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-gui8

# Include any dependencies generated for this target.
include src/plugins/world_stats/CMakeFiles/WorldStats.dir/depend.make

# Include the progress variables for this target.
include src/plugins/world_stats/CMakeFiles/WorldStats.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/world_stats/CMakeFiles/WorldStats.dir/flags.make

src/plugins/world_stats/moc_WorldStats.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_WorldStats.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/world_stats/moc_WorldStats.cpp_parameters

src/plugins/world_stats/qrc_WorldStats.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.qml
src/plugins/world_stats/qrc_WorldStats.cpp: src/plugins/world_stats/WorldStats.qrc.depends
src/plugins/world_stats/qrc_WorldStats.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_WorldStats.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/lib/qt5/bin/rcc --name WorldStats --output /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/qrc_WorldStats.cpp /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.qrc

src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.o: src/plugins/world_stats/CMakeFiles/WorldStats.dir/flags.make
src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldStats.dir/WorldStats.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.cc

src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldStats.dir/WorldStats.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.cc > CMakeFiles/WorldStats.dir/WorldStats.cc.i

src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldStats.dir/WorldStats.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/world_stats/WorldStats.cc -o CMakeFiles/WorldStats.dir/WorldStats.cc.s

src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o: src/plugins/world_stats/CMakeFiles/WorldStats.dir/flags.make
src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o: src/plugins/world_stats/moc_WorldStats.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/moc_WorldStats.cpp

src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/moc_WorldStats.cpp > CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.i

src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/moc_WorldStats.cpp -o CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.s

src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o: src/plugins/world_stats/CMakeFiles/WorldStats.dir/flags.make
src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o: src/plugins/world_stats/qrc_WorldStats.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/qrc_WorldStats.cpp

src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/qrc_WorldStats.cpp > CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.i

src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/qrc_WorldStats.cpp -o CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.s

# Object files for target WorldStats
WorldStats_OBJECTS = \
"CMakeFiles/WorldStats.dir/WorldStats.cc.o" \
"CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o" \
"CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o"

# External object files for target WorldStats
WorldStats_EXTERNAL_OBJECTS =

lib/libWorldStats.so: src/plugins/world_stats/CMakeFiles/WorldStats.dir/WorldStats.cc.o
lib/libWorldStats.so: src/plugins/world_stats/CMakeFiles/WorldStats.dir/moc_WorldStats.cpp.o
lib/libWorldStats.so: src/plugins/world_stats/CMakeFiles/WorldStats.dir/qrc_WorldStats.cpp.o
lib/libWorldStats.so: src/plugins/world_stats/CMakeFiles/WorldStats.dir/build.make
lib/libWorldStats.so: lib/libgz-gui8.so.8.0.0~pre1
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libWorldStats.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libWorldStats.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libWorldStats.so: src/plugins/world_stats/CMakeFiles/WorldStats.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../lib/libWorldStats.so"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WorldStats.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/world_stats/CMakeFiles/WorldStats.dir/build: lib/libWorldStats.so

.PHONY : src/plugins/world_stats/CMakeFiles/WorldStats.dir/build

src/plugins/world_stats/CMakeFiles/WorldStats.dir/clean:
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_stats && $(CMAKE_COMMAND) -P CMakeFiles/WorldStats.dir/cmake_clean.cmake
.PHONY : src/plugins/world_stats/CMakeFiles/WorldStats.dir/clean

src/plugins/world_stats/CMakeFiles/WorldStats.dir/depend: src/plugins/world_stats/moc_WorldStats.cpp
src/plugins/world_stats/CMakeFiles/WorldStats.dir/depend: src/plugins/world_stats/qrc_WorldStats.cpp
	cd /home/julia/workspace/build/gz-gui8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-gui /home/julia/workspace/src/gz-gui/src/plugins/world_stats /home/julia/workspace/build/gz-gui8 /home/julia/workspace/build/gz-gui8/src/plugins/world_stats /home/julia/workspace/build/gz-gui8/src/plugins/world_stats/CMakeFiles/WorldStats.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/world_stats/CMakeFiles/WorldStats.dir/depend

