#include <iostream>
#include <iomanip>
#include <limits>

using std::cout; using std::setw;
using std::numeric_limits;

template <typename T>
void print_type_properties()
{
    cout << "\n\t  size: " << setw(24)  << sizeof(T)
         << "\n\tdigits: " << setw(24) << numeric_limits<T>::digits10
         << "\n\t   min: " << setw(24) << numeric_limits<T>::min()
         << "\n\t   max: " << setw(24) << numeric_limits<T>::max() << "\n";
}

auto newline = [] (int n = 1) { for (int i{ 0 }; i < n; ++i) cout << "\n"; };

int main()
{
    cout << "\033[1;31m";
    newline();
    
    cout << setw(40) << "   int";
    cout << "\n\t -------------------------------";
    print_type_properties<int>();

    newline(2);
    cout << setw(40) << "   long long";
    cout << "\n\t -------------------------------";
    print_type_properties<long long>();

    newline(2);
    cout << setw(40) << "   unsigned long / size_t";
    cout << "\n\t -------------------------------";
    print_type_properties<size_t>();

    newline(2);
    cout << setw(40) << "   double";
    cout << "\n\t -------------------------------";
    print_type_properties<double>();

    newline(2);
    cout << setw(40) << "   long double";
    cout << "\n\t -------------------------------";
    print_type_properties<long double>();

    newline(2);
    cout << setw(40) << "   float";
    cout << "\n\t -------------------------------";
    print_type_properties<float>();

    newline(2);
    cout << setw(40) << "   unsigned short";
    cout << "\n\t -------------------------------";
    print_type_properties<unsigned short>();

    newline(2);
    cout << setw(40) << "  bool";
    cout << "\n\t -------------------------------";
    print_type_properties<bool>();


    newline();
    return 0;
}

