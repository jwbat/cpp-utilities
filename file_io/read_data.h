#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>

using std::vector;
using std::ifstream; using std::ios;
using std::istreambuf_iterator;


void read_data(const char* const filename, vector<unsigned char>& input)
{
    ifstream infile(filename, ios::binary);
    if (infile.is_open())
    {
        input = vector<unsigned char>(
            istreambuf_iterator<char>(infile),
            istreambuf_iterator<char>()
        );
        infile.close();
    }
}
