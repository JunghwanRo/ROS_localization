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
include src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/depend.make

# Include the progress variables for this target.
include src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/flags.make

src/plugins/tape_measure/moc_TapeMeasure.cpp: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_TapeMeasure.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/moc_TapeMeasure.cpp_parameters

src/plugins/tape_measure/qrc_TapeMeasure.cpp: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.qml
src/plugins/tape_measure/qrc_TapeMeasure.cpp: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/tape_measure.png
src/plugins/tape_measure/qrc_TapeMeasure.cpp: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/trashcan.png
src/plugins/tape_measure/qrc_TapeMeasure.cpp: src/plugins/tape_measure/TapeMeasure.qrc.depends
src/plugins/tape_measure/qrc_TapeMeasure.cpp: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_TapeMeasure.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/lib/qt5/bin/rcc --name TapeMeasure --output /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/qrc_TapeMeasure.cpp /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.qrc

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/flags.make
src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.cc

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.cc > CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.i

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/tape_measure/TapeMeasure.cc -o CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.s

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/flags.make
src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o: src/plugins/tape_measure/moc_TapeMeasure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/moc_TapeMeasure.cpp

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/moc_TapeMeasure.cpp > CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.i

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/moc_TapeMeasure.cpp -o CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.s

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/flags.make
src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o: src/plugins/tape_measure/qrc_TapeMeasure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/qrc_TapeMeasure.cpp

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/qrc_TapeMeasure.cpp > CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.i

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/qrc_TapeMeasure.cpp -o CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.s

# Object files for target TapeMeasure
TapeMeasure_OBJECTS = \
"CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o" \
"CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o" \
"CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o"

# External object files for target TapeMeasure
TapeMeasure_EXTERNAL_OBJECTS =

lib/libTapeMeasure.so: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/TapeMeasure.cc.o
lib/libTapeMeasure.so: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/moc_TapeMeasure.cpp.o
lib/libTapeMeasure.so: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/qrc_TapeMeasure.cpp.o
lib/libTapeMeasure.so: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/build.make
lib/libTapeMeasure.so: lib/libgz-gui8.so.8.0.0~pre1
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-rendering8.so.8.0.0~pre1
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-common5-profiler.so.5.3.1
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-common5-geospatial.so.5.3.1
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-common5-graphics.so.5.3.1
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libTapeMeasure.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libTapeMeasure.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libTapeMeasure.so: src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../lib/libTapeMeasure.so"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TapeMeasure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/build: lib/libTapeMeasure.so

.PHONY : src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/build

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/clean:
	cd /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure && $(CMAKE_COMMAND) -P CMakeFiles/TapeMeasure.dir/cmake_clean.cmake
.PHONY : src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/clean

src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/depend: src/plugins/tape_measure/moc_TapeMeasure.cpp
src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/depend: src/plugins/tape_measure/qrc_TapeMeasure.cpp
	cd /home/julia/workspace/build/gz-gui8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-gui /home/julia/workspace/src/gz-gui/src/plugins/tape_measure /home/julia/workspace/build/gz-gui8 /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure /home/julia/workspace/build/gz-gui8/src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/tape_measure/CMakeFiles/TapeMeasure.dir/depend

