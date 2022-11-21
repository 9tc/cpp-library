#pragma once
template<class T>
int lis(const vector<T> &a, bool strict){
  vector<T> l;
  int n = a.size();

  if(strict){
    for(int i = 0; i < n; ++i){
      auto it = lower_bound(l.begin(), l.end(), a[i]);
      if(it == l.end()) l.push_back(a[i]);
      else *it = a[i];
    }
  }else{
    for(int i = 0; i < n; ++i){
      auto it = upper_bound(l.begin(), l.end(), a[i]);
      if(it == l.end()) l.push_back(a[i]);
      else *it = a[i];
    }
  }
  return l.size();
}
