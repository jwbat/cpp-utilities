#ifndef VARIADIC_SUM_H
#define VARIADIC_SUM_H

/*
 * Sum -- Variadic Template
*/
template <typename T>
constexpr T sum(T x) {
    return x;
}

template <typename T, typename... Args>
constexpr T sum(T x, Args... args) {
    return x + sum(args...);
}

/*
 * Sum -- Fold Expression
*/
template <typename... T>
constexpr auto sum2(T... args) {
    return (... + args);
}


#endif
