#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::string;
using std::setw;

int main() {

    cout << "\n"; 
    cout << "\n" << setw(25) << "sizeof bool:"         << setw(10) << sizeof(bool);
    cout << "\n" << setw(25) << "sizeof char:"         << setw(10) << sizeof(char);
    cout << "\n" << setw(25) << "sizeof short:"        << setw(10) << sizeof(short);
    cout << "\n" << setw(25) << "sizeof wchar_t:"      << setw(10) << sizeof(wchar_t);
    cout << "\n" << setw(25) << "sizeof int:"          << setw(10) << sizeof(int);
    cout << "\n" << setw(25) << "sizeof float:"        << setw(10) << sizeof(float);
    cout << "\n" << setw(25) << "sizeof double:"       << setw(10) << sizeof(double);
    cout << "\n" << setw(25) << "sizeof long long:"    << setw(10) << sizeof(long long);
    cout << "\n" << setw(25) << "sizeof long double:"  << setw(10) << sizeof(long double);
    cout << "\n\n";

    return 0;
}
