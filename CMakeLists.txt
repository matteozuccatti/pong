cmake_minimum_required(VERSION 3.16.3)
project(pong)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(include)
target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_libraries(${PROJECT_NAME} PUBLIC pongObjs)
