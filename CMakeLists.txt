cmake_minimum_required(VERSION 3.31)
project(NetoSTL2)

set(CMAKE_CXX_STANDARD 20)

add_executable(NetoSTL2
        firstTask/main.cpp
#        secondTask/main.cpp

        libio.cppm
)

target_sources(NetoSTL2
        PUBLIC
        FILE_SET all_my_modules TYPE CXX_MODULES FILES
        libio.cppm
)
