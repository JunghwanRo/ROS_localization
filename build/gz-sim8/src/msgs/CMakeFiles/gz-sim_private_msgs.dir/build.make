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

# Utility rule file for gz-sim_private_msgs.

# Include the progress variables for this target.
include src/msgs/CMakeFiles/gz-sim_private_msgs.dir/progress.make

src/msgs/CMakeFiles/gz-sim_private_msgs: src/msgs/peer_info.pb.cc
src/msgs/CMakeFiles/gz-sim_private_msgs: src/msgs/peer_control.pb.cc
src/msgs/CMakeFiles/gz-sim_private_msgs: src/msgs/performer_affinity.pb.cc
src/msgs/CMakeFiles/gz-sim_private_msgs: src/msgs/simulation_step.pb.cc


src/msgs/peer_info.pb.h: /home/julia/workspace/src/gz-sim/src/msgs/peer_info.proto
src/msgs/peer_info.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running cpp protocol buffer compiler on peer_info.proto"
	cd /home/julia/workspace/build/gz-sim8/src/msgs && /usr/bin/protoc --cpp_out /home/julia/workspace/build/gz-sim8/src/msgs -I /home/julia/workspace/src/gz-sim/src/msgs -I /usr/include/gz/msgs9 /home/julia/workspace/src/gz-sim/src/msgs/peer_info.proto

src/msgs/peer_info.pb.cc: src/msgs/peer_info.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/msgs/peer_info.pb.cc

src/msgs/peer_control.pb.h: /home/julia/workspace/src/gz-sim/src/msgs/peer_control.proto
src/msgs/peer_control.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running cpp protocol buffer compiler on peer_control.proto"
	cd /home/julia/workspace/build/gz-sim8/src/msgs && /usr/bin/protoc --cpp_out /home/julia/workspace/build/gz-sim8/src/msgs -I /home/julia/workspace/src/gz-sim/src/msgs -I /usr/include/gz/msgs9 /home/julia/workspace/src/gz-sim/src/msgs/peer_control.proto

src/msgs/peer_control.pb.cc: src/msgs/peer_control.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/msgs/peer_control.pb.cc

src/msgs/performer_affinity.pb.h: /home/julia/workspace/src/gz-sim/src/msgs/performer_affinity.proto
src/msgs/performer_affinity.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Running cpp protocol buffer compiler on performer_affinity.proto"
	cd /home/julia/workspace/build/gz-sim8/src/msgs && /usr/bin/protoc --cpp_out /home/julia/workspace/build/gz-sim8/src/msgs -I /home/julia/workspace/src/gz-sim/src/msgs -I /usr/include/gz/msgs9 /home/julia/workspace/src/gz-sim/src/msgs/performer_affinity.proto

src/msgs/performer_affinity.pb.cc: src/msgs/performer_affinity.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/msgs/performer_affinity.pb.cc

src/msgs/simulation_step.pb.h: /home/julia/workspace/src/gz-sim/src/msgs/simulation_step.proto
src/msgs/simulation_step.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-sim8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Running cpp protocol buffer compiler on simulation_step.proto"
	cd /home/julia/workspace/build/gz-sim8/src/msgs && /usr/bin/protoc --cpp_out /home/julia/workspace/build/gz-sim8/src/msgs -I /home/julia/workspace/src/gz-sim/src/msgs -I /usr/include/gz/msgs9 /home/julia/workspace/src/gz-sim/src/msgs/simulation_step.proto

src/msgs/simulation_step.pb.cc: src/msgs/simulation_step.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/msgs/simulation_step.pb.cc

gz-sim_private_msgs: src/msgs/CMakeFiles/gz-sim_private_msgs
gz-sim_private_msgs: src/msgs/peer_info.pb.h
gz-sim_private_msgs: src/msgs/peer_info.pb.cc
gz-sim_private_msgs: src/msgs/peer_control.pb.h
gz-sim_private_msgs: src/msgs/peer_control.pb.cc
gz-sim_private_msgs: src/msgs/performer_affinity.pb.h
gz-sim_private_msgs: src/msgs/performer_affinity.pb.cc
gz-sim_private_msgs: src/msgs/simulation_step.pb.h
gz-sim_private_msgs: src/msgs/simulation_step.pb.cc
gz-sim_private_msgs: src/msgs/CMakeFiles/gz-sim_private_msgs.dir/build.make

.PHONY : gz-sim_private_msgs

# Rule to build all files generated by this target.
src/msgs/CMakeFiles/gz-sim_private_msgs.dir/build: gz-sim_private_msgs

.PHONY : src/msgs/CMakeFiles/gz-sim_private_msgs.dir/build

src/msgs/CMakeFiles/gz-sim_private_msgs.dir/clean:
	cd /home/julia/workspace/build/gz-sim8/src/msgs && $(CMAKE_COMMAND) -P CMakeFiles/gz-sim_private_msgs.dir/cmake_clean.cmake
.PHONY : src/msgs/CMakeFiles/gz-sim_private_msgs.dir/clean

src/msgs/CMakeFiles/gz-sim_private_msgs.dir/depend:
	cd /home/julia/workspace/build/gz-sim8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-sim /home/julia/workspace/src/gz-sim/src/msgs /home/julia/workspace/build/gz-sim8 /home/julia/workspace/build/gz-sim8/src/msgs /home/julia/workspace/build/gz-sim8/src/msgs/CMakeFiles/gz-sim_private_msgs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/msgs/CMakeFiles/gz-sim_private_msgs.dir/depend

