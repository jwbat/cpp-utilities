#include <string>
#include <cctype>
#include <algorithm>

auto is_not_letter = [] (unsigned char c) { return !std::isalpha(c); };

void remove_punctuation(string& word) {
    word.erase(remove_if(word.begin(), word.end(), is_not_letter), word.end());
}
