template<class T>
vector<T> lis(const vector<T> &a, bool strict = true){
  int n = a.size();
  vector<T> l;
  vector<T> prev(n);

  for(int i = 0; i < n; ++i){
    auto it = strict ? lower_bound(l.begin(), l.end(), a[i]) : upper_bound(l.begin(), l.end(), a[i]);
    prev[i] = it - l.begin();
    if(it == l.end()) l.push_back(a[i]);
    else *it = a[i];
  }

  int idx = l.size() - 1;
  vector<T> res(l.size());
  for(int i = n - 1; i >= 0; --i){
    if(prev[i] == idx) res[idx--] = i;
  }
  return res;
}
