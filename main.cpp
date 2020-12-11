#include <iostream>
#include <vector>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

long sumVector(std::vector<int> arr) {
    long acc = 0;
    for(int i = 0; i < arr.size(); i++) {
        acc += arr.at(i);
    }
    return acc;
}

TEST_CASE("Vector sum is computed correctly", "[vector]"){
    std::vector<int> sum1 = {1, 2, 3};
    REQUIRE(sumVector(sum1) == 6);
    REQUIRE_FALSE(sumVector(sum1) != 6);
}

TEST_CASE("This should fail", "[vector]") {
    std::vector<int> sum1 = {1, 1, 1};
    REQUIRE(sumVector(sum1) == 75);
}
