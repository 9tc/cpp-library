#pragma once
struct UnionFind {
  vector<int> parent;
  vector<int> rank;

  UnionFind(int n) {
    init(n);
  }

  void init(int n) {
    parent.resize(n);
    rank.resize(n);
    for(int i = 0; i < n; ++i){
      parent[i] = i;
      rank[i] = 0;
    }
  }

  int getRoot(int x) {
    if(parent[x] == x) return x;

    return parent[x] = getRoot(parent[x]);
  }

  bool isSame(int x, int y) {
    return getRoot(x) == getRoot(y);
  }

  bool merge(int x, int y) {
    x = getRoot(x);
    y = getRoot(y);
    if(x == y) return false;
    if(rank[x] < rank[y]) swap(x, y);
    if(rank[x] == rank[y]) ++rank[x];
    parent[y] = x;
    return true;
  }

  vector<vector<int>> getGroups(){
    int n = rank.size();
    vector<vector<int>> rest(n), res;
    for(int i = 0; i < n; ++i) rest[getRoot(i)].push_back(i);
    for(int i = 0; i < n; ++i) if(rest[i].size()) res.push_back(rest[i]);
    return res;
  }
};
