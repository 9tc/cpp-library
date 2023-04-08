---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-DSL_1_B.test.cpp
    title: verify/AOJ-DSL_1_B.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data-structure/weighted-unionfind.hpp\"\ntemplate<class\
    \ T>\nstruct WeightedUnionFind{\n  vector<int> parent;\n  vector<int> rank;\n\
    \  vector<T> diffWeight;\n\n  WeightedUnionFind(int n, T unity) {\n    init(n,\
    \ unity);\n  }\n\n  void init(int n, T unity) {\n    parent.resize(n);\n    rank.resize(n);\n\
    \    diffWeight.resize(n);\n    for(int i = 0; i < n; ++i){\n      parent[i] =\
    \ i;\n      rank[i] = 0;\n      diffWeight[i] = unity;\n    }\n  }\n\n  int getRoot(int\
    \ x) {\n    if(parent[x] == x) return x;\n    int r = getRoot(parent[x]);\n  \
    \  diffWeight[x] += diffWeight[parent[x]];\n    return parent[x] = r;\n  }\n\n\
    \  T getWeight(int x){\n    getRoot(x);\n    return diffWeight[x];\n  }\n\n  bool\
    \ isSame(int x, int y) {\n    return getRoot(x) == getRoot(y);\n  }\n\n  bool\
    \ merge(int x, int y, T w) {\n    w += getWeight(x);\n    w -= getWeight(y);\n\
    \    x = getRoot(x);\n    y = getRoot(y);\n    if(x == y) return false;\n    if(rank[x]\
    \ < rank[y]) {\n      swap(x, y);\n      w = -w;\n    }\n    if(rank[x] == rank[y])\
    \ ++rank[x];\n    parent[y] = x;\n    diffWeight[y] = w;\n    return true;\n \
    \ }\n\n  T getDiff(int x, int y){\n    return getWeight(y) - getWeight(x);\n \
    \ }\n\n  int getSize(int x){\n    return -parent[getRoot(x)];\n  }\n};\n"
  code: "#pragma once\ntemplate<class T>\nstruct WeightedUnionFind{\n  vector<int>\
    \ parent;\n  vector<int> rank;\n  vector<T> diffWeight;\n\n  WeightedUnionFind(int\
    \ n, T unity) {\n    init(n, unity);\n  }\n\n  void init(int n, T unity) {\n \
    \   parent.resize(n);\n    rank.resize(n);\n    diffWeight.resize(n);\n    for(int\
    \ i = 0; i < n; ++i){\n      parent[i] = i;\n      rank[i] = 0;\n      diffWeight[i]\
    \ = unity;\n    }\n  }\n\n  int getRoot(int x) {\n    if(parent[x] == x) return\
    \ x;\n    int r = getRoot(parent[x]);\n    diffWeight[x] += diffWeight[parent[x]];\n\
    \    return parent[x] = r;\n  }\n\n  T getWeight(int x){\n    getRoot(x);\n  \
    \  return diffWeight[x];\n  }\n\n  bool isSame(int x, int y) {\n    return getRoot(x)\
    \ == getRoot(y);\n  }\n\n  bool merge(int x, int y, T w) {\n    w += getWeight(x);\n\
    \    w -= getWeight(y);\n    x = getRoot(x);\n    y = getRoot(y);\n    if(x ==\
    \ y) return false;\n    if(rank[x] < rank[y]) {\n      swap(x, y);\n      w =\
    \ -w;\n    }\n    if(rank[x] == rank[y]) ++rank[x];\n    parent[y] = x;\n    diffWeight[y]\
    \ = w;\n    return true;\n  }\n\n  T getDiff(int x, int y){\n    return getWeight(y)\
    \ - getWeight(x);\n  }\n\n  int getSize(int x){\n    return -parent[getRoot(x)];\n\
    \  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/weighted-unionfind.hpp
  requiredBy: []
  timestamp: '2022-11-21 09:10:20+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-DSL_1_B.test.cpp
documentation_of: data-structure/weighted-unionfind.hpp
layout: document
redirect_from:
- /library/data-structure/weighted-unionfind.hpp
- /library/data-structure/weighted-unionfind.hpp.html
title: data-structure/weighted-unionfind.hpp
---
