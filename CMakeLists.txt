cmake_minimum_required(VERSION 3.28)

project(grokking)

set(CMAKE_CXX_STANDARD 20)
find_package(GTest CONFIG REQUIRED)

add_subdirectory(lib)

enable_testing()
add_subdirectory(${CMAKE_SOURCE_DIR}/tests)