cmake_minimum_required(VERSION 3.17.0)
project(yahtzee)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_C_COMPILER "gcc")

include(CTest)
add_subdirectory(external)
add_subdirectory(tst)

add_executable(yahtzee src/yahtzee.c)