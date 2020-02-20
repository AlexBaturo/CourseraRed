cmake_minimum_required(VERSION 3.14)
project(sort_by)

set(SOURCES update_field.cpp )
set(HEADERS airline_ticket.h test_runner.h)
add_executable(main
               ${SOURCES}
               ${HEADERS})
