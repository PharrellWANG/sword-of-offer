cmake_minimum_required(VERSION 3.8)
project(sword_of_offer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lib/bitAdd.h)
add_executable(sword_of_offer ${SOURCE_FILES})