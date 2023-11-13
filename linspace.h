/*
 *   return a vector with N evenly-spaced doubles from start to stop inclusive
*/

#pragma once
#include <vector>

using std::cout; using std::setw; using std::vector;


vector<double> linspace(double start, double stop, size_t N) 
{
    vector<double> v;
    double step = (stop - start) / (N - 1);
    double d { start };
    for (size_t i{ 0 }; i < N; ++i) 
    {
        v.push_back(d);
        d += step;
    }
    return v;
}
