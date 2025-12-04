cmake_minimum_required(VERSION 4.0)
project(libraryManagement)

set(CMAKE_CXX_STANDARD 20)

add_executable(libraryManagement main.cpp
        item.cpp
        item.h
        Book.cpp
        Book.h
        System.cpp
        System.h
        DVD.cpp
        DVD.h
        Audiobook.cpp
        Audiobook.h
        User.cpp
        User.h)
