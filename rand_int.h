#pragma once
#include <random> 

using std::random_device; using std::std::mt19937; using std::uniform_int_distribution

mt19937 mt;
random_device rd;

/*
    std::random_device 
        non-deterministic, high-quality randomness with less efficient performance.

    std::mt19937 
        std::uniform_int_distribution for efficient 
        generation of pseudo-random numbers with uniform distribution,
        suitable for most general-purpose applications.
*/


// non-deterministic
int rand_int()
{
    return rd() % 10;
}

// more efficient
auto random_int() 
{
    mt(rd());
    uniform_int_distribution<int> dist(0, 9);
    return dist(mt);
}
