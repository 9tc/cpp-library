---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/lcm.hpp
    title: math/lcm.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_1_B.test.cpp
    title: verify/AOJ-ALDS1_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-NTL_1_C.test.cpp
    title: verify/AOJ-NTL_1_C.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
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
  timestamp: '2022-11-17 17:34:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-NTL_1_C.test.cpp
  - verify/AOJ-ALDS1_1_B.test.cpp
documentation_of: math/gcd.hpp
layout: document
redirect_from:
- /library/math/gcd.hpp
- /library/math/gcd.hpp.html
title: math/gcd.hpp
---
