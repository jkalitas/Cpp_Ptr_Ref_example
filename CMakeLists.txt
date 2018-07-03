cmake_minimum_required(VERSION 3.10)
project(cpp)

set(CMAKE_CXX_STANDARD 11)
set(HEADER_FILES Person.h Student.h)
set(CPP_FILES Person.cpp Student.cpp)

add_executable(cpp main.cpp ${HEADER_FILES} ${CPP_FILES})