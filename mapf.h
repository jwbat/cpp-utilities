#include <algorithm>
#include <utility>
#include <vector>

using std::vector; using std::transform; using std::begin; using std::end;
using std::forward;

template <typename F, typename R>
R mapf(F&& func, R range)
{
    transform(begin(range), end(range), begin(range), forward<F>(func));
    return range;
}

