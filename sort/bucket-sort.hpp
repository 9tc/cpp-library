#pragma once
void bucketSort(vector<int> &target){
  int n = target.size();
  int mx = *max_element(target.begin(), target.end());
  assert(mx < 100000000);
  vector<int> bucket(mx+1, 0);
  for(int &t: target) ++bucket[t];

  int cur = 0;
  for(int i = 0; i <= mx; ++i){
    for(int j = 0; j < bucket[i]; ++j){
      target[cur] = i;
      ++cur;
    }
  }
}
