cmake_minimum_required(VERSION 3.5)
set (This_Project "tris")
project($This_Project)

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
add_executable(${This_Project} ${SOURCE_FILES})

# We need boost include header path
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# We need boost libraries
#Locate Boost libraries (https://cmake.org/cmake/help/v3.0/module/FindBoost.html)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS filesystem)
target_link_libraries(${This_Project} ${Boost_LIBRARIES})

# We need boost libray includes
target_include_directories(${This_Project} PRIVATE ${Boost_INCLUDE_DIRS})

# We need the platform thread library
include(FindThreads)
set(CMAKE_THREAD_PREFER_PTHREAD)
find_package(Threads REQUIRED)
target_link_libraries(${This_Project} ${CMAKE_THREAD_LIBS_INIT} )