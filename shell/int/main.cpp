#include "helpers.h"
#include <bitset>


int main(int argc, char** argv)
{
    if (argc != 2 || !is_binary(argv[1])) 
    {
        cout << "invalid argument \n";
        return 0;
    }

    auto x = stoull(argv[1], nullptr, 2);
    cout << "\n\t" << x
         << "\n\n";

    return 0;
}
