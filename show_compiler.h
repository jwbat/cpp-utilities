#include <iostream>

using std::cout;

void show_compiler()
{
    #if defined _MSC_VER
        cout << "Visual C++ \n";
    #elif defined __clang__
        cout << "Clang \n";
    #elif defined __GNUG__
        cout << "GCC \n";
    #else
        cout << "Unknown compiler \n";
    #endif
}
