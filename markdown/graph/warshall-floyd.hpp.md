---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-GRL_1_C.test.cpp
    title: verify/AOJ-GRL_1_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/warshall-floyd.hpp\"\ntemplate<typename T>\nvector<vector<T>>\
    \ warshallFloyd(vector<vector<T>> mat, T infty){\n  int n = mat.size();\n  for(int\
    \ k = 0; k < n; ++k){\n    for(int i = 0; i < n; ++i){\n      for(int j = 0; j\
    \ < n; ++j){\n        if(mat[i][k] == infty || mat[k][j] == infty) continue;\n\
    \        mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);\n      }\n    }\n\
    \  }\n  return mat;\n}\n"
  code: "template<typename T>\nvector<vector<T>> warshallFloyd(vector<vector<T>> mat,\
    \ T infty){\n  int n = mat.size();\n  for(int k = 0; k < n; ++k){\n    for(int\
    \ i = 0; i < n; ++i){\n      for(int j = 0; j < n; ++j){\n        if(mat[i][k]\
    \ == infty || mat[k][j] == infty) continue;\n        mat[i][j] = min(mat[i][j],\
    \ mat[i][k] + mat[k][j]);\n      }\n    }\n  }\n  return mat;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/warshall-floyd.hpp
  requiredBy: []
  timestamp: '2022-12-30 04:45:51+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-GRL_1_C.test.cpp
documentation_of: graph/warshall-floyd.hpp
layout: document
redirect_from:
- /library/graph/warshall-floyd.hpp
- /library/graph/warshall-floyd.hpp.html
title: 全点対最短経路(ワーシャルフロイド法)
---
