cmake_minimum_required(VERSION 3.26)
project(ABB)

set(CMAKE_CXX_STANDARD 17)

add_executable(ABB main.cpp
        src/Node.cpp
        src/Node.h
        src/BST.cpp
        src/BST.h)
