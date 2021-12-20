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

long double convert(char* arg);
void print(long double ans);
bool has_bad_chars(char* argv);
pair<string, string> split(char* arg);

int main(int argc, char** argv)
{
    if (argc != 3 || has_bad_chars(argv[1]) || has_bad_chars(argv[2])) 
        return 0;

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
    if (second.size() == 0) denom = 1.0;
    else denom = stold(second);

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

bool has_bad_chars(char* argv)
{
    string s{ argv };
    auto [first, second] = split(argv);
    if (first.size() == 0) 
        return true;
    auto pattern {R"(^[^\d\.]$)"s};
    auto rx = regex{ pattern };
    return regex_match(first, rx) || regex_match(second, rx);
}

void print(long double ans)
{
    cout << "\n\t" << setprecision(18) << ans
         << "\n\n";
}
