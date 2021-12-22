#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <regex>
#include <string>
#include <utility>

using std::cout; using std::stold; using std::istringstream;
using std::pow; using std::setprecision; using std::string;
using std::getline; using std::boolalpha;
using namespace std::string_literals;
using std::regex; using std::regex_constants::icase; using std::regex_match;
using std::pair; using std::make_pair;

bool is_decimal(const string&);
bool is_fraction(const string&);
long double convert(char* arg);
void print(long double ans);
bool invalid_argument(char* argv);
pair<string, string> split(char* arg);

int main(int argc, char** argv)
{

    if (argc != 3 || invalid_argument(argv[1]) || invalid_argument(argv[2])) 
    {
        cout << "invalid argument \n";
        return 0;
    }

    long double base = convert(argv[1]);
    long double exp = convert(argv[2]);

    long double ans = pow(base, exp);
    print(ans);

    return 0;
}

long double convert(char* arg)
{
    long double numer; long double denom;
    auto [first, second] = split(arg);

    numer = stold(first);
    
    if (second.empty()) denom = 1.0;
    else denom = stold(second);

    if (denom == 0) return 0;

    return numer / denom;
}

pair<string, string> split(char* arg)
{
    string first, second;
    istringstream iss(arg);
    getline(iss, first, '/');
    getline(iss, second);
    return make_pair(first, second);;
}
 
bool is_integer(char* argv)
{
    string s{ argv };
    auto pattern {R"(^\d+$)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

bool is_fraction(char* argv)
{
    string s{ argv };
    auto pattern {R"(^\d+/?\d+|\d+$)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

bool is_decimal(char* argv)
{
    string s{ argv };
    auto pattern {R"(^[\d]*\.[\d]+|[\d]+\.[\d]*$)"s};
    auto rx = regex{ pattern };
    return regex_match(s, rx);
}

bool invalid_argument(char* argv)
{
    return !(is_integer(argv) || is_decimal(argv) || is_fraction(argv));
}

void print(long double ans)
{
    cout << "\n\t" << setprecision(18) << ans << "\n\n";
}
