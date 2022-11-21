---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-DPL_1_D.test.cpp
    title: verify/AOJ-DPL_1_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/longest-increasing-subsequence.hpp\"\ntemplate<class\
    \ T>\nint lis(const vector<T> &a, bool strict){\n  vector<T> l;\n  int n = a.size();\n\
    \n  if(strict){\n    for(int i = 0; i < n; ++i){\n      auto it = lower_bound(l.begin(),\
    \ l.end(), a[i]);\n      if(it == l.end()) l.push_back(a[i]);\n      else *it\
    \ = a[i];\n    }\n  }else{\n    for(int i = 0; i < n; ++i){\n      auto it = upper_bound(l.begin(),\
    \ l.end(), a[i]);\n      if(it == l.end()) l.push_back(a[i]);\n      else *it\
    \ = a[i];\n    }\n  }\n  return l.size();\n}\n"
  code: "#pragma once\ntemplate<class T>\nint lis(const vector<T> &a, bool strict){\n\
    \  vector<T> l;\n  int n = a.size();\n\n  if(strict){\n    for(int i = 0; i <\
    \ n; ++i){\n      auto it = lower_bound(l.begin(), l.end(), a[i]);\n      if(it\
    \ == l.end()) l.push_back(a[i]);\n      else *it = a[i];\n    }\n  }else{\n  \
    \  for(int i = 0; i < n; ++i){\n      auto it = upper_bound(l.begin(), l.end(),\
    \ a[i]);\n      if(it == l.end()) l.push_back(a[i]);\n      else *it = a[i];\n\
    \    }\n  }\n  return l.size();\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/longest-increasing-subsequence.hpp
  requiredBy: []
  timestamp: '2022-11-21 18:32:34+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-DPL_1_D.test.cpp
documentation_of: dp/longest-increasing-subsequence.hpp
layout: document
redirect_from:
- /library/dp/longest-increasing-subsequence.hpp
- /library/dp/longest-increasing-subsequence.hpp.html
title: dp/longest-increasing-subsequence.hpp
---
