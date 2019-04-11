# cmake_minimum_required(VERSION <specify CMake version here>)
project(jNMS)

set(CMAKE_CXX_STANDARD 14)

add_executable(jNMS main.cpp )

include_directories(${CMAKE_SOURCE_DIR}/snmp++-3.3.11)
include_directories(${CMAKE_SOURCE_DIR}/snmp++-3.3.11/include/snmp_pp)
