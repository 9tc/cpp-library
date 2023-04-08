---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-ALDS1_1_C.test.cpp
    title: verify/AOJ-ALDS1_1_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/is-prime.hpp\"\ntemplate <class T>\nbool isPrime(const\
    \ T &t){\n  if(t == 2) return true;\n  for(T i = 2; i * i <= t; ++i){\n    if(t\
    \ % i == 0) return false;\n  }\n  return true;\n}\n"
  code: "#pragma once\ntemplate <class T>\nbool isPrime(const T &t){\n  if(t == 2)\
    \ return true;\n  for(T i = 2; i * i <= t; ++i){\n    if(t % i == 0) return false;\n\
    \  }\n  return true;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/is-prime.hpp
  requiredBy: []
  timestamp: '2022-11-17 17:56:55+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-ALDS1_1_C.test.cpp
documentation_of: math/is-prime.hpp
layout: document
redirect_from:
- /library/math/is-prime.hpp
- /library/math/is-prime.hpp.html
title: "\u7D20\u6570\u5224\u5B9A"
---
