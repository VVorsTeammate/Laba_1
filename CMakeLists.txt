cmake_minimum_required(VERSION 3.8)

project(
    Laba_one
    LANGUAGES CXX)

set(CMAKe_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_library(enter STATIC libraries/enter.cpp)
add_library(gauss STATIC libraries/gauss.cpp)
add_library(matrix STATIC libraries/matrix.cpp)

include_directories(libraries)

add_executable(main main.cpp)

target_link_libraries(main enter)
target_link_libraries(main gauss)
target_link_libraries(main matrix)