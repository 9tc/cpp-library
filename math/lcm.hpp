#include "../math/gcd.hpp"

#pragma once
template <class T>
inline T LCM(T a, T b){
  return a / GCD(a, b) * b;
}
