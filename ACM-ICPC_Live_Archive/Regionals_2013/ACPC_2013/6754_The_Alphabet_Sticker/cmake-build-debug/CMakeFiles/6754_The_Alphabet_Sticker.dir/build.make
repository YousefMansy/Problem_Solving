# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/yuzo-san/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/yuzo-san/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.3968.17/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/6754_The_Alphabet_Sticker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6754_The_Alphabet_Sticker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6754_The_Alphabet_Sticker.dir/flags.make

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o: CMakeFiles/6754_The_Alphabet_Sticker.dir/flags.make
CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o -c /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/main.cpp

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/main.cpp > CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.i

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/main.cpp -o CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.s

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.requires

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.provides: CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/6754_The_Alphabet_Sticker.dir/build.make CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.provides

CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.provides.build: CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o


# Object files for target 6754_The_Alphabet_Sticker
6754_The_Alphabet_Sticker_OBJECTS = \
"CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o"

# External object files for target 6754_The_Alphabet_Sticker
6754_The_Alphabet_Sticker_EXTERNAL_OBJECTS =

6754_The_Alphabet_Sticker: CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o
6754_The_Alphabet_Sticker: CMakeFiles/6754_The_Alphabet_Sticker.dir/build.make
6754_The_Alphabet_Sticker: CMakeFiles/6754_The_Alphabet_Sticker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 6754_The_Alphabet_Sticker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/6754_The_Alphabet_Sticker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6754_The_Alphabet_Sticker.dir/build: 6754_The_Alphabet_Sticker

.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/build

CMakeFiles/6754_The_Alphabet_Sticker.dir/requires: CMakeFiles/6754_The_Alphabet_Sticker.dir/main.cpp.o.requires

.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/requires

CMakeFiles/6754_The_Alphabet_Sticker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/6754_The_Alphabet_Sticker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/clean

CMakeFiles/6754_The_Alphabet_Sticker.dir/depend:
	cd /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug /home/yuzo-san/CLionProjects/Problem_Solving/ACM-ICPC_Live_Archive/Regionals_2013/ACPC_2013/6754_The_Alphabet_Sticker/cmake-build-debug/CMakeFiles/6754_The_Alphabet_Sticker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6754_The_Alphabet_Sticker.dir/depend

