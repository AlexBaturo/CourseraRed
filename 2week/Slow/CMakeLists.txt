cmake_minimum_required(VERSION 2.8)

project(slow)

set(SOURCE_EXE Slow.cpp)

set(HEADERS profiler.h)


add_executable(slow ${SOURCE_EXE}
                        ${HEADERS})
