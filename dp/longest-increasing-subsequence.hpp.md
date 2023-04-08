---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-DPL_1_D.test.cpp
    title: verify/AOJ-DPL_1_D.test.cpp
  - icon: ':x:'
    path: verify/LC-LongestIncreasingSubsequence.test.cpp
    title: verify/LC-LongestIncreasingSubsequence.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"dp/longest-increasing-subsequence.hpp\"\ntemplate<class\
    \ T>\nvector<T> lis(const vector<T> &a, bool strict = true){\n  int n = a.size();\n\
    \  vector<T> l;\n  vector<T> prev(n);\n\n  for(int i = 0; i < n; ++i){\n    auto\
    \ it = strict ? lower_bound(l.begin(), l.end(), a[i]) : upper_bound(l.begin(),\
    \ l.end(), a[i]);\n    prev[i] = it - l.begin();\n    if(it == l.end()) l.push_back(a[i]);\n\
    \    else *it = a[i];\n  }\n\n  int idx = l.size() - 1;\n  vector<T> res(l.size());\n\
    \  for(int i = n - 1; i >= 0; --i){\n    if(prev[i] == idx) res[idx--] = i;\n\
    \  }\n  return res;\n}\n"
  code: "template<class T>\nvector<T> lis(const vector<T> &a, bool strict = true){\n\
    \  int n = a.size();\n  vector<T> l;\n  vector<T> prev(n);\n\n  for(int i = 0;\
    \ i < n; ++i){\n    auto it = strict ? lower_bound(l.begin(), l.end(), a[i]) :\
    \ upper_bound(l.begin(), l.end(), a[i]);\n    prev[i] = it - l.begin();\n    if(it\
    \ == l.end()) l.push_back(a[i]);\n    else *it = a[i];\n  }\n\n  int idx = l.size()\
    \ - 1;\n  vector<T> res(l.size());\n  for(int i = n - 1; i >= 0; --i){\n    if(prev[i]\
    \ == idx) res[idx--] = i;\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/longest-increasing-subsequence.hpp
  requiredBy: []
  timestamp: '2023-01-14 10:54:35+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/LC-LongestIncreasingSubsequence.test.cpp
  - verify/AOJ-DPL_1_D.test.cpp
documentation_of: dp/longest-increasing-subsequence.hpp
layout: document
redirect_from:
- /library/dp/longest-increasing-subsequence.hpp
- /library/dp/longest-increasing-subsequence.hpp.html
title: "\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217"
---
