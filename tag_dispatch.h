#include <iostream>
#include <string>
#include <type_traits>

using std::cout; using std::string;
using std::remove_reference_t; using std::is_integral;
using std::true_type; using std::false_type; using std::forward;

template <typename T>
void logImpl(T&& name, false_type)
{
    cout << "non-integral: " << name << "\n";
}

template <typename T>
void logImpl(T&& name, true_type)
{
    cout << "integral: " << name << "\n";
}

template <typename T>
void log(T&& name)
{
    logImpl(
        forward<T>(name),
        is_integral<remove_reference_t<T>>()
    );
}
