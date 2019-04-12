# cmake_minimum_required(VERSION <specify CMake version here>)
project(jNMS)

set(CMAKE_CXX_STANDARD 14)

add_executable(jNMS main.cpp)

include_directories(${CMAKE_SOURCE_DIR}/net-snmp)


