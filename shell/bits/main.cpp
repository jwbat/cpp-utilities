#include "helpers.h"
#include <bitset>

using std::bitset;

int main(int argc, char** argv)
{
    if (argc != 2 || !is_integer(argv[1]) || strlen(argv[1]) > 19) 
    {
        cout << "invalid argument \n";
        return 0;
    }


    bitset<64> b(stoull(argv[1]));

    string s = b.to_string();
    auto sub = s.substr(s.find('1'));
    print(sub);

    return 0;
}
