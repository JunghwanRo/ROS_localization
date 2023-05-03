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
include src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/depend.make

# Include the progress variables for this target.
include src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/flags.make

src/plugins/topic_viewer/moc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_TopicViewer.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/moc_TopicViewer.cpp_parameters

src/plugins/topic_viewer/qrc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.qml
src/plugins/topic_viewer/qrc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/plottable_icon.svg
src/plugins/topic_viewer/qrc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/minus.png
src/plugins/topic_viewer/qrc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/plus.png
src/plugins/topic_viewer/qrc_TopicViewer.cpp: src/plugins/topic_viewer/TopicViewer.qrc.depends
src/plugins/topic_viewer/qrc_TopicViewer.cpp: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_TopicViewer.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/lib/qt5/bin/rcc --name TopicViewer --output /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/qrc_TopicViewer.cpp /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.qrc

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.o: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/flags.make
src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TopicViewer.dir/TopicViewer.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.cc

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TopicViewer.dir/TopicViewer.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.cc > CMakeFiles/TopicViewer.dir/TopicViewer.cc.i

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TopicViewer.dir/TopicViewer.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer/TopicViewer.cc -o CMakeFiles/TopicViewer.dir/TopicViewer.cc.s

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/flags.make
src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o: src/plugins/topic_viewer/moc_TopicViewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/moc_TopicViewer.cpp

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/moc_TopicViewer.cpp > CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.i

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/moc_TopicViewer.cpp -o CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.s

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/flags.make
src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o: src/plugins/topic_viewer/qrc_TopicViewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/qrc_TopicViewer.cpp

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/qrc_TopicViewer.cpp > CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.i

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/qrc_TopicViewer.cpp -o CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.s

# Object files for target TopicViewer
TopicViewer_OBJECTS = \
"CMakeFiles/TopicViewer.dir/TopicViewer.cc.o" \
"CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o" \
"CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o"

# External object files for target TopicViewer
TopicViewer_EXTERNAL_OBJECTS =

lib/libTopicViewer.so: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/TopicViewer.cc.o
lib/libTopicViewer.so: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/moc_TopicViewer.cpp.o
lib/libTopicViewer.so: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/qrc_TopicViewer.cpp.o
lib/libTopicViewer.so: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/build.make
lib/libTopicViewer.so: lib/libgz-gui8.so.8.0.0~pre1
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libTopicViewer.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libTopicViewer.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libTopicViewer.so: src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../lib/libTopicViewer.so"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TopicViewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/build: lib/libTopicViewer.so

.PHONY : src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/build

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/clean:
	cd /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer && $(CMAKE_COMMAND) -P CMakeFiles/TopicViewer.dir/cmake_clean.cmake
.PHONY : src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/clean

src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/depend: src/plugins/topic_viewer/moc_TopicViewer.cpp
src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/depend: src/plugins/topic_viewer/qrc_TopicViewer.cpp
	cd /home/julia/workspace/build/gz-gui8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-gui /home/julia/workspace/src/gz-gui/src/plugins/topic_viewer /home/julia/workspace/build/gz-gui8 /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer /home/julia/workspace/build/gz-gui8/src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/topic_viewer/CMakeFiles/TopicViewer.dir/depend

