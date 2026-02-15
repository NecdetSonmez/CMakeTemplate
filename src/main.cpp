#include "core/example_app.hpp"
#include <iostream>

int main() {
    int x = 5;
    int y = 10;

    int sum = add(x, y);
    int product = multiply(x, y);

    std::cout << "Sum: " << sum << ", Product: " << product << std::endl;
    return 0;
}
