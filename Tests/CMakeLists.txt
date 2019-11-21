cmake_minimum_required(VERSION 2.8.11)
project(wrpc-tests)

set (CMAKE_CXX_STANDARD 11)

file(GLOB Sources *.cpp *.c)


add_executable(${PROJECT_NAME} ${Sources})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} wrpc)