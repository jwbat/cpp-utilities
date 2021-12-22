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
pair<long double, long double> fraction_to_pair(char* argv);

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

pair<long double, long double> fraction_to_pair(char* argv)
{
    auto [first, second] = split(argv);
    long double numer = stold(first);
    long double denom = stold(second);
    return make_pair(numer, denom);
}

long double arg_to_ld(char* argv)
{
    long double value;
    if (is_valid_decimal(argv)) 
        value = stold(argv);
    else
    {
        auto [numer1, denom1] = fraction_to_pair(argv);
        if (denom1 == 0) return 0;
        value = numer1 / denom1;
    }
    return value;
}

void print(long double ans)
{
    cout << "\n\t" << setprecision(18) << ans << "\n\n";
}
