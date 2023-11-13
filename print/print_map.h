#pragma once
#include <map>
#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

template <typename T, typename U>
void print_map(const map<T, U>& m) {
    for (const auto& [key, val] : m) {
        cout << setw(5) << key 
             << setw(5) << " : " 
             << setw(5) << val 
             << "\n";
    }
}
