# Example 1: Basic example
add_executable(example1 "${CMAKE_CURRENT_SOURCE_DIR}/example1.cpp")
target_link_libraries(example1 PRIVATE example_lib)

# Example 2: Another example
add_executable(example2 "${CMAKE_CURRENT_SOURCE_DIR}/example2.cpp")
target_link_libraries(example2 PRIVATE example_lib)
