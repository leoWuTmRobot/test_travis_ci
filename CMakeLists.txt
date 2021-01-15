cmake_minimum_required(VERSION 3.5)

project (test_ci)

add_compile_options(-std=c++14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_executable (test_ci src/fucetion.cpp src/main.cpp)

add_executable (test_ci_gtest src/fucetion.cpp test/test.cpp)

target_link_libraries(test_ci_gtest gtest pthread)
