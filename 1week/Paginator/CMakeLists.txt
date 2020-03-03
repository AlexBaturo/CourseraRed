cmake_minimum_required(VERSION 2.8)

SET(CMAKE_CXX_COMPILER usr/bin/gcc-7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

project(compare)

set(SOURCE_EXE paginator.cpp)

set(HEADERS test_runner.h)

add_executable(compare ${SOURCE_EXE}
			${HEADERS})		
