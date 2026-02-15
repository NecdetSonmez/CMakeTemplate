# CMakeTemplate

A template CMake repository with modern CMake practices.

## Features

- **Organized structure**: Separate directories for source (`src`), headers (`inc`), tests (`test`), and examples (`examples`)
- **Modern CMake**: Uses `CMAKE_CURRENT_SOURCE_DIR` for all path references
- **FetchContent example**: Demonstrates using FetchContent to fetch doctest for testing
- **find_package example**: Shows how to use find_package with Boost (optional dependency)
- **Library-based**: Builds a library from source files and links it to all examples and tests

## Directory Structure

```
CMakeTemplate/
├── CMakeLists.txt          # Main CMake configuration
├── src/                    # Library source files
│   └── example_lib.cpp
├── inc/                    # Public header files
│   └── example_lib.h
├── test/                   # Unit tests
│   ├── CMakeLists.txt
│   └── example_test.cpp
└── examples/               # Example applications
    ├── CMakeLists.txt
    ├── example1.cpp
    └── example2.cpp
```

## Building

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Running Tests

```bash
cd build
ctest --output-on-failure
```

Or run the test executable directly:
```bash
./test/example_test
```

## Running Examples

```bash
cd build
./examples/example1
./examples/example2
```

## Dependencies

- CMake 3.14 or higher
- C++17 compatible compiler
- Boost (optional) - will be automatically detected if available

### Automatic Dependencies

The following dependencies are automatically fetched using CMake's FetchContent:
- doctest (v2.4.11) - for testing
