#include "../src/functions.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Vector sum is computed correctly", "[vector]"){
    std::vector<int> vec = {1, 2, 3};
    REQUIRE(sumVector(vec) == 6);
    REQUIRE_FALSE(sumVector(vec) != 6);
}

TEST_CASE("This fails", "[vector]") {
    std::vector<int> vec = {1, 2, 3};
    REQUIRE(sumVector(vec) == 75); //Inside part evaluates to false, so this test will fail
}

TEST_CASE("Vector sum modulo n is computed correctly", "[vector][modulo]") {
    std::vector<int> vec = {1, 2, 3};
    REQUIRE(sumVectorModN(vec, 5) == 1);
    REQUIRE(sumVectorModN(vec, 4) == 2);
    REQUIRE_FALSE(sumVectorModN(vec, 1) == 1); //Any number mod 1 is 0, expression is false, so assertion passes
    REQUIRE_THROWS(sumVectorModN(vec, -1)); //Should throw a logic_error, so test should pass
}