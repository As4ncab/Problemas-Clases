# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica

# @author Alexia Sánchez Cabrera    (alu0101482323@ull.edu.es)
# @date DD/MM/YYYY
# @brief CMakeLists.txt Example:
#          CMakeLists.txt defines the whole build.
#          CMake reads CMakeLists.txt sequentially.

#          Build process:
#            1.- cd <project_folder>
#            2.- mkdir build
#            3.- cd build
#            4.- CMake
#            5.- make
#
#
#          Instalación de Google Tests:
#          https://github.com/google/googletest/blob/master/googletest/README.md
#          git clone https://github.com/google/googletest.git -b release-1.10.0
#  				 cd googletest/
#  				 mkdir build
#  				 cd build/
#  				 cmake .. -DBUILD_GMOCK=OFF
# 				 make
#  				 sudo make install 
#
#  				 ls -ltr /usr/local/include

# Set especifications
cmake_minimum_required(VERSION 3.1)

project(books
        VERSION 1.0
        DESCRIPTION ""
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Locate gtests
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Tell CMake to put binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Tell CMake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIRECTORY}/src)

# Add executables "book" and "runtests" to be built from source files
add_executable(books
               ../src/tools.h
               ../src/tools.cc
               ../src/books.h
               ../src/books.cc
               ../src/books_main.cc)

add_executable(runtests
               ../src/tools.h
               ../src/tools.cc
               ../src/books.h
               ../src/books.cc
               ../test/books_test.cc
               ../test/tests_main.cc)

# Add gtests libraries
target_link_libraries(runtests ${GTEST_LIBRARIES} pthread)

# Add expected compiler features to target
target_compile_features(books PRIVATE cxx_std_17)

# Add compile options to target
target_compile_options(books PRIVATE -Wall -Wextra -Wpedantic)