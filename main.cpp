#include <iostream>
#include <iomanip>
#include <string>
#include <random>


using std::cout; using std::setw; using std::string; using std::to_string;
using std::random_device;

auto color = [] (int n) { return "\033[38;5;" + to_string(n) + "m";  };
random_device rd;

int rand_int()
{
    return rd() % 10;
}

int main()
{
    cout << color(189) << "\n\t" 
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    "
         << rand_int() << "    " 
         << "\n";

    return 0;
}
