#include <vector>
#include <cmath>


using std::vector; using std::sqrt;

vector<bool> sieve(size_t N) {
    vector<bool> v(++N, true);
    v.at(0) = false;
    v.at(1) = false;
    int j, k;
    for (size_t i{ 2 }; i < static_cast<int>(sqrt(N) + 1); ++i) {
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

//void print_primes(vector<bool>& vec) {
//    separator();
//    size_t count{ 0 };
//    for (size_t i{ 0 }; i < vec.size(); ++i) {
//        if (vec[i]) {
//            if (count % 6 == 0) cout << "\n\t";
//            cout << setw(12) << i;
//            ++count;
//        }
//    }
//    separator();
//    cout << "\n\n (" << count << " primes) \n\n ";
//}
