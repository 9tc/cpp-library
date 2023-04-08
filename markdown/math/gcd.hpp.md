---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: math/lcm.hpp
    title: math/lcm.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-ALDS1_1_B.test.cpp
    title: verify/AOJ-ALDS1_1_B.test.cpp
  - icon: ':x:'
    path: verify/AOJ-NTL_1_C.test.cpp
    title: verify/AOJ-NTL_1_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/gcd.hpp\"\ntemplate <class T>\nT GCD(T a, T b){\n \
    \ if(b == 0) return a;\n  return GCD(b, a % b);\n}\n"
  code: "#pragma once\ntemplate <class T>\nT GCD(T a, T b){\n  if(b == 0) return a;\n\
    \  return GCD(b, a % b);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/gcd.hpp
  requiredBy:
  - math/lcm.hpp
  timestamp: '2022-11-17 17:44:39+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-ALDS1_1_B.test.cpp
  - verify/AOJ-NTL_1_C.test.cpp
documentation_of: math/gcd.hpp
layout: document
redirect_from:
- /library/math/gcd.hpp
- /library/math/gcd.hpp.html
title: 最大公約数(ユークリッドの互除法)
---
