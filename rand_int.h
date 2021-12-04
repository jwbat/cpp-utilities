#pragma once
#include <random> 

auto random_int() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 9);
    return dist(mt);
}
