cmake_minimum_required(VERSION 2.8.11)
project(wrpcpy)

set (CMAKE_CXX_STANDARD 11)

find_package(Boost 1.36.0 COMPONENTS python35 REQUIRED)

file(GLOB Sources *.cpp *.c)

#PYTHON_ADD_MODULE(${PROJECT_NAME} ${Sources})
add_library(${PROJECT_NAME} MODULE ${Sources})

target_include_directories(${PROJECT_NAME} PUBLIC /usr/include/python3.5)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${Boost_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} ${PYTHON_LIBRARIES} python3.5m boost_python35 wrpc)
