---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/LC-Unionfind.test.cpp
    title: verify/LC-Unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data-structure/unionfind.hpp\"\nstruct UnionFind {\n  vector<int>\
    \ parent;\n  vector<int> rank;\n\n  UnionFind(int n) {\n    init(n);\n  }\n\n\
    \  void init(int n) {\n    parent.resize(n);\n    rank.resize(n);\n    for(int\
    \ i = 0; i < n; ++i){\n      parent[i] = i;\n      rank[i] = 0;\n    }\n  }\n\n\
    \  int getRoot(int x) {\n    if(parent[x] == x) return x;\n\n    return parent[x]\
    \ = getRoot(parent[x]);\n  }\n\n  bool isSame(int x, int y) {\n    return getRoot(x)\
    \ == getRoot(y);\n  }\n\n  bool merge(int x, int y) {\n    x = getRoot(x);\n \
    \   y = getRoot(y);\n    if(x == y) return false;\n    if(rank[x] < rank[y]) swap(x,\
    \ y);\n    if(rank[x] == rank[y]) ++rank[x];\n    parent[y] = x;\n    return true;\n\
    \  }\n\n  vector<vector<int>> getGroups(){\n    int n = rank.size();\n    vector<vector<int>>\
    \ rest(n), res;\n    for(int i = 0; i < n; ++i) rest[getRoot(i)].push_back(i);\n\
    \    for(int i = 0; i < n; ++i) if(rest[i].size()) res.push_back(rest[i]);\n \
    \   return res;\n  }\n};\n"
  code: "#pragma once\nstruct UnionFind {\n  vector<int> parent;\n  vector<int> rank;\n\
    \n  UnionFind(int n) {\n    init(n);\n  }\n\n  void init(int n) {\n    parent.resize(n);\n\
    \    rank.resize(n);\n    for(int i = 0; i < n; ++i){\n      parent[i] = i;\n\
    \      rank[i] = 0;\n    }\n  }\n\n  int getRoot(int x) {\n    if(parent[x] ==\
    \ x) return x;\n\n    return parent[x] = getRoot(parent[x]);\n  }\n\n  bool isSame(int\
    \ x, int y) {\n    return getRoot(x) == getRoot(y);\n  }\n\n  bool merge(int x,\
    \ int y) {\n    x = getRoot(x);\n    y = getRoot(y);\n    if(x == y) return false;\n\
    \    if(rank[x] < rank[y]) swap(x, y);\n    if(rank[x] == rank[y]) ++rank[x];\n\
    \    parent[y] = x;\n    return true;\n  }\n\n  vector<vector<int>> getGroups(){\n\
    \    int n = rank.size();\n    vector<vector<int>> rest(n), res;\n    for(int\
    \ i = 0; i < n; ++i) rest[getRoot(i)].push_back(i);\n    for(int i = 0; i < n;\
    \ ++i) if(rest[i].size()) res.push_back(rest[i]);\n    return res;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/unionfind.hpp
  requiredBy: []
  timestamp: '2022-11-14 17:03:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/LC-Unionfind.test.cpp
documentation_of: data-structure/unionfind.hpp
layout: document
redirect_from:
- /library/data-structure/unionfind.hpp
- /library/data-structure/unionfind.hpp.html
title: data-structure/unionfind.hpp
---
