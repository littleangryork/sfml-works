cmake_minimum_required(VERSION 3.15)
project(sfml-works VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(sfml-works sourse/main.cpp)

target_link_libraries(sfml-works sfml-graphics sfml-audio sfml-network sfml-system sfml-window)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)