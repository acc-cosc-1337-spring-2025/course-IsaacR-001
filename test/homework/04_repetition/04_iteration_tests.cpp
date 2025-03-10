#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test factorial function") {
    SECTION("Factorial of 3") {
        REQUIRE(factorial(3) == 6);
    }
    SECTION("Factorial of 5") {
        REQUIRE(factorial(5) == 120);
    }
    SECTION("Factorial of 6") {
        REQUIRE(factorial(6) == 720);
    }
}

TEST_CASE("Test gcd function") {
    SECTION("GCD of 5 and 15") {
        REQUIRE(gcd(5, 15) == 5);
    }
    SECTION("GCD of 21 and 28") {
        REQUIRE(gcd(21, 28) == 7);
    }
    SECTION("GCD of 25 and 100") {
        REQUIRE(gcd(25, 100) == 25);
    }
}