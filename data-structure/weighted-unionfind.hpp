#pragma once
template<class T>
struct WeightedUnionFind{
  vector<int> parent;
  vector<int> rank;
  vector<T> diffWeight;

  WeightedUnionFind(int n, T unity) {
    init(n, unity);
  }

  void init(int n, T unity) {
    parent.resize(n);
    rank.resize(n);
    diffWeight.resize(n);
    for(int i = 0; i < n; ++i){
      parent[i] = i;
      rank[i] = 0;
      diffWeight[i] = unity;
    }
  }

  int getRoot(int x) {
    if(parent[x] == x) return x;
    int r = getRoot(parent[x]);
    diffWeight[x] += diffWeight[parent[x]];
    return parent[x] = r;
  }

  T getWeight(int x){
    getRoot(x);
    return diffWeight[x];
  }

  bool isSame(int x, int y) {
    return getRoot(x) == getRoot(y);
  }

  bool merge(int x, int y, T w) {
    w += getWeight(x);
    w -= getWeight(y);
    x = getRoot(x);
    y = getRoot(y);
    if(x == y) return false;
    if(rank[x] < rank[y]) {
      swap(x, y);
      w = -w;
    }
    if(rank[x] == rank[y]) ++rank[x];
    parent[y] = x;
    diffWeight[y] = w;
    return true;
  }

  T getDiff(int x, int y){
    return getWeight(y) - getWeight(x);
  }

  int getSize(int x){
    return -parent[getRoot(x)];
  }
};
