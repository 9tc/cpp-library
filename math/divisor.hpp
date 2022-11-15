#pragma once
template<class T>
set<T> getDivisors(T n){
  set<T> res;
  for(T i = 1; i * i <= n; ++i){
    if(n % i == 0){
      res.insert(i);
      res.insert(n / i);
    }
  }
  return res;
}
