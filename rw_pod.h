#include <fstream>
#include <string>
#include <vector>


using std::string;
using std::ifstream; using std::ofstream;
using std::ios; using std::vector;


template <typename T>
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

