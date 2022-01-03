#pragma once
#include <chrono>

using namespace std::chrono;

auto start = high_resolution_clock::now();
auto stop = high_resolution_clock::now();
auto t = duration_cast<microseconds>(stop - start);
auto microseconds = t.count();

//=============================================================

template <typename Time = microseconds,
          typename Clock = high_resolution_clock>
struct perf_timer 
{
    template <typename F, typename... Args>
    static Time duration(F&& f, Args... args) {
        auto start = Clock::now();
        invoke(forward<F>(f), forward<Args>(args)...);
        auto end = Clock::now();
        return duration_cast<Time>(end - start);
    }
};
