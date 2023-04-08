---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-ITP1_3_D.test.cpp
    title: verify/AOJ-ITP1_3_D.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/divisor.hpp\"\ntemplate<class T>\nset<T> getDivisors(T\
    \ n){\n  set<T> res;\n  for(T i = 1; i * i <= n; ++i){\n    if(n % i == 0){\n\
    \      res.insert(i);\n      res.insert(n / i);\n    }\n  }\n  return res;\n}\n"
  code: "#pragma once\ntemplate<class T>\nset<T> getDivisors(T n){\n  set<T> res;\n\
    \  for(T i = 1; i * i <= n; ++i){\n    if(n % i == 0){\n      res.insert(i);\n\
    \      res.insert(n / i);\n    }\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/divisor.hpp
  requiredBy: []
  timestamp: '2022-11-15 18:34:42+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-ITP1_3_D.test.cpp
documentation_of: math/divisor.hpp
layout: document
redirect_from:
- /library/math/divisor.hpp
- /library/math/divisor.hpp.html
title: 約数列挙
---
