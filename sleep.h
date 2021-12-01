#pragma once
#include <chrono>
#include <thread>


void sleep(int n) {
    std::this_thread::sleep_for(std::milliseconds(n));
}
