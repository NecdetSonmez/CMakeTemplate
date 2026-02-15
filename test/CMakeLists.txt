enable_testing()

# Test executable
add_executable(example_test "${CMAKE_CURRENT_SOURCE_DIR}/example_test.cpp")

# Link the library and doctest
target_link_libraries(example_test PRIVATE 
    example_lib
    doctest::doctest
)

# Add test
add_test(NAME example_test COMMAND example_test)
