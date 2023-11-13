#pragma once
#include <vector>

using std::vector;

void vrange(vector<int>& v, int lo, int hi, int step) {
    for (int i{ lo }; i <= (hi - lo + 1); i += step)
        v.push_back(i);
}
