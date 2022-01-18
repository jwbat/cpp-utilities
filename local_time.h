#include <iostream>
#include <iomanip>
#include <chrono>

using std::cout; using std::chrono::system_clock;
using std::localtime; using std::put_time;

inline void print_time()
{
    auto now = system_clock::now();
    auto stime = system_clock::to_time_t(now);
    auto ltime = localtime(&stime);
    cout << put_time(ltime, "%c") << "\n";
}
