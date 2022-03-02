cmake_minimum_required(VERSION 3.12)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Calculator main.cpp)
add_subdirectory(./lib/googletest)
add_executable(tests ./tests/main_test.cpp)
target_include_directories(tests PUBLIC ./lib/googletest/include)
target_link_libraries(tests gtest gtest_main)
