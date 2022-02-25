cmake_minimum_required(VERSION 3.20)

project(sleet)

set(CMAKE_CXX_STANDARD 20)

set(LIBS_INCLUDE_DIR "") # set here to keep the var alive

add_subdirectory(Libs)
add_subdirectory(Src)

