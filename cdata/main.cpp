#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::string;
using std::setw;

int main() {

    cout << "\n" << setw(25) << "type"                 << setw(10) << "size"
         << "\n" << setw(25) << "----"                 << setw(10) << "----"
         << "\n" << setw(25) << "bool:"                << setw(10) << sizeof(bool)
         << "\n" << setw(25) << "char:"                << setw(10) << sizeof(char)
         << "\n" << setw(25) << "unsigned char:"       << setw(10) << sizeof(unsigned char)
         << "\n" << setw(25) << "signed char:"         << setw(10) << sizeof(signed char)
         << "\n" << setw(25) << "char8_t:"             << setw(10) << sizeof(char8_t)
         << "\n" << setw(25) << "short:"               << setw(10) << sizeof(short)
         << "\n" << setw(25) << "wchar_t:"             << setw(10) << sizeof(wchar_t)
         << "\n" << setw(25) << "float:"               << setw(10) << sizeof(float)
         << "\n" << setw(25) << "int:"                 << setw(10) << sizeof(int)
         << "\n" << setw(25) << "long:"                << setw(10) << sizeof(long)
         << "\n" << setw(25) << "double:"              << setw(10) << sizeof(double)
         << "\n" << setw(25) << "long long:"           << setw(10) << sizeof(long long)
         << "\n" << setw(25) << "long double:"         << setw(10) << sizeof(long double)
         << "\n\n";

    return 0;
}
