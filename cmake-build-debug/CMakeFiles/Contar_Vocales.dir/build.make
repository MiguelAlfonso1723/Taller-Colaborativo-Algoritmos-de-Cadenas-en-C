# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Contar_Vocales.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Contar_Vocales.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Contar_Vocales.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Contar_Vocales.dir/flags.make

CMakeFiles/Contar_Vocales.dir/main.c.obj: CMakeFiles/Contar_Vocales.dir/flags.make
CMakeFiles/Contar_Vocales.dir/main.c.obj: ../main.c
CMakeFiles/Contar_Vocales.dir/main.c.obj: CMakeFiles/Contar_Vocales.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Contar_Vocales.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Contar_Vocales.dir/main.c.obj -MF CMakeFiles\Contar_Vocales.dir\main.c.obj.d -o CMakeFiles\Contar_Vocales.dir\main.c.obj -c C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\main.c

CMakeFiles/Contar_Vocales.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Contar_Vocales.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\main.c > CMakeFiles\Contar_Vocales.dir\main.c.i

CMakeFiles/Contar_Vocales.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Contar_Vocales.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\main.c -o CMakeFiles\Contar_Vocales.dir\main.c.s

# Object files for target Contar_Vocales
Contar_Vocales_OBJECTS = \
"CMakeFiles/Contar_Vocales.dir/main.c.obj"

# External object files for target Contar_Vocales
Contar_Vocales_EXTERNAL_OBJECTS =

Contar_Vocales.exe: CMakeFiles/Contar_Vocales.dir/main.c.obj
Contar_Vocales.exe: CMakeFiles/Contar_Vocales.dir/build.make
Contar_Vocales.exe: CMakeFiles/Contar_Vocales.dir/linklibs.rsp
Contar_Vocales.exe: CMakeFiles/Contar_Vocales.dir/objects1.rsp
Contar_Vocales.exe: CMakeFiles/Contar_Vocales.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Contar_Vocales.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Contar_Vocales.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Contar_Vocales.dir/build: Contar_Vocales.exe
.PHONY : CMakeFiles/Contar_Vocales.dir/build

CMakeFiles/Contar_Vocales.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Contar_Vocales.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Contar_Vocales.dir/clean

CMakeFiles/Contar_Vocales.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug C:\Users\byLug\repositorios\Taller-Colaborativo-Algoritmos-de-Cadenas-en-C\cmake-build-debug\CMakeFiles\Contar_Vocales.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Contar_Vocales.dir/depend

