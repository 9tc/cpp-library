---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-NTL_1_E.test.cpp
    title: verify/AOJ-NTL_1_E.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/extend-gcd.hpp\"\ntemplate< typename T >\nT extendGCD(T\
    \ a, T b, T &x, T &y){\n  T d = a;\n  if(b != 0){\n    auto t = extendGCD(b, a\
    \ % b, y, x);\n    d = t;\n    y -= (a / b) * x;\n  }else{\n    x = 1;\n    y\
    \ = 0;\n  }\n  return d;\n}\n"
  code: "template< typename T >\nT extendGCD(T a, T b, T &x, T &y){\n  T d = a;\n\
    \  if(b != 0){\n    auto t = extendGCD(b, a % b, y, x);\n    d = t;\n    y -=\
    \ (a / b) * x;\n  }else{\n    x = 1;\n    y = 0;\n  }\n  return d;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/extend-gcd.hpp
  requiredBy: []
  timestamp: '2022-12-30 22:29:44+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-NTL_1_E.test.cpp
documentation_of: math/extend-gcd.hpp
layout: document
redirect_from:
- /library/math/extend-gcd.hpp
- /library/math/extend-gcd.hpp.html
title: 拡張ユークリッドの互除法
---
