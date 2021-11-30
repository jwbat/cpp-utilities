#include <iostream>
#include <iomanip>

using std::cout;

template <typename T, size_t N>
void print_array(array<T, N>& arr) {
    for (size_t i{ 0 }; i < arr.size(); ++i) {
        if ((i % 10) == 0) cout << "\n";
        cout << setw(6) << arr[i];
    }
    cout << "\n";
}
