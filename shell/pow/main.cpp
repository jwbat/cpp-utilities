#include "process_input.h"
#include <cmath>

int main(int argc, char** argv)
{

    if (argc != 3 || invalid_argument(argv[1]) || invalid_argument(argv[2])) 
    {
        cout << "invalid argument \n";
        return 0;
    }

    // BASE //////////////////////////////////////////////////
    long double base = arg_to_ld(argv[1]);

    // EXP /////////////////////////////////////////////////// 
    long double exp = arg_to_ld(argv[2]);

    ////////////////////////////////////////////////////////// 
    long double answer = pow(base, exp);
    ////////////////////////////////////////////////////////// 
    print(answer);
    ////////////////////////////////////////////////////////// 

    return 0;
}
