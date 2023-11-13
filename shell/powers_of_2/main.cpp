#include <iostream>
#include <iomanip>
#include <bit>

using std::cout; using std::setw; using std::rotl;

unsigned int n = 1;

int main()
{
    for (size_t i{ 0 }; i < 31; ++i)
    {
        cout << setw(5) << i << ":"
             << setw(15) << n
             << "\n";
        n = rotl(n, 1);
    }


    cout << "\n";
    return 0;
}
