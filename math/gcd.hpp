#pragma once
template <class T>
T GCD(T a, T b){
  if(b == 0) return a;
  return GCD(b, a % b);
}
