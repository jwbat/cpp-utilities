#include "process_input.h"


int main(int argc, char** argv)
{
    if (argc != 2 || invalid_argument(argv[1])) 
    {
        cout << "\n invalid argument \n\n";
        return 0;
    }

    char* arg = argv[1];

    if (is_valid_decimal(arg))
    {
        cout << "\n\t" << arg << "\n";
        return 0;
    }

    long double numer; long double denom;
    auto [first, second] = split(arg);

    numer = stold(first);
    denom = stold(second);

    if (denom != 0) 
        print(numer / denom);

    return 0;
}

