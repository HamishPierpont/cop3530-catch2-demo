#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
#include <functional>

long sumVector(std::vector<int> arr) {
    long acc = 0;
    for(int i = 0; i < arr.size(); i++) {
        acc += arr.at(i);
    }
    return acc;
}

long sumVectorModN(std::vector<int> arr, int n) {
    if (n <= 0) throw std::logic_error("Modular arithmetic undefined for non-positive integers!");
    return sumVector(arr) % n;
}

bool isSorted(std::vector<int> arr, bool ascending) {
    //Going to use lambda functions
    std::function<bool(int, int)> sortAscending = [](int a, int b) -> bool {
        return a <= b;
    }; 

    std::function<bool(int, int)> sortDescending = [](int a, int b) -> bool {
        return b <= a;
    };

    if (ascending) 
        return std::is_sorted(arr, sortAscending);
    else
        return std::is_sorted(arr, sortDescending);
};