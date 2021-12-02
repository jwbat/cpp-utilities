#pragma once
#include <chrono>
#include <thread>

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void sleep(int n) {
    sleep_for(milliseconds(n));
}
