/*
 *  print tuple variadic
*/
#pragma once

#include <tuple>
#include <iostream>

using std::tuple; using std::ostream;
using std::tuple_size; using std::get;

template<size_t> struct int_{};

template <class Tuple, size_t Pos>
ostream& print_tuple(ostream& out, const Tuple& t, int_<Pos> ) 
{
  out << get< tuple_size<Tuple>::value - Pos >(t) << ", ";
  return print_tuple(out, t, int_<Pos - 1>());
}

template <class Tuple>
ostream& print_tuple(ostream& out, const Tuple& t, int_<1> ) 
{
  return out << get<tuple_size<Tuple>::value - 1>(t);
}

template <class... Args>
ostream& operator<< (ostream& out, const tuple<Args...>& t) 
{
  out << '('; 
  print_tuple(out, t, int_<sizeof...(Args)>()); 
  return out << ')';
}
