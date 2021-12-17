#include "sieve.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ranges>
#include <utility>
#include <tuple>

using std::cout; using std::setw; using std::stoul;
using std::tuple; using std::make_tuple;
using std::ranges::views::transform; using std::ranges::views::iota;
using std::ranges::views::reverse;


void print(vector<bool>& v, size_t start, size_t end);
void separator();
tuple<size_t, size_t> args_to_ul(int, char**);

int main(int argc, char** argv) {

    auto [start, end] = args_to_ul(argc, argv);
    size_t high = end > start ? end : start;
    vector<bool> v = sieve(high);
    print(v, start, end);

    return 0;
}

void print(vector<bool>& v, size_t start, size_t end)
{
    separator();
    size_t count{ 0 };
    if (end < start) 
    {
        for (auto n : iota(end, start + 1) | reverse)
            if (v[n])
            {
                if (count % 6 == 0) cout << "\n";
                cout << setw(12) << n;
                ++count;
            }
    }
    else
    {
        for (auto n : iota(start, end + 1))
            if (v[n])
            {
                if (count % 6 == 0) cout << "\n";
                cout << setw(12) << n;
                ++count;
            }
    }
    separator();
    cout << "\n\t" << count << " primes between "
         << (start < end ? start : end) << " and " 
         << (end > start ? end : start) << ".\n\n";
}


tuple<size_t, size_t> args_to_ul(int argc, char** argv)
{
    size_t lo; size_t hi;
    switch (argc)
    {
        case (2):
            lo = 0;
            hi = stoul(argv[1]);
            break;
        case (3):
            lo = stoul(argv[1]);
            hi = stoul(argv[2]);
            break;
        default:
            lo = 0;
            hi = 100;
    }
    return make_tuple(lo, hi);
}

void separator() {
    cout << "\n\n   ";
    for (size_t i{ 0 }; i < 44; i++) cout << "--";
    cout << "\n";
}
