#include <iostream>
#include <iomanip>
#include <queue>

using std::cout; using std::setw;

template <typename T>
void print_queue(queue<T>& q)
{
    for (size_t i{ 0 }; i < q.size(); ++i)
    {
        cout << setw(10) << q.front();
        q.push(q.front());
        q.pop();
    }
    cout << "\n";
}
