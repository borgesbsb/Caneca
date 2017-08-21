cmake_minimum_required(VERSION 3.8)
project(Caneca)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lista.cpp Lista.h Dado.cpp Dado.h)
add_executable(Caneca ${SOURCE_FILES})