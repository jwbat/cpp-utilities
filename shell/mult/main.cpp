#include <iostream>
#include <cstdlib>

using std::cout; using std::atof;


int main(int argc, char** argv)
{
    if (argc == 1)
        return 0;

    double product{ 1 };
    for (int i{ 1 }; i < argc; ++i)
        product *= atof(argv[i]);

    cout << "\n\t" << product
         << "\n\n";

    return 0;
}
