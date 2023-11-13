#include <numeric>

using std::forward; using std::move; using std::accumulate;

template <typename F, typename R, typename T>
constexpr T foldl(F&& f, R&& range, T init)
{
    return accumulate(
              begin(range),
              end(range),
              move(init),
              forward<F>(f)
            );
}
