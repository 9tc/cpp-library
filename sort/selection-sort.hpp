#pragma once
template <class T>
int selectionSort(vector<T> &target){
  int n = target.size();
  int res = 0;

  for(int i = 0; i < n-1; ++i){
    int it = min_element(target.begin() + i, target.end()) - target.begin();
    if(i != it){
      ++res;
      swap(target[i], target[it]);
    }
  }
  return res;
}
