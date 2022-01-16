#include <tuple>

using std::make_tuple;


auto get_rgb(int c)
{
    unsigned char red = (c & 0xFF000000) >> 24;
    unsigned char green = (c & 0x00FF0000) >> 16;
    unsigned char blue = (c & 0x0000FF00) >> 8;
    return make_tuple(red, green, blue);
}
