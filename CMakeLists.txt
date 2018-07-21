cmake_minimum_required(VERSION 3.10)
project(dylibtest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules")

find_package(Boost REQUIRED)

find_package(TBB REQUIRED)

find_package(OpenCV REQUIRED)

find_package(rapidjson REQUIRED)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB_RECURSE INC_FILES include/pvpf/**/*.hpp include/core/**.hpp)

add_library(algorithm SHARED algorithm.cpp algorithm.h)
target_include_directories(algorithm PRIVATE ${OpenCV_INCLUDE_DIRS})
target_include_directories(algorithm PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(algorithm PRIVATE ${OpenCV_LIBS})

add_library(io_lib SHARED io_lib.h io_lib.cpp)
target_include_directories(io_lib PRIVATE ${OpenCV_INCLUDE_DIRS})
target_include_directories(io_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(io_lib PRIVATE ${OpenCV_LIBS})
