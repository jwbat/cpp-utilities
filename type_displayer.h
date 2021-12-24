template <typename T>
class TD;               // type displayer

const int ans = 5;

auto x = ans;
auto y = &x;

TD<decltype(x)> xType;  // elicit error msgs with type info
TD<decltype(y)> yType;  //   containing types for x and y
