cmake_minimum_required(VERSION 3.5.0)
project(app VERSION 0.1.0)

add_executable(01-binary-search src/01-binary-search/main.cpp)
add_executable(04-quicksort src/04-quicksort/main.cpp)
add_executable(06-bfs src/06-bfs/main.cpp)

set_property(TARGET 06-bfs PROPERTY CXX_STANDARD 23)
