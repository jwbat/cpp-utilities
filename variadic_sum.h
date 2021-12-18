#pragma once

/*
 * Fold Expression
*/
template <typename... T>
constexpr auto sum(T... args)
{
    return (... + args);
}

/*
 * Variadic Template
*/
template <typename T>
constexpr T sum(T x)
{
    return x;
}

template <typename T, typename... Ts>
constexpr T sum(T head, Ts... rest)
{
    return head + sum(rest...);
}
