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
CMAKE_SOURCE_DIR = /home/usuario/problemas/Problemas-Clases/Books

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/problemas/Problemas-Clases/Books/build

# Include any dependencies generated for this target.
include CMakeFiles/runtests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runtests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runtests.dir/flags.make

CMakeFiles/runtests.dir/src/books.cc.o: CMakeFiles/runtests.dir/flags.make
CMakeFiles/runtests.dir/src/books.cc.o: ../src/books.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/problemas/Problemas-Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runtests.dir/src/books.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runtests.dir/src/books.cc.o -c /home/usuario/problemas/Problemas-Clases/Books/src/books.cc

CMakeFiles/runtests.dir/src/books.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtests.dir/src/books.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/problemas/Problemas-Clases/Books/src/books.cc > CMakeFiles/runtests.dir/src/books.cc.i

CMakeFiles/runtests.dir/src/books.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtests.dir/src/books.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/problemas/Problemas-Clases/Books/src/books.cc -o CMakeFiles/runtests.dir/src/books.cc.s

CMakeFiles/runtests.dir/test/books_test.cc.o: CMakeFiles/runtests.dir/flags.make
CMakeFiles/runtests.dir/test/books_test.cc.o: ../test/books_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/problemas/Problemas-Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/runtests.dir/test/books_test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runtests.dir/test/books_test.cc.o -c /home/usuario/problemas/Problemas-Clases/Books/test/books_test.cc

CMakeFiles/runtests.dir/test/books_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtests.dir/test/books_test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/problemas/Problemas-Clases/Books/test/books_test.cc > CMakeFiles/runtests.dir/test/books_test.cc.i

CMakeFiles/runtests.dir/test/books_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtests.dir/test/books_test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/problemas/Problemas-Clases/Books/test/books_test.cc -o CMakeFiles/runtests.dir/test/books_test.cc.s

CMakeFiles/runtests.dir/test/tests_main.cc.o: CMakeFiles/runtests.dir/flags.make
CMakeFiles/runtests.dir/test/tests_main.cc.o: ../test/tests_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/problemas/Problemas-Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/runtests.dir/test/tests_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runtests.dir/test/tests_main.cc.o -c /home/usuario/problemas/Problemas-Clases/Books/test/tests_main.cc

CMakeFiles/runtests.dir/test/tests_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtests.dir/test/tests_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/problemas/Problemas-Clases/Books/test/tests_main.cc > CMakeFiles/runtests.dir/test/tests_main.cc.i

CMakeFiles/runtests.dir/test/tests_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtests.dir/test/tests_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/problemas/Problemas-Clases/Books/test/tests_main.cc -o CMakeFiles/runtests.dir/test/tests_main.cc.s

# Object files for target runtests
runtests_OBJECTS = \
"CMakeFiles/runtests.dir/src/books.cc.o" \
"CMakeFiles/runtests.dir/test/books_test.cc.o" \
"CMakeFiles/runtests.dir/test/tests_main.cc.o"

# External object files for target runtests
runtests_EXTERNAL_OBJECTS =

runtests: CMakeFiles/runtests.dir/src/books.cc.o
runtests: CMakeFiles/runtests.dir/test/books_test.cc.o
runtests: CMakeFiles/runtests.dir/test/tests_main.cc.o
runtests: CMakeFiles/runtests.dir/build.make
runtests: /usr/local/lib/libgtest.a
runtests: CMakeFiles/runtests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/problemas/Problemas-Clases/Books/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable runtests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runtests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runtests.dir/build: runtests

.PHONY : CMakeFiles/runtests.dir/build

CMakeFiles/runtests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runtests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runtests.dir/clean

CMakeFiles/runtests.dir/depend:
	cd /home/usuario/problemas/Problemas-Clases/Books/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/problemas/Problemas-Clases/Books /home/usuario/problemas/Problemas-Clases/Books /home/usuario/problemas/Problemas-Clases/Books/build /home/usuario/problemas/Problemas-Clases/Books/build /home/usuario/problemas/Problemas-Clases/Books/build/CMakeFiles/runtests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runtests.dir/depend
