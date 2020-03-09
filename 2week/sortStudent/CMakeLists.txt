cmake_minimum_required(VERSION 2.8)	

project(sort_students)

set(SOURCE_EXE sort_students.cpp)

set(HEADERS student.h
            profiler.h
            test_runner.h)


add_executable(compare ${SOURCE_EXE}
			${HEADERS})		
