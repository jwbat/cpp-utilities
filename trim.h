#include <algorithm>
#include <cctype>
#include <string>

using std::string;

bool is_not_space(const char c) {
    return !isspace(static_cast<unsigned char>(c));
}

string trim_left(string s) {
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), is_not_space)
    );
    return s;
}

string trim_right(string s) {
    s.erase(
        find_if(s.rbegin(), s.rend(), is_not_space).base(),
        s.end()
    );
    return s;
}

string trim(string s) {
    return trim_left(trim_right(s));
}
