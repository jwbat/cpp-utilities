#include "sieve.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ranges>
#include <tuple>

using std::cout; using std::setw; using std::stoul;
using std::tuple; using std::make_tuple; using std::abs;
using std::ranges::views::iota; using std::ranges::views::reverse;

void print(vector<bool>& v, size_t start, size_t end);
tuple<size_t, size_t> args_to_ul(int argc, char** argv);
double percent(size_t count, size_t start, size_t end);
bool out_of_range(size_t i);

int main(int argc, char** argv) {

    auto [start, end] = args_to_ul(argc, argv);

    if (out_of_range(start) || out_of_range(end)) return 0;

    size_t high = end > start ? end : start;
    vector<bool> primes = sieve(high);

    print(primes, start, end);

    return 0;
}

void print(vector<bool>& v, size_t start, size_t end)
{
    cout << "\n";
    size_t count{ 0 };
    if (end < start) 
    {
        for (auto n : iota(end, start + 1) | reverse)
            if (v[n])
            {
                if (count % 4 == 0) cout << "\n";
                cout << setw(20) << n;
                ++count;
            }
    }
    else
    {
        for (auto n : iota(start, end + 1))
            if (v[n])
            {
                if (count % 4 == 0) cout << "\n";
                cout << setw(20) << n;
                ++count;
            }
    }
    cout << "\n\n\n   " << count << " primes between "
         << (start < end ? start : end) << " and " 
         << (end > start ? end : start) << "\n"
         <<  "   " << percent(count, start, end) << "%"
         << "\n\n";
}

double percent(size_t count, size_t start, size_t end)
{
    return  ((double) count / abs((int) end - (int) start)) * 100;
}

tuple<size_t, size_t> args_to_ul(int argc, char** argv)
{
    size_t start; size_t end;
    switch (argc)
    {
        case (2):                   // 1 command line arg given
            start = 0;
            end = stoul(argv[1]);
            break;
        case (3):                   // 2 command line args given
            start = stoul(argv[1]);
            end = stoul(argv[2]);
            break;
        default:                    // other
            start = 0;
            end = 100;
    }
    return make_tuple(start, end);
}

bool out_of_range(size_t i)
{
    if (i > 10'000'000'000) return true;
    return false;
}
