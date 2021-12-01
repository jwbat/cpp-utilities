#pragma once
#include <iostream>
#include <iomanip>
#include <array>

using std::cout; using std::array;

template <typename T, size_t N>
void print_array(array<T, N>& arr) {
    for (size_t i{ 0 }; i < arr.size(); ++i) {
        if ((i % 10) == 0) cout << "\n";
        cout << setw(6) << arr[i];
    }
    cout << "\n";
}
