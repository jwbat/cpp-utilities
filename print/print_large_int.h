#include <iostream>
#include <iomanip>

using std::cout; using std::setw; using std::fixed; using std::setprecision;


void print_large_int(const long double& x){
    cout << fixed << setprecision(0) << "\t" << x
         <<  "\n\n";
}
