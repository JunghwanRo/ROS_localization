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
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-common

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-common5

# Include any dependencies generated for this target.
include av/src/CMakeFiles/gz-common5-av.dir/depend.make

# Include the progress variables for this target.
include av/src/CMakeFiles/gz-common5-av.dir/progress.make

# Include the compile flags for this target's objects.
include av/src/CMakeFiles/gz-common5-av.dir/flags.make

av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o: /home/julia/workspace/src/gz-common/av/src/AudioDecoder.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o -c /home/julia/workspace/src/gz-common/av/src/AudioDecoder.cc

av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/AudioDecoder.cc > CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.i

av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/AudioDecoder.cc -o CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.s

av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o: /home/julia/workspace/src/gz-common/av/src/HWEncoder.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o -c /home/julia/workspace/src/gz-common/av/src/HWEncoder.cc

av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/HWEncoder.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/HWEncoder.cc > CMakeFiles/gz-common5-av.dir/HWEncoder.cc.i

av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/HWEncoder.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/HWEncoder.cc -o CMakeFiles/gz-common5-av.dir/HWEncoder.cc.s

av/src/CMakeFiles/gz-common5-av.dir/Util.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/Util.cc.o: /home/julia/workspace/src/gz-common/av/src/Util.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/Util.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/Util.cc.o -c /home/julia/workspace/src/gz-common/av/src/Util.cc

av/src/CMakeFiles/gz-common5-av.dir/Util.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/Util.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/Util.cc > CMakeFiles/gz-common5-av.dir/Util.cc.i

av/src/CMakeFiles/gz-common5-av.dir/Util.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/Util.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/Util.cc -o CMakeFiles/gz-common5-av.dir/Util.cc.s

av/src/CMakeFiles/gz-common5-av.dir/Video.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/Video.cc.o: /home/julia/workspace/src/gz-common/av/src/Video.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/Video.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/Video.cc.o -c /home/julia/workspace/src/gz-common/av/src/Video.cc

av/src/CMakeFiles/gz-common5-av.dir/Video.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/Video.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/Video.cc > CMakeFiles/gz-common5-av.dir/Video.cc.i

av/src/CMakeFiles/gz-common5-av.dir/Video.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/Video.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/Video.cc -o CMakeFiles/gz-common5-av.dir/Video.cc.s

av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o: /home/julia/workspace/src/gz-common/av/src/VideoEncoder.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o -c /home/julia/workspace/src/gz-common/av/src/VideoEncoder.cc

av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/VideoEncoder.cc > CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.i

av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/VideoEncoder.cc -o CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.s

av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o: av/src/CMakeFiles/gz-common5-av.dir/flags.make
av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o: /home/julia/workspace/src/gz-common/av/src/ffmpeg_inc.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o -c /home/julia/workspace/src/gz-common/av/src/ffmpeg_inc.cc

av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.i"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-common/av/src/ffmpeg_inc.cc > CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.i

av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.s"
	cd /home/julia/workspace/build/gz-common5/av/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-common/av/src/ffmpeg_inc.cc -o CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.s

# Object files for target gz-common5-av
gz__common5__av_OBJECTS = \
"CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o" \
"CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o" \
"CMakeFiles/gz-common5-av.dir/Util.cc.o" \
"CMakeFiles/gz-common5-av.dir/Video.cc.o" \
"CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o" \
"CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o"

# External object files for target gz-common5-av
gz__common5__av_EXTERNAL_OBJECTS =

lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/AudioDecoder.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/HWEncoder.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/Util.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/Video.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/VideoEncoder.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/ffmpeg_inc.cc.o
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/build.make
lib/libgz-common5-av.so.5.3.1: lib/libgz-common5.so.5.3.1
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libswscale.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavdevice.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavformat.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavcodec.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavutil.so
lib/libgz-common5-av.so.5.3.1: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libswscale.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavdevice.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavformat.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavcodec.so
lib/libgz-common5-av.so.5.3.1: /usr/lib/x86_64-linux-gnu/libavutil.so
lib/libgz-common5-av.so.5.3.1: av/src/CMakeFiles/gz-common5-av.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-common5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library ../../lib/libgz-common5-av.so"
	cd /home/julia/workspace/build/gz-common5/av/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gz-common5-av.dir/link.txt --verbose=$(VERBOSE)
	cd /home/julia/workspace/build/gz-common5/av/src && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libgz-common5-av.so.5.3.1 ../../lib/libgz-common5-av.so.5 ../../lib/libgz-common5-av.so

lib/libgz-common5-av.so.5: lib/libgz-common5-av.so.5.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libgz-common5-av.so.5

lib/libgz-common5-av.so: lib/libgz-common5-av.so.5.3.1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libgz-common5-av.so

# Rule to build all files generated by this target.
av/src/CMakeFiles/gz-common5-av.dir/build: lib/libgz-common5-av.so

.PHONY : av/src/CMakeFiles/gz-common5-av.dir/build

av/src/CMakeFiles/gz-common5-av.dir/clean:
	cd /home/julia/workspace/build/gz-common5/av/src && $(CMAKE_COMMAND) -P CMakeFiles/gz-common5-av.dir/cmake_clean.cmake
.PHONY : av/src/CMakeFiles/gz-common5-av.dir/clean

av/src/CMakeFiles/gz-common5-av.dir/depend:
	cd /home/julia/workspace/build/gz-common5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-common /home/julia/workspace/src/gz-common/av/src /home/julia/workspace/build/gz-common5 /home/julia/workspace/build/gz-common5/av/src /home/julia/workspace/build/gz-common5/av/src/CMakeFiles/gz-common5-av.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : av/src/CMakeFiles/gz-common5-av.dir/depend

