#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "addition.h"

#include <cmath>

TEST_CASE("Returns sum of two numbers when two integers are passed") {
    REQUIRE(add(3, 4) == 7);
}

TEST_CASE("Returns integer value of the sum when one parameter is float or both parameters are float") {
    REQUIRE(add(3.5, 4.2) == 7);
}