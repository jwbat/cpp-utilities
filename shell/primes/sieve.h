/*
 *  An implementation of the Sieve of Eratosthenes
*/

#include <vector>
#include <cmath>

using std::vector; using std::sqrt;

/*
 *  generates a vector with true at indices that
 *  are prime numbers and false elsewhere
*/

vector<bool> sieve(int N) {
    vector<bool> v(++N, true);
    v.at(0) = false;
    v.at(1) = false;
    int j, k;
    for (int i{ 2 }; i < static_cast<int>(sqrt(N) + 1); ++i) {
        if (v[i]) {
            k = 0;
            j = i * i;
            while (j < N) {
                v[j] = false;
                ++k;
                j = (i * i) + (i * k);
            }
        }
    }
    return v;
}
