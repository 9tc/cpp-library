---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-DSL_5_B.test.cpp
    title: verify/AOJ-DSL_5_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/cumulative-sum-2d.hpp\"\ntemplate<class T>\n\
    struct CumulativeSum2D{\n  vector<vector<T>> data;\n  vector<vector<T>> sum;\n\
    \  bool flgBuild;\n\n  CumulativeSum2D(){\n    flgBuild = false;\n  }\n\n  CumulativeSum2D(int\
    \ n): data(n, vector<T>(n, 0)), sum(n+1, vector<T>(n+1, 0)){\n    flgBuild = false;\n\
    \  }\n\n  CumulativeSum2D(int h, int w): data(h, vector<T>(w, 0)), sum(h+1, vector<T>(w+1,\
    \ 0)){\n    flgBuild = false;\n  }\n\n  CumulativeSum2D(vector<vector<T>> &v):\
    \ data(v), sum(v.size()+1, vector<T>(v[0].size()+1, 0)){\n    flgBuild = false;\n\
    \    build();\n  }\n\n  void update(int i, int j, T value){\n    flgBuild = false;\n\
    \    data[i][j] = value;\n  }\n\n  void update(pair<int,int> p, T value){\n  \
    \  update(p.first, p.second, value);\n  }\n\n  void add(int i, int j, T value){\n\
    \    flgBuild = false;\n    data[i][j] += value;\n  }\n\n  void add(pair<int,int>\
    \ p, T value){\n    add(p.first, p.second, value);\n  }\n\n  void imos(int x1,\
    \ int y1, int x2, int y2, T value){\n    add(x1, y1, value);\n    add(x1, y2,\
    \ -value);\n    add(x2, y1, -value);\n    add(x2, y2, value);\n  }\n\n  void imos(pair<int,int>\
    \ p1, pair<int,int> p2, T value){\n    imos(p1.first, p1.second, p2.first, p2.second,\
    \ value);\n  }\n\n  void build(){\n    if(flgBuild) return;\n    for(int i = 0;\
    \ i < data.size(); ++i){\n        for(int j = 0; j < data[i].size(); ++j){\n \
    \           sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + data[i][j];\n\
    \        }\n    }\n    flgBuild = true;\n  }\n\n  T get(int x1, int y1, int x2,\
    \ int y2){\n    if(!flgBuild) build();\n    return sum[x2][y2] - sum[x1][y2] -\
    \ sum[x2][y1] + sum[x1][y1];\n  }\n\n  T get(pair<int,int> l, pair<int,int> r){\n\
    \    return get(l.first, l.second, r.first, r.second);\n  }\n\n  T get(int i,\
    \ int j){\n    if(!flgBuild) build();\n    return sum[i][j];\n  }\n  \n  T get(pair<int,int>\
    \ p){\n    return get(p.first, p.second);\n  }\n};\n"
  code: "template<class T>\nstruct CumulativeSum2D{\n  vector<vector<T>> data;\n \
    \ vector<vector<T>> sum;\n  bool flgBuild;\n\n  CumulativeSum2D(){\n    flgBuild\
    \ = false;\n  }\n\n  CumulativeSum2D(int n): data(n, vector<T>(n, 0)), sum(n+1,\
    \ vector<T>(n+1, 0)){\n    flgBuild = false;\n  }\n\n  CumulativeSum2D(int h,\
    \ int w): data(h, vector<T>(w, 0)), sum(h+1, vector<T>(w+1, 0)){\n    flgBuild\
    \ = false;\n  }\n\n  CumulativeSum2D(vector<vector<T>> &v): data(v), sum(v.size()+1,\
    \ vector<T>(v[0].size()+1, 0)){\n    flgBuild = false;\n    build();\n  }\n\n\
    \  void update(int i, int j, T value){\n    flgBuild = false;\n    data[i][j]\
    \ = value;\n  }\n\n  void update(pair<int,int> p, T value){\n    update(p.first,\
    \ p.second, value);\n  }\n\n  void add(int i, int j, T value){\n    flgBuild =\
    \ false;\n    data[i][j] += value;\n  }\n\n  void add(pair<int,int> p, T value){\n\
    \    add(p.first, p.second, value);\n  }\n\n  void imos(int x1, int y1, int x2,\
    \ int y2, T value){\n    add(x1, y1, value);\n    add(x1, y2, -value);\n    add(x2,\
    \ y1, -value);\n    add(x2, y2, value);\n  }\n\n  void imos(pair<int,int> p1,\
    \ pair<int,int> p2, T value){\n    imos(p1.first, p1.second, p2.first, p2.second,\
    \ value);\n  }\n\n  void build(){\n    if(flgBuild) return;\n    for(int i = 0;\
    \ i < data.size(); ++i){\n        for(int j = 0; j < data[i].size(); ++j){\n \
    \           sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + data[i][j];\n\
    \        }\n    }\n    flgBuild = true;\n  }\n\n  T get(int x1, int y1, int x2,\
    \ int y2){\n    if(!flgBuild) build();\n    return sum[x2][y2] - sum[x1][y2] -\
    \ sum[x2][y1] + sum[x1][y1];\n  }\n\n  T get(pair<int,int> l, pair<int,int> r){\n\
    \    return get(l.first, l.second, r.first, r.second);\n  }\n\n  T get(int i,\
    \ int j){\n    if(!flgBuild) build();\n    return sum[i][j];\n  }\n  \n  T get(pair<int,int>\
    \ p){\n    return get(p.first, p.second);\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/cumulative-sum-2d.hpp
  requiredBy: []
  timestamp: '2023-07-29 15:01:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-DSL_5_B.test.cpp
documentation_of: data-structure/cumulative-sum-2d.hpp
layout: document
redirect_from:
- /library/data-structure/cumulative-sum-2d.hpp
- /library/data-structure/cumulative-sum-2d.hpp.html
title: data-structure/cumulative-sum-2d.hpp
---
