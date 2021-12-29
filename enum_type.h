#include <tuple>
#include <type_traits>

using std::get; using std::make_tuple; using std::tuple;
using std::underlying_type_t;

/*
 *  return a scoped enum's underlying type
*/
template <typename E>
constexpr auto toEnumType(E enumerator) noexcept
{
    return static_cast<underlying_type_t<E>>(enumerator);
}
/*
 *      USAGE:
 *
 *  using Info = tuple<string, string, size_t>;
 *  Info info = make_tuple("james", "jb@mail.com", 10);
 *  enum class InfoFields { name, email, score }; // scoped enum

 *  auto value = get<toEnumType(InfoFields::email)>(info);
 *
*/
