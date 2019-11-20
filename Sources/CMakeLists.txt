cmake_minimum_required(VERSION 2.8.11)
project(wrpc)

set (CMAKE_CXX_STANDARD 11)

find_package(Boost 1.36.0 COMPONENTS python REQUIRED)

file(GLOB Sources *.cpp *.c)
add_executable(${PROJECT_NAME} ${Sources})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${Boost_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
