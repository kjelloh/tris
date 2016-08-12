cmake_minimum_required(VERSION 3.6)
project(tris)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/tris_main_template.cpp
        src/Active.cpp
        src/Active.h
        src/BackEnd.cpp
        src/BackEnd.h
        src/Core.cpp
        src/Core.h
        src/FrontEnd.cpp
        src/FrontEnd.h)
add_executable(tris ${SOURCE_FILES})