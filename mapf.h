#include <algorithm>
#include <utility>
#include <vector>
#include <map>

using std::vector; using std::transform; using std::begin; using std::end;
using std::forward; using std::map;

template <typename F, typename R>
R mapf(F&& func, R range)
{
    transform(begin(range), end(range), begin(range), forward<F>(func));
    return range;
}

template <typename F, typename T, typename U>
map<T, U> mapf(F&& f, const map<T, U>& m)
{
    map<T, U> r;
    for (const auto kvp : m)
        r.insert(f(kvp));
    return r;
}
