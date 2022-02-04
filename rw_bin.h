#include <iostream>
#include <fstream>
#include <vector>
#include <functional>

using std::cout; using std::ios; using std::ios_base;
using std::ifstream; using std::ofstream;
using std::vector; using std::function;


bool write_data(const char* const filename, const char* const data, const size_t size);
size_t read_data(const char* const filename, function<char* (const size_t)> allocator);


bool write_data(const char* const filename, const char* const data, const size_t size)
{
    bool success = false;
    ofstream outfile(filename, ios::binary);
    if (outfile.is_open())
    {
        try
        {
            outfile.write(data, size);
            success = true;
        }
        catch(ios_base::failure&)
        {
            cout << "could not write data\n";
        }

        outfile.close();
    }
    return success;
}

size_t read_data(const char* const filename, function<char* (const size_t)> allocator)
{
    size_t readbytes{ 0 };
    ifstream infile(filename, ios::ate | ios::binary);
    if (infile.is_open())
    {
        auto length = static_cast<size_t>(infile.tellg());
        infile.seekg(0, ios_base::beg);
        auto buffer = allocator(length);
        try
        {
            infile.read(buffer, length);
            readbytes = static_cast<size_t>(infile.gcount());
        }
        catch(ios_base::failure&)
        {
            cout << "could not read data\n";
        }

        infile.close();
    }
    return readbytes;
}


/*
auto allocator = [&input] (const size_t length) {
    input.resize(length);
    return reinterpret_cast<char*>(input.data());
};
*/
