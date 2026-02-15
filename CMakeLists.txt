cmake_minimum_required(VERSION 3.14)
project(CMakeTemplate VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.11
)
FetchContent_MakeAvailable(doctest)

find_package(Boost QUIET)
if(Boost_FOUND)
    message(STATUS "Boost found: ${Boost_VERSION}")
else()
    message(STATUS "Boost not found - continuing without it")
endif()

file(GLOB_RECURSE APP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(example_app ${APP_SOURCES})

target_include_directories(example_app PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    ${Boost_INCLUDE_DIRS}
)

target_link_libraries(example_app PUBLIC ${Boost_LIBRARIES})

