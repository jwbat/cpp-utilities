#include <vector>
#include <cmath>


using std::vector; using std::sqrt;


vector<int> primes(size_t N)
{
    vector<bool> vb(++N, true);
    vb.at(0) = false;
    vb.at(1) = false;
    int j, k;
    for (int i{ 2 }; i < static_cast<int>(sqrt(N) + 1); ++i) {
        if (vb[i]) {
            k = 0;
            j = i * i;
            while (j < N) {
                vb[j] = false;
                ++k;
                j = (i * i) + (i * k);
            }
        }
    }
    vector<int> vi;
    for (int i{ 0 }; i < vb.size(); ++i)
        if (vb[i])
            vi.push_back(i);
    return vi;
}
