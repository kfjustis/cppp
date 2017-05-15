# Author: Kynan Justis
# Date: May 15 2017

cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the CMake project
project(cppp)

# Look for files in src
add_subdirectory(src)
