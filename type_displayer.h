template <typename T>
class TD;

const int ans = 5;

auto x = ans;
auto y = &x;

TD<decltype(x)> xType;  // elicit error msg with type info
TD<decltype(y)> yType;  // elicit error msg with type info
