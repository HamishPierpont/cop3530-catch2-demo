#include "../src/functions.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Vector sum is computed correctly", "[vector]"){
    std::vector<int> sum1 = {1, 2, 3};
    REQUIRE(sumVector(sum1) == 6);
    REQUIRE_FALSE(sumVector(sum1) != 6);
}

TEST_CASE("This should fail", "[vector][fails_on_purpose]") {
    std::vector<int> sum2 = {1, 1, 1};
    REQUIRE(sumVector(sum2) == 75); //Inside part evaluates to false, so this test will fail
}

TEST_CASE("Vector sum modulo n should be computed correctly", "[vector][modulo]") {
    std::vector<int> sum3 = {1, 2, 3};
    REQUIRE(sumVectorModN(sum3, 5) == 1);
    REQUIRE(sumVectorModN(sum3, 4) == 2);
    REQUIRE_FALSE(sumVectorModN(sum3, 1) == 1); //Any number mod 1 is 0
    REQUIRE_THROWS(sumVectorModN(sum3, -1)); //Should throw a logic_error, so test should pass
}