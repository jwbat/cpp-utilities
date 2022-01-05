#include "geomspace.h"
#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::setw;
using std::string;


int main()
{
    vector<double> v;
    geomspace(v, 1, 100, 10);

    cout << "\n" << std::showpoint;
    for (auto& n : v)
        cout << "\n" << setw(16) << log10(n) << "\t" << n;

    cout << "\n\n";
    return 0;
}
