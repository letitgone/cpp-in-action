cmake_minimum_required(VERSION 3.20)
project(cpp-in-action)

set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_executable(myfirst start/myfirst.cpp)

#include_directories("stock00.h")

#add_executable(stock00h oop/stock/stock00.h)

add_executable(use_stock0 oop/stock/use_stock0.cpp)

#add_executable(stock1 oop/stock1/stock10.h)

add_executable(stock10 oop/stock1/stock10.cpp)

add_executable(usestock1 oop/stock1/usestock1.cpp)

#要生成的库
add_library(stock00h oop/stock/stock00.h)
#强制按照C++语言编译
set_target_properties(stock00h PROPERTIES LINKER_LANGUAGE CXX)
