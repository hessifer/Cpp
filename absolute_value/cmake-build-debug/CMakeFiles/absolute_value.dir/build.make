# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/nagalot/bin/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/nagalot/bin/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nagalot/CLionProjects/Cpp/absolute_value

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/absolute_value.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/absolute_value.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/absolute_value.dir/flags.make

CMakeFiles/absolute_value.dir/main.cpp.o: CMakeFiles/absolute_value.dir/flags.make
CMakeFiles/absolute_value.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/absolute_value.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/absolute_value.dir/main.cpp.o -c /home/nagalot/CLionProjects/Cpp/absolute_value/main.cpp

CMakeFiles/absolute_value.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/absolute_value.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nagalot/CLionProjects/Cpp/absolute_value/main.cpp > CMakeFiles/absolute_value.dir/main.cpp.i

CMakeFiles/absolute_value.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/absolute_value.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nagalot/CLionProjects/Cpp/absolute_value/main.cpp -o CMakeFiles/absolute_value.dir/main.cpp.s

# Object files for target absolute_value
absolute_value_OBJECTS = \
"CMakeFiles/absolute_value.dir/main.cpp.o"

# External object files for target absolute_value
absolute_value_EXTERNAL_OBJECTS =

absolute_value: CMakeFiles/absolute_value.dir/main.cpp.o
absolute_value: CMakeFiles/absolute_value.dir/build.make
absolute_value: CMakeFiles/absolute_value.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable absolute_value"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/absolute_value.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/absolute_value.dir/build: absolute_value

.PHONY : CMakeFiles/absolute_value.dir/build

CMakeFiles/absolute_value.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/absolute_value.dir/cmake_clean.cmake
.PHONY : CMakeFiles/absolute_value.dir/clean

CMakeFiles/absolute_value.dir/depend:
	cd /home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nagalot/CLionProjects/Cpp/absolute_value /home/nagalot/CLionProjects/Cpp/absolute_value /home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug /home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug /home/nagalot/CLionProjects/Cpp/absolute_value/cmake-build-debug/CMakeFiles/absolute_value.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/absolute_value.dir/depend

