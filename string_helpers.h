#pragma once
#include <algorithm>
#include <cctype>
#include <string>

using std::string; using std::transform; using std::reverse;
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

inline string reverse(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

inline string trim(const string& s)
{
    auto first = s.find_first_not_of(' ');
    auto last = s.find_last_not_of(' ');
    return s.substr(first, (last - first + 1));
}


