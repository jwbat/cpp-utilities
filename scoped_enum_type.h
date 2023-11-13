/*
 *  return a scoped enum's underlying type
*/

#include <type_traits>
using std::underlying_type_t;

template <typename E>
constexpr auto toEnumType(E en) noexcept
{
    return static_cast<underlying_type_t<E>>(en);
}
