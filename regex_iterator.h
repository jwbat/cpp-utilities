#include <iostream>
#include <string>
#include <regex>
#include <string>

using namespace std::string_literals;
using std::cout; using std::string;
using std::regex; using std::sregex_iterator; using std::smatch;
using std::distance;


string s{ "" };                     // string to be iterated over
auto pattern {R"(\bp\w+r\b)"s};     // pattern
auto rgx = regex{ pattern };        // regex object
smatch match;

auto start = sregex_iterator(s.cbegin(), s.cend(), rgx);
auto finish = sregex_iterator();

cout << "\n\n Found " << distance(start, finish) << " word(s). \n";

for (auto it = start; it != finish; ++it)
{
    smatch m = *it;
    cout << "\n\t" << m.str();
}
