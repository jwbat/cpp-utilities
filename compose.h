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


/*
 *  compose(f, g, h)(x)
*/
