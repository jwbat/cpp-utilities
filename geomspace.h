#pragma once
#include <cmath>
#include <vector>

using std::vector;
/*
 *   populate vector with N geometically-spaced values in [start, stop]
*/
void geomspace(vector<double>& v, double start, double stop, size_t N) 
{
    double a = log10(start);
    double b = log10(stop);
    double step = (b - a) / (N - 1);
    double el;
    for (size_t i{ 0 }; i < N; ++i) 
    {
        el = pow(10, a + (i * step));
        v.push_back(el);
    }
}
