#include <utility>
using std::forward;

template <typename F, typename G>
auto compose(F&& f, G&& g)
{
    return [=] (auto x) { return f(g(x)); };
}

template <typename F, typename... R>
auto compose(F&& f, R&&... r)
{
    return [=] (auto x) { return f(compose(r...)(x)); };
}

template <typename F, typename G>
auto compose(F&& f, G&& g)
{
    return [=] (auto x) { return f(g(x)); };
}

template <typename F, typename... R>
auto compose(F&& f, R&&... r)
{
    return [=] (auto x) { return f(compose(r...)(x)); };
}

template <typename F, typename G>
auto operator*(F&& f, G&& g)
{
    return compose(forward<F>(f), forward<G>(g));
}

template <typename F, typename... R>
auto operator*(F&& f, R&&... r)
{
    return operator*(forward<F>(f), r...);
}

/*
 *  auto ans = (f * g * h)(x);
*/
//              or
/*
 *  auto ans = compose(f, g, h)(x);
*/
