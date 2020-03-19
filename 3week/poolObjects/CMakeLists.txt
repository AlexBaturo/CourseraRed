cmake_minimum_required(VERSION 2.8)

project(objects_pool)

set(SOURCE_EXE objects_pool.cpp)

set(HEADERS test_runner.h)


add_executable(objects_pool ${SOURCE_EXE}
                         ${HEADERS})
