---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-NTL_1_A.test.cpp
    title: verify/AOJ-NTL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/prime-factorize.hpp\"\ntemplate <class T>\nmap<T, int>\
    \ primeFactorize(T n) {\n  map<T, int> res;\n  for(T i = 2; i * i <= n; ++i){\n\
    \    while(n % i == 0){\n      ++res[i];\n      n /= i;\n    }\n  }\n  if(n !=\
    \ 1) res[n] = 1;\n  return res;\n}\n"
  code: "#pragma once\ntemplate <class T>\nmap<T, int> primeFactorize(T n) {\n  map<T,\
    \ int> res;\n  for(T i = 2; i * i <= n; ++i){\n    while(n % i == 0){\n      ++res[i];\n\
    \      n /= i;\n    }\n  }\n  if(n != 1) res[n] = 1;\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: math/prime-factorize.hpp
  requiredBy: []
  timestamp: '2022-11-22 13:24:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-NTL_1_A.test.cpp
documentation_of: math/prime-factorize.hpp
layout: document
redirect_from:
- /library/math/prime-factorize.hpp
- /library/math/prime-factorize.hpp.html
title: math/prime-factorize.hpp
---
