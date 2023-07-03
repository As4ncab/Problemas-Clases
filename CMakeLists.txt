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

# Set especifications
cmake_minimum_required(VERSION 3.1)

project(coche
        VERSION 1.0
        DESCRIPTION ""
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Tell CMake to put binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wpedantic")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Tell CMake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIRECTORY}/src)

# Add executable "coche" to be built from source files
add_executable(coche
               src/coche.h
               src/coche.cc
               src/coche_main.cc)

# Add expected compiler features to target
target_compile_features(coche PRIVATE cxx_std_17)

# Add compile options to target
target_compile_options(coche PRIVATE -Wall -Wpedantic)