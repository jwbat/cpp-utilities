#include <fstream>
#include <string>
#include <vector>
#include <type_traits>

using std::string;
using std::ifstream; using std::ofstream;
using std::ios; using std::vector;
using std::is_standard_layout_v; using std::is_trivial_v;


template <typename T> 
requires is_standard_layout_v<T> && is_trivial_v<T>
void write_pod(const string filename, vector<T>& output)
{
    ofstream outfile(filename, ios::binary);
    if (outfile.is_open())
    {
        for (const auto& item : output)
            outfile.write(reinterpret_cast<const char*>(&item), sizeof(item));

        outfile.close();
    }
}


template <typename T> 
requires is_standard_layout_v<T> && is_trivial_v<T>
void read_pod(const string filename, vector<T>& input)
{
    ifstream infile(filename, ios::binary);
    if (infile.is_open())
    {
        while (true)
        {
            T object;
            infile.read(reinterpret_cast<char*>(&object), sizeof(object));
            if (infile.fail() || infile.eof())
                break;
            input.push_back(object);
        }
        infile.close();
    }
}
