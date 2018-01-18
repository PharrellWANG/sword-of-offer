cmake_minimum_required(VERSION 3.8)
project(sword_of_offer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES App/TAppSword/main.cpp Lib/TLibSword/bitAdd.h)
add_executable(sword ${SOURCE_FILES})

set(SOURCE_FILES App/TAppPlayground/main.cpp Lib/TLibPlayground/bitAdd.h Lib/TLibConverter/decimalToBinary.h)
add_executable(playground ${SOURCE_FILES})

set(SOURCE_FILES App/TAppConverter/main.cpp Lib/TLibConverter/decimalToBinary.h Lib/TLibConverter/binaryToDecimal.h Lib/TLibConverter/decimalToAny.h)
add_executable(converter ${SOURCE_FILES})