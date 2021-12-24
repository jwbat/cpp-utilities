#pragma once
#include <random> 
#include <chrono>
#include <thread>
#include <vector>
#include <string>

using std::string; using namespace std::string_literals;
using std::this_thread::sleep_for; using std::vector;
using std::chrono::milliseconds;


vector colors{ "\033[1;37m"s, "\033[1;36m"s, "\033[1;35m"s, "\033[1;34m"s, "\033[1;33m"s, "\033[1;32m"s, "\033[1;31m"s };

void sleep(int n) 
{
    sleep_for(milliseconds(n));
}

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
