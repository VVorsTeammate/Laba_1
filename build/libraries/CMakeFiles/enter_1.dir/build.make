# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Unic\Laba_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Unic\Laba_1\build

# Include any dependencies generated for this target.
include libraries/CMakeFiles/enter_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libraries/CMakeFiles/enter_1.dir/compiler_depend.make

# Include the progress variables for this target.
include libraries/CMakeFiles/enter_1.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/CMakeFiles/enter_1.dir/flags.make

libraries/CMakeFiles/enter_1.dir/enter.cpp.obj: libraries/CMakeFiles/enter_1.dir/flags.make
libraries/CMakeFiles/enter_1.dir/enter.cpp.obj: libraries/CMakeFiles/enter_1.dir/includes_CXX.rsp
libraries/CMakeFiles/enter_1.dir/enter.cpp.obj: E:/Unic/Laba_1/libraries/enter.cpp
libraries/CMakeFiles/enter_1.dir/enter.cpp.obj: libraries/CMakeFiles/enter_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\Unic\Laba_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/CMakeFiles/enter_1.dir/enter.cpp.obj"
	cd /d E:\Unic\Laba_1\build\libraries && E:\MinGw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libraries/CMakeFiles/enter_1.dir/enter.cpp.obj -MF CMakeFiles\enter_1.dir\enter.cpp.obj.d -o CMakeFiles\enter_1.dir\enter.cpp.obj -c E:\Unic\Laba_1\libraries\enter.cpp

libraries/CMakeFiles/enter_1.dir/enter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/enter_1.dir/enter.cpp.i"
	cd /d E:\Unic\Laba_1\build\libraries && E:\MinGw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Unic\Laba_1\libraries\enter.cpp > CMakeFiles\enter_1.dir\enter.cpp.i

libraries/CMakeFiles/enter_1.dir/enter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/enter_1.dir/enter.cpp.s"
	cd /d E:\Unic\Laba_1\build\libraries && E:\MinGw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Unic\Laba_1\libraries\enter.cpp -o CMakeFiles\enter_1.dir\enter.cpp.s

# Object files for target enter_1
enter_1_OBJECTS = \
"CMakeFiles/enter_1.dir/enter.cpp.obj"

# External object files for target enter_1
enter_1_EXTERNAL_OBJECTS =

libraries/enter_1.exe: libraries/CMakeFiles/enter_1.dir/enter.cpp.obj
libraries/enter_1.exe: libraries/CMakeFiles/enter_1.dir/build.make
libraries/enter_1.exe: libraries/libgauss_1.a
libraries/enter_1.exe: libraries/libmatrix_1.a
libraries/enter_1.exe: libraries/CMakeFiles/enter_1.dir/linkLibs.rsp
libraries/enter_1.exe: libraries/CMakeFiles/enter_1.dir/objects1.rsp
libraries/enter_1.exe: libraries/CMakeFiles/enter_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\Unic\Laba_1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable enter_1.exe"
	cd /d E:\Unic\Laba_1\build\libraries && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\enter_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/CMakeFiles/enter_1.dir/build: libraries/enter_1.exe
.PHONY : libraries/CMakeFiles/enter_1.dir/build

libraries/CMakeFiles/enter_1.dir/clean:
	cd /d E:\Unic\Laba_1\build\libraries && $(CMAKE_COMMAND) -P CMakeFiles\enter_1.dir\cmake_clean.cmake
.PHONY : libraries/CMakeFiles/enter_1.dir/clean

libraries/CMakeFiles/enter_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Unic\Laba_1 E:\Unic\Laba_1\libraries E:\Unic\Laba_1\build E:\Unic\Laba_1\build\libraries E:\Unic\Laba_1\build\libraries\CMakeFiles\enter_1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : libraries/CMakeFiles/enter_1.dir/depend

