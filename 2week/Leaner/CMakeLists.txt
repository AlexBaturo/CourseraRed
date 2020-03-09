cmake_minimum_required(VERSION 2.8)

project(leaner)

set(SOURCE_EXE leaner.cpp)

set(HEADERS profiler.h)


add_executable(leaner ${SOURCE_EXE}
                        ${HEADERS})
