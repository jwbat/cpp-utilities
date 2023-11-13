#pragma once
#include <random> 
#include <chrono>
#include <thread>

using std::string; using namespace std::string_literals;
using std::array;


constexpr const char* colors[] 
{
    "\033[1;37m",       // white
    "\033[1;36m",       // cyan
    "\033[1;35m",       // purple
    "\033[1;34m",       // blue
    "\033[1;33m",       // yellow
    "\033[1;32m",       // green
    "\033[1;31m"        // red
};

auto random_int() 
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 9);
    return dist(mt);
}

auto random_color()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 6);
    return colors[dist(mt)];
}
