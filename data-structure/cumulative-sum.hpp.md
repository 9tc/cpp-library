---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/LC-StaticRangeSum.test.cpp
    title: verify/LC-StaticRangeSum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/cumulative-sum.hpp\"\ntemplate<class T>\n\
    struct StaticRangeSum{\n  vector<T> data;\n  vector<T> sum;\n  bool flgBuild;\n\
    \n  StaticRangeSum(){\n    flgBuild = false;\n  }\n\n  StaticRangeSum(int n):\
    \ data(n, 0), sum(n+1, 0){\n    flgBuild = false;\n  }\n\n  StaticRangeSum(vector<T>\
    \ &v): data(v), sum(v.size()+1, 0){\n    flgBuild = false;\n    build();\n  }\n\
    \n  void update(int it, T value){\n    flgBuild = false;\n    data[it] = value;\n\
    \  }\n\n  void add(int it, T value){\n    flgBuild = false;\n    data[it] += value;\n\
    \  }\n\n  void build(){\n    if(flgBuild) return;\n    for(int i = 0; i < data.size();\
    \ ++i){\n      sum[i+1] = sum[i] + data[i];\n    }\n    flgBuild = true;\n  }\n\
    \n  T get(int l, int r){\n    if(!flgBuild) build();\n    return sum[r] - sum[l];\n\
    \  }\n};\n"
  code: "template<class T>\nstruct StaticRangeSum{\n  vector<T> data;\n  vector<T>\
    \ sum;\n  bool flgBuild;\n\n  StaticRangeSum(){\n    flgBuild = false;\n  }\n\n\
    \  StaticRangeSum(int n): data(n, 0), sum(n+1, 0){\n    flgBuild = false;\n  }\n\
    \n  StaticRangeSum(vector<T> &v): data(v), sum(v.size()+1, 0){\n    flgBuild =\
    \ false;\n    build();\n  }\n\n  void update(int it, T value){\n    flgBuild =\
    \ false;\n    data[it] = value;\n  }\n\n  void add(int it, T value){\n    flgBuild\
    \ = false;\n    data[it] += value;\n  }\n\n  void build(){\n    if(flgBuild) return;\n\
    \    for(int i = 0; i < data.size(); ++i){\n      sum[i+1] = sum[i] + data[i];\n\
    \    }\n    flgBuild = true;\n  }\n\n  T get(int l, int r){\n    if(!flgBuild)\
    \ build();\n    return sum[r] - sum[l];\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/cumulative-sum.hpp
  requiredBy: []
  timestamp: '2022-11-13 19:54:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/LC-StaticRangeSum.test.cpp
documentation_of: data-structure/cumulative-sum.hpp
layout: document
redirect_from:
- /library/data-structure/cumulative-sum.hpp
- /library/data-structure/cumulative-sum.hpp.html
title: data-structure/cumulative-sum.hpp
---
