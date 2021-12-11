#include "string_helpers.h"
#include <iostream>
#include <iomanip>
#include <string>

using std::cout; using std::setw;
auto print = [] (const auto& x) { cout << "\t" << x << "\n"; };
auto newline = [] (int n = 1) { for (int i{ 0 }; i < n; ++i) cout << "\n"; };

int main()
{

    string s1{ "once upon a time this story was lower case..." };
    string s2 = to_upper(s1);
    string s3 = to_lower(s2);
    string s4 = reverse(s3);
    newline(); print(s1); print(s2); print(s3); print(s4); print(s2);


    string s5{ "  leading and trailing extra spaces  " };
    string s6 = trim(s5);
    newline(); print(s5); print(s6);


    string s7{ "**********let\'s get **rid** of these *pesky* asterisks**********, shall we? ****hmmm?!" };
    string s8 = remove(s7, '*');
    newline(); print(s7); print(s8);
    newline();


    string s9{ "once upon time there lived a dragon" }; print(s9);
    vector<string> v = split(s9, ' ');
    cout << "\t[ ";
    for (auto s : v)
        cout << s << ", ";
    cout << "]";

    newline(2);
    return 0;
}
