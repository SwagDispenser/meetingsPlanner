cmake_minimum_required(VERSION 3.30)
project(oop)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop main.cpp
        User.cpp
        User.h
        Meeting.cpp
        Meeting.h
        Location.cpp
        Location.h
)
