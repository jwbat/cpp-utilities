#include <cstdlib>
#include <sstream>
#include <regex>
#include <string>
#include <utility>
#include <iostream>
#include <iomanip>

using std::cout; using std::setprecision; using std::string;
using std::stold; using std::istringstream;
using std::getline; using std::boolalpha;
using namespace std::string_literals;
using std::regex; using std::regex_constants::icase; using std::regex_match;
using std::pair; using std::make_pair;

bool is_valid_fraction(string&);
bool is_valid_decimal(string&);
bool invalid_argument(char* argv);
pair<string, string> split(char* arg);

pair<string, string> split(char* arg)
{
    string first, second;
    istringstream iss(arg);
    getline(iss, first, '/');
    getline(iss, second);
    return make_pair(first, second);;
}

bool is_valid_decimal(char* argv)
{
    string s{ argv };
    auto pattern {R"([+-]?([0-9]+\.?[0-9]*|\.[0-9]+))"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}
 
bool is_valid_fraction(char* argv)
{
    string s{ argv };
    auto pattern {R"(^[+-]?([0-9]+\.?[0-9]*|\.[0-9]+)/([0-9]+\.?[0-9]*|\.[0-9]+)$)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

bool invalid_argument(char* argv)
{
    return !(is_valid_decimal(argv) || is_valid_fraction(argv));
}

void print(long double ans)
{
    cout << "\n\t" << setprecision(18) << ans << "\n\n";
}
