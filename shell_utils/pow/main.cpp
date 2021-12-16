#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <vector>

using std::cout; using std::stold; using std::istringstream;
using std::powl; using std::setprecision; using std::string;
using std::vector; using std::getline; using std::showpoint;

long double convert(char* arg);  // arg can be fraction

int main(int argc, char** argv)
{
    if (argc != 3)
        return 0;

    long double base = convert(argv[1]);
    long double exp = convert(argv[2]);
    long double ans = powl(base, exp);

    cout << "\n\t" << setprecision(18) << ans
         << "\n\n";

    return 0;
}

long double convert(char* arg)
{
    istringstream iss(arg);
    string first, second;
    getline(iss, first, '/');
    getline(iss, second);
    long double numer = stold(first);
    long double denom;
    if (!second.empty())
        denom = stold(second);
    else denom = 1.0;
    return numer / denom;
}
