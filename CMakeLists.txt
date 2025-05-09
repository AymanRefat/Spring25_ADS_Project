cmake_minimum_required(VERSION 3.30)
project(ShortestPath)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
        ShortestPath
        graph.cpp
        main.cpp
        heap.cpp
        pair.cpp
        vector.cpp
)