#include <iostream>
#include <regex>
#include <string>

using std::cout;  using std::string; using std::stoull;
using std::regex; using std::regex_match;
using namespace std::string_literals;

bool is_binary(char* argv)
{
    string s{ argv };
    auto pattern {R"([01]+)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

void print(auto& b)
{
    cout << b << "\n";
}
