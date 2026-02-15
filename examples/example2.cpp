#include <iostream>
#include "example_lib.h"

int main() {
    std::cout << "Example 2: More usage of the library" << std::endl;
    int a = 10, b = 20;
    std::cout << "Values: a=" << a << ", b=" << b << std::endl;
    std::cout << "add(a, b) = " << add(a, b) << std::endl;
    std::cout << "multiply(a, b) = " << multiply(a, b) << std::endl;
    return 0;
}
