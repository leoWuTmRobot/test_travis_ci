cmake_minimum_required(VERSION 3.5)

project (test_ci)

add_compile_options(-std=c++14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_executable (test_ci src/fucetion.cpp src/main.cpp)

option(BUILD_TESTS "Build all tests." OFF)

if (BUILD_TESTS)

  add_executable (test_ci_gtest src/fucetion.cpp test/test.cpp)

  target_link_libraries(test_ci_gtest gtest pthread)
  add_test(UnitTests test_ci_gtest)
  set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/.codecov/cmake)

  if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
      include(CodeCoverage)
      setup_target_for_coverage(${PROJECT_NAME}_coverage test_ci_gtest coverage)

      SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
      SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"

endif() #BUILD_TESTS
