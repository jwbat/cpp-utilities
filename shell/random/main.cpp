#include "rand_int.h"
#include <iostream>
#include <cstdlib>

using std::cout; using std::flush; using std::ofstream;

int main(int argc, char** argv) {

    if (argc != 2) 
        return 0;
    int n = atoi(argv[1]);
    
    for (size_t i{ 0 }; i < n; ++i) 
        cout << random_int();
    cout << "\n";
//<< random_color() 
    return 0;
}
