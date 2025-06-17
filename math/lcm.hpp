#include "../math/gcd.hpp"

template <class T>
inline T LCM(T a, T b){
  return a / GCD(a, b) * b;
}
