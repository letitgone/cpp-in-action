cmake_minimum_required(VERSION 3.20)
project(cpp-in-action)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_executable(myfirst start/myfirst.cpp)

add_executable(stock00h oop/stock00.h)

add_executable(stock00 oop/stock00.cpp)

add_executable(usestock0 oop/usestock0.cpp)

add_executable(stock1 oop/stock10.h)

add_executable(stock10 oop/stock10.cpp)

add_executable(usestock1 oop/usestock1.cpp)
