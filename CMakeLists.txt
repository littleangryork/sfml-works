cmake_minimum_required(VERSION 3.15)
project(sfml-works VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

add_executable(sfml-works sourse/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
