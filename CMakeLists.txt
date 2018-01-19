cmake_minimum_required(VERSION 3.8)
project(sword_of_offer)

set(CMAKE_CXX_STANDARD 11)

set(
  SOURCE_FILES1
  App/TAppSword/main.cpp
  Lib/TLibSword/BitwiseAdd.h
  Lib/TLibSword/ListNode.h
  Lib/TLibSword/TreeNode.h
  Lib/TLibSword/UglyNumber.h
)
add_executable(
  TAppSword
  ${SOURCE_FILES1}
)

set(
  SOURCE_FILES2
  App/TAppPlayground/main.cpp
  Lib/TLibPlayground/bitAdd.h
  Lib/TLibConverter/decimalToBinary.h
)
add_executable(
  TAppPlayground
  ${SOURCE_FILES2}
)

set(
  SOURCE_FILES3
  App/TAppConverter/main.cpp
  Lib/TLibConverter/decimalToBinary.h
  Lib/TLibConverter/binaryToDecimal.h
  Lib/TLibConverter/decimalToAny.h
)
add_executable(TAppConverter ${SOURCE_FILES3})

set(
  SOURCE_FILES4
  App/TAppSinglyLinkedList/main.cpp
  Lib/TLibSinglyLinkedList/singlyLinkedList.cpp
  Lib/TLibSinglyLinkedList/singlyLinkedList.h
)
add_executable(TAppSinglyLinkedList ${SOURCE_FILES4})