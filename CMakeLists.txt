cmake_minimum_required(VERSION 3.17)
project(LinkListPriorityQueue_solution)

if (APPLE)
    set(CMAKE_CXX_STANDARD 11)
endif()

# Precompile Catch2
add_library(catch2_main STATIC unit_tests/catch-main.cpp)
target_include_directories(catch2_main PUBLIC unit_tests/)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

# Basic tests
add_executable(Basic_PriorityQueue_Test PriorityQueueMain.cpp PriorityQueue.cpp PriorityQueue.h)
add_executable(LinkList_Problems.cpp LinkListProblems.cpp)

# Catch Tests
add_executable(PriorityQueue_Tests unit_tests/PriorityQueue_Tests.cpp PriorityQueue.cpp PriorityQueue.h)
add_executable(Sandbox_Tests unit_tests/Sandbox_Tests.cpp)


# Use precompiled header for catch so recompiles are faster
target_link_libraries(PriorityQueue_Tests catch2_main)
target_compile_definitions(PriorityQueue_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(PriorityQueue_Tests PRIVATE unit_tests/catch.hpp)

target_link_libraries(Sandbox_Tests catch2_main)
target_compile_definitions(Sandbox_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
target_precompile_headers(Sandbox_Tests PRIVATE unit_tests/catch.hpp)