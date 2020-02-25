cmake_minimum_required(VERSION 2.8)	

project(compare)

set(SOURCE_EXE deque.cpp)

set(HEADERS test_runner.h )


add_executable(compare ${SOURCE_EXE}
			${HEADERS})		
