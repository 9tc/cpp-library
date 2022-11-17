#pragma once
template <class T>
bool isPrime(const T &t){
  if(t == 2) return true;
  for(T i = 2; i * i <= t; ++i){
    if(t % i == 0) return false;
  }
  return true;
}
