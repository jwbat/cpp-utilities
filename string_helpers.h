#pragma once
#include <algorithm>
#include <cctype>
#include <string>

using std::string; using std::transform; using std::reverse;
using std::toupper; using std::tolower; using std::remove_if;
using std::erase;


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

inline string remove(string s, const char c)
{
    auto start = remove_if(s.begin(), s.end(), [c] (const char c0) { return c == c0; });
    s.erase(start, s.end());
    return s;
}
