#pragma once
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>

using std::string; using std::transform; using std::reverse;
using std::toupper; using std::tolower; using std::remove_if;
using std::erase; using std::stringstream; using std::getline;
using std::vector;


inline string to_upper(string s);
inline string to_lower(string s);
inline string reverse(string s);
inline void reverse(string& s);
inline string trim(const string& s);
inline string remove(string s, const char c);
inline vector<string> split(string s, const char delimiter);



// return new string upper case
inline string to_upper(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return toupper(c); });
    return s;
}

// return new string lower case
inline string to_lower(string s)
{
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    return s;
}

// return a new, reversed string
inline string reverse(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

// reverse string in place
inline void reverse(string& s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        ++i; --j;
    }
}

// return new string leading and trailing white spaces removed
inline string trim(const string& s)
{
    auto first = s.find_first_not_of(' ');
    auto last = s.find_last_not_of(' ');
    return s.substr(first, (last - first + 1));
}

// return new string all incidences of char removed
inline string remove(string s, const char c)
{
    auto start = remove_if(s.begin(), s.end(), [c] (const char c0) { return c == c0; });
    s.erase(start, s.end());
    return s;
}

// return vector of strings from string split on delimiter
inline vector<string> split(string s, const char delimiter)
{
    auto sstr = stringstream{ s };
    auto tokens = vector<string>{};
    string token;

    while (getline(sstr, token, delimiter))
        if (!token.empty()) tokens.push_back(token);

    return tokens;
}
