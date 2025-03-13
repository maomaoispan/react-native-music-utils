cmake_minimum_required(VERSION 3.4.1)
project(MusicUtils)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 14)

add_library(react-native-music-utils            SHARED
            ../cpp/react-native-music-utils.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
