#include <iostream>
#include <regex>
#include <string>

using std::cout;  using std::string; using std::stoull;
using std::regex; using std::regex_match;
using namespace std::string_literals;

bool is_integer(char* argv)
{
    string s{ argv };
    auto pattern {R"([0-9]+)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

void print(auto& b)
{
    cout << b << "\n";
}
