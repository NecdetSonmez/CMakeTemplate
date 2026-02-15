cmake_minimum_required(VERSION 3.14)
project(CMakeTemplate VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Library target
file(GLOB_RECURSE LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(example_lib ${LIB_SOURCES})

# Include directories
target_include_directories(example_lib PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
)

# Example: FetchContent usage for doctest
include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.11
)
FetchContent_MakeAvailable(doctest)

# Example: find_package for Boost (optional, won't fail if not found)
find_package(Boost QUIET)
if(Boost_FOUND)
    message(STATUS "Boost found: ${Boost_VERSION}")
    target_include_directories(example_lib PUBLIC ${Boost_INCLUDE_DIRS})
else()
    message(STATUS "Boost not found - continuing without it")
endif()

# Add subdirectories
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/test")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/examples")
