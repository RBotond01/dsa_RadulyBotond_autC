# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/F12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/F12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/F12.dir/flags.make

CMakeFiles/F12.dir/main.c.obj: CMakeFiles/F12.dir/flags.make
CMakeFiles/F12.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/F12.dir/main.c.obj"
	C:\work\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\F12.dir\main.c.obj   -c C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\main.c

CMakeFiles/F12.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/F12.dir/main.c.i"
	C:\work\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\main.c > CMakeFiles\F12.dir\main.c.i

CMakeFiles/F12.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/F12.dir/main.c.s"
	C:\work\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\main.c -o CMakeFiles\F12.dir\main.c.s

# Object files for target F12
F12_OBJECTS = \
"CMakeFiles/F12.dir/main.c.obj"

# External object files for target F12
F12_EXTERNAL_OBJECTS =

F12.exe: CMakeFiles/F12.dir/main.c.obj
F12.exe: CMakeFiles/F12.dir/build.make
F12.exe: CMakeFiles/F12.dir/linklibs.rsp
F12.exe: CMakeFiles/F12.dir/objects1.rsp
F12.exe: CMakeFiles/F12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable F12.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\F12.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/F12.dir/build: F12.exe

.PHONY : CMakeFiles/F12.dir/build

CMakeFiles/F12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\F12.dir\cmake_clean.cmake
.PHONY : CMakeFiles/F12.dir/clean

CMakeFiles/F12.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12 C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12 C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug C:\Users\Boti\Desktop\proghazi\dsa_RadulyBotond_autC\Lab_2\F12\cmake-build-debug\CMakeFiles\F12.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/F12.dir/depend

