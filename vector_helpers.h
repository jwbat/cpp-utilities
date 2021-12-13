#include <vector>
#include <utility>

using std::vector; using std::forward;


/*
 *    usage: push_back(v, 1, 2, 3, ...);
*/
template <typename T, typename... Ts>
void push_back(vector<T>& v, Ts&&... values)
{
    (v.push_back(forward<Ts>(values)), ... );
}
