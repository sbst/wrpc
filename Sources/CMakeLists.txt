cmake_minimum_required(VERSION 2.8.11)
project(wrpc)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

file(GLOB Sources *.cpp *.c)
add_library(${PROJECT_NAME} SHARED ${Sources})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
