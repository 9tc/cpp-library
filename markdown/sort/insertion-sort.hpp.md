---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-ALDS1_1_A.test.cpp
    title: verify/AOJ-ALDS1_1_A.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"sort/insertion-sort.hpp\"\ntemplate <class T>\nvoid insertionSort(vector<T>\
    \ &target, bool print){\n  int n = target.size();\n  for(int i = 1; i < n; ++i){\n\
    \    T v = target[i];\n    int j = i-1;\n    while(j >= 0 && target[j] > v){\n\
    \      target[j+1] = target[j];\n      --j;\n    }\n    target[j+1] = v;\n   \
    \ if(print){\n      for(int i = 0; i < n; ++i){\n        cout << (i ? \" \": \"\
    \") << target[i];\n      }\n      cout << endl;\n    }\n  }\n}\n"
  code: "#pragma once\ntemplate <class T>\nvoid insertionSort(vector<T> &target, bool\
    \ print){\n  int n = target.size();\n  for(int i = 1; i < n; ++i){\n    T v =\
    \ target[i];\n    int j = i-1;\n    while(j >= 0 && target[j] > v){\n      target[j+1]\
    \ = target[j];\n      --j;\n    }\n    target[j+1] = v;\n    if(print){\n    \
    \  for(int i = 0; i < n; ++i){\n        cout << (i ? \" \": \"\") << target[i];\n\
    \      }\n      cout << endl;\n    }\n  }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: sort/insertion-sort.hpp
  requiredBy: []
  timestamp: '2022-11-17 17:09:10+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-ALDS1_1_A.test.cpp
documentation_of: sort/insertion-sort.hpp
layout: document
redirect_from:
- /library/sort/insertion-sort.hpp
- /library/sort/insertion-sort.hpp.html
title: 挿入ソート
