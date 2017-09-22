cmake_minimum_required(VERSION 3.8)
project(CPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        chapter1/farlongs.cpp
        chapter1/time.cpp
        chapter1/limits.cpp
        chapter1/fullname.cpp
        chapter1/lightyear.cpp
        chapter1/mice.cpp
        chapter1/temperature.cpp
        chapter1/years_to_month.cpp)

add_executable(CPP ${SOURCE_FILES})