# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/randymarsh/Documents/C++/C-Programing-Principles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exc8.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Exc8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exc8.dir/flags.make

CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o: CMakeFiles/Exc8.dir/flags.make
CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o: ../Chapter5/Exc10.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o -c /Users/randymarsh/Documents/C++/C-Programing-Principles/Chapter5/Exc10.cpp

CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/randymarsh/Documents/C++/C-Programing-Principles/Chapter5/Exc10.cpp > CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.i

CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/randymarsh/Documents/C++/C-Programing-Principles/Chapter5/Exc10.cpp -o CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.s

# Object files for target Exc8
Exc8_OBJECTS = \
"CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o"

# External object files for target Exc8
Exc8_EXTERNAL_OBJECTS =

Exc8: CMakeFiles/Exc8.dir/Chapter5/Exc10.cpp.o
Exc8: CMakeFiles/Exc8.dir/build.make
Exc8: CMakeFiles/Exc8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exc8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exc8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exc8.dir/build: Exc8
.PHONY : CMakeFiles/Exc8.dir/build

CMakeFiles/Exc8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exc8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exc8.dir/clean

CMakeFiles/Exc8.dir/depend:
	cd /Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/randymarsh/Documents/C++/C-Programing-Principles /Users/randymarsh/Documents/C++/C-Programing-Principles /Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug /Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug /Users/randymarsh/Documents/C++/C-Programing-Principles/cmake-build-debug/CMakeFiles/Exc8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exc8.dir/depend

