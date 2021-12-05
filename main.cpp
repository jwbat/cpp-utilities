#include "is_prime.h"
#include <iostream>
#include <iomanip>

using std::cout; using std::setw; using std::boolalpha;
void nl(int n = 1) { for (size_t i{ 0 }; i < n; ++i) cout << "\n"; }

int main() {
    nl();

    cout << boolalpha;
    cout << "2: " << is_prime(2) << "\n";
    cout << "3: " << is_prime(3) << "\n";
    cout << "4: " << is_prime(4) << "\n";
    cout << "5: " << is_prime(5) << "\n";
    cout << "6: " << is_prime(6) << "\n";
    cout << "7: " << is_prime(7) << "\n";
    cout << "8: " << is_prime(8) << "\n";

    nl();
    return 0;
}

