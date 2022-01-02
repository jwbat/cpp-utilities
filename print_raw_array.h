#pragma once
#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

/*
 * auto* start = begin(xs)
 * auto* end = end(xs) 
*/

void print_raw_array(auto* start, auto* end) 
{
    cout << "\n";
    for (auto it = start; it != end; ++it) {
        cout << "  " << *it;
    }
    cout << "\n\n";
}


template <typename T>
void print_raw_array(const T* a, size_t k) 
{
    for (size_t i{ 0 }; i < k; ++i) {
        if (i % 10 == 0) cout << "\n";
        cout << setw(6) << a[i];
    }
    cout << "\n";
}
