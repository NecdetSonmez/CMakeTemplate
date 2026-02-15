#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "example_lib.h"

TEST_CASE("Testing add function") {
    CHECK(add(2, 3) == 5);
    CHECK(add(-1, 1) == 0);
    CHECK(add(0, 0) == 0);
}

TEST_CASE("Testing multiply function") {
    CHECK(multiply(2, 3) == 6);
    CHECK(multiply(-2, 3) == -6);
    CHECK(multiply(0, 5) == 0);
}
