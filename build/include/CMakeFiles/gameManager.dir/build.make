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
CMAKE_SOURCE_DIR = /home/matteo/code/pong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/matteo/code/pong/build

# Include any dependencies generated for this target.
include include/CMakeFiles/gameManager.dir/depend.make

# Include the progress variables for this target.
include include/CMakeFiles/gameManager.dir/progress.make

# Include the compile flags for this target's objects.
include include/CMakeFiles/gameManager.dir/flags.make

include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o: include/CMakeFiles/gameManager.dir/flags.make
include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o: ../src/gameManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matteo/code/pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o"
	cd /home/matteo/code/pong/build/include && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o -c /home/matteo/code/pong/src/gameManager.cpp

include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gameManager.dir/__/src/gameManager.cpp.i"
	cd /home/matteo/code/pong/build/include && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/matteo/code/pong/src/gameManager.cpp > CMakeFiles/gameManager.dir/__/src/gameManager.cpp.i

include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gameManager.dir/__/src/gameManager.cpp.s"
	cd /home/matteo/code/pong/build/include && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/matteo/code/pong/src/gameManager.cpp -o CMakeFiles/gameManager.dir/__/src/gameManager.cpp.s

# Object files for target gameManager
gameManager_OBJECTS = \
"CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o"

# External object files for target gameManager
gameManager_EXTERNAL_OBJECTS =

include/libgameManager.a: include/CMakeFiles/gameManager.dir/__/src/gameManager.cpp.o
include/libgameManager.a: include/CMakeFiles/gameManager.dir/build.make
include/libgameManager.a: include/CMakeFiles/gameManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matteo/code/pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgameManager.a"
	cd /home/matteo/code/pong/build/include && $(CMAKE_COMMAND) -P CMakeFiles/gameManager.dir/cmake_clean_target.cmake
	cd /home/matteo/code/pong/build/include && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gameManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/CMakeFiles/gameManager.dir/build: include/libgameManager.a

.PHONY : include/CMakeFiles/gameManager.dir/build

include/CMakeFiles/gameManager.dir/clean:
	cd /home/matteo/code/pong/build/include && $(CMAKE_COMMAND) -P CMakeFiles/gameManager.dir/cmake_clean.cmake
.PHONY : include/CMakeFiles/gameManager.dir/clean

include/CMakeFiles/gameManager.dir/depend:
	cd /home/matteo/code/pong/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matteo/code/pong /home/matteo/code/pong/include /home/matteo/code/pong/build /home/matteo/code/pong/build/include /home/matteo/code/pong/build/include/CMakeFiles/gameManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/CMakeFiles/gameManager.dir/depend

