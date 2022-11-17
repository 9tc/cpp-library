#pragma once
template <class T>
void insertionSort(vector<T> &target, bool print){
  int n = target.size();
  for(int i = 1; i < n; ++i){
    T v = target[i];
    int j = i-1;
    while(j >= 0 && target[j] > v){
      target[j+1] = target[j];
      --j;
    }
    target[j+1] = v;
    if(print){
      for(int i = 0; i < n; ++i){
        cout << (i ? " ": "") << target[i];
      }
      cout << endl;
    }
  }
}
