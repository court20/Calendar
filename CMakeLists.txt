cmake_minimum_required(VERSION 3.9)
project(Calendar_master)

set(CMAKE_CXX_STANDARD 11)

add_executable(Calendar_master
        cmake-build-debug/user.cpp
        day.cpp
        day.h
        event.h
        events.cpp
        sortAlg.cpp
        test.cpp
        user.cpp
        user.h)
