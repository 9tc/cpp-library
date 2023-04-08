---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-ALDS1_2_B.test.cpp
    title: verify/AOJ-ALDS1_2_B.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"sort/selection-sort.hpp\"\ntemplate <class T>\nint selectionSort(vector<T>\
    \ &target){\n  int n = target.size();\n  int res = 0;\n\n  for(int i = 0; i <\
    \ n-1; ++i){\n    int it = min_element(target.begin() + i, target.end()) - target.begin();\n\
    \    if(i != it){\n      ++res;\n      swap(target[i], target[it]);\n    }\n \
    \ }\n  return res;\n}\n"
  code: "#pragma once\ntemplate <class T>\nint selectionSort(vector<T> &target){\n\
    \  int n = target.size();\n  int res = 0;\n\n  for(int i = 0; i < n-1; ++i){\n\
    \    int it = min_element(target.begin() + i, target.end()) - target.begin();\n\
    \    if(i != it){\n      ++res;\n      swap(target[i], target[it]);\n    }\n \
    \ }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: sort/selection-sort.hpp
  requiredBy: []
  timestamp: '2022-11-20 12:58:30+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-ALDS1_2_B.test.cpp
documentation_of: sort/selection-sort.hpp
layout: document
redirect_from:
- /library/sort/selection-sort.hpp
- /library/sort/selection-sort.hpp.html
title: "\u9078\u629E\u30BD\u30FC\u30C8"
---
