---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_6_A.test.cpp
    title: verify/AOJ-ALDS1_6_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"sort/bucket-sort.hpp\"\nvoid bucketSort(vector<int> &target){\n\
    \  int n = target.size();\n  int mx = *max_element(target.begin(), target.end());\n\
    \  assert(mx < 100000000);\n  vector<int> bucket(mx+1, 0);\n  for(int &t: target)\
    \ ++bucket[t];\n\n  int cur = 0;\n  for(int i = 0; i <= mx; ++i){\n    for(int\
    \ j = 0; j < bucket[i]; ++j){\n      target[cur] = i;\n      ++cur;\n    }\n \
    \ }\n}\n"
  code: "#pragma once\nvoid bucketSort(vector<int> &target){\n  int n = target.size();\n\
    \  int mx = *max_element(target.begin(), target.end());\n  assert(mx < 100000000);\n\
    \  vector<int> bucket(mx+1, 0);\n  for(int &t: target) ++bucket[t];\n\n  int cur\
    \ = 0;\n  for(int i = 0; i <= mx; ++i){\n    for(int j = 0; j < bucket[i]; ++j){\n\
    \      target[cur] = i;\n      ++cur;\n    }\n  }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: sort/bucket-sort.hpp
  requiredBy: []
  timestamp: '2022-11-29 19:08:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-ALDS1_6_A.test.cpp
documentation_of: sort/bucket-sort.hpp
layout: document
redirect_from:
- /library/sort/bucket-sort.hpp
- /library/sort/bucket-sort.hpp.html
title: sort/bucket-sort.hpp
---
