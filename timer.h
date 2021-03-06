#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using std::cout; using std::flush; using std::thread;
using namespace std::chrono_literals;
using namespace std::chrono;

struct Timer
{
    time_point<high_resolution_clock> start, stop;
    duration<double> t;

    Timer()
    {
        start = high_resolution_clock::now();
    }
    ~Timer()
    {
        stop = high_resolution_clock::now();
        t = stop - start;
        double ms = t.count() * 1000;
        cout << "\n\t duration: " << ms << " ms\n\n";
    }
};

/*
void timed_func()
{
    Timer timer;    // start clock on construction
    // do func work
                    // stop clock  on destruction
}
 */
