#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cout; using std::atof;


int main(int argc, char** argv)
{
    if (argc == 1)
        return 0;

    double sum{ 0 };
    for (int i{ 1 }; i < argc; ++i)
        sum += atof(argv[i]);

    cout << "\n\t" << sum
         << "\n\n";

    return 0;
}
