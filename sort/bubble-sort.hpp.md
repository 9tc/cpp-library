---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_2_A.test.cpp
    title: verify/AOJ-ALDS1_2_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"sort/bubble-sort.hpp\"\ntemplate <class T>\nint bubbleSort(vector<T>\
    \ &target){\n  int n = target.size();\n  int res = 0;\n  bool flg = true;\n  while(flg){\n\
    \    flg = false;\n    for(int i = n-1; i > 0; --i){\n      if(target[i] < target[i-1]){\n\
    \        swap(target[i], target[i-1]);\n        ++res;\n        flg = true;\n\
    \      }\n    }\n  }\n  return res;\n}\n"
  code: "#pragma once\ntemplate <class T>\nint bubbleSort(vector<T> &target){\n  int\
    \ n = target.size();\n  int res = 0;\n  bool flg = true;\n  while(flg){\n    flg\
    \ = false;\n    for(int i = n-1; i > 0; --i){\n      if(target[i] < target[i-1]){\n\
    \        swap(target[i], target[i-1]);\n        ++res;\n        flg = true;\n\
    \      }\n    }\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: sort/bubble-sort.hpp
  requiredBy: []
  timestamp: '2022-11-20 10:08:22+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-ALDS1_2_A.test.cpp
documentation_of: sort/bubble-sort.hpp
layout: document
redirect_from:
- /library/sort/bubble-sort.hpp
- /library/sort/bubble-sort.hpp.html
title: sort/bubble-sort.hpp
---
