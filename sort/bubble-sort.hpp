#pragma once
template <class T>
int bubbleSort(vector<T> &target){
  int n = target.size();
  int res = 0;
  bool flg = true;
  while(flg){
    flg = false;
    for(int i = n-1; i > 0; --i){
      if(target[i] < target[i-1]){
        swap(target[i], target[i-1]);
        ++res;
        flg = true;
      }
    }
  }
  return res;
}
