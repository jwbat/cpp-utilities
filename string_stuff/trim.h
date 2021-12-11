#pragma once
#include <algorithm>
#include <cctype>
#include <string>

using std::string; using std::transform;
using std::begin; using std::end;
using std::toupper; using std::tolower;


inline string to_upper(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return toupper(c); });
    return s;
}

inline string to_lower(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    return s;
}






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
