cmake_minimum_required(VERSION 3.21)
project(module_25_1)

set(CMAKE_CXX_STANDARD 17)
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(module_25_1 src/main.cpp ${MY_INCLUDE_DIR}/tools.h ${MY_INCLUDE_DIR}/point.h)

target_include_directories(module_25_1 PUBLIC ${MY_INCLUDE_DIR})