cmake_minimum_required(VERSION 2.8)	

project(compare)

set(SOURCE_EXE sort_by.cpp)

set(HEADERS airline_ticket.h 
            test_runner.h )


add_executable(compare ${SOURCE_EXE}
			${HEADERS})		
