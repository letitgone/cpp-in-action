cmake_minimum_required(VERSION 3.20)
project(cpp-in-action)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_executable(myfirst start/myfirst.cpp)

add_executable(stock00h oop/stock/stock00.h)

add_executable(stock00 oop/stock/stock00.cpp)

add_executable(use_stock0 oop/stock/use_stock0.cpp)

add_executable(stock1 oop/stock1/stock10.h)

add_executable(stock10 oop/stock1/stock10.cpp)

add_executable(usestock1 oop/stock1/usestock1.cpp)

set_target_properties(stock00h stock1 PROPERTIES LINKER_LANGUAGE CXX)
add_executable(error1 exception/error1.cpp)
