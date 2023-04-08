---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/LC-zalgorithm.test.cpp
    title: verify/LC-zalgorithm.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/z-algorithm.hpp\"\nvector<int> ZAlgorithm(string\
    \ &s){\n  int n = s.length();\n  vector<int> res(n);\n  res[0] = n;\n  int i =\
    \ 1, j = 0;\n  while(i < n){\n    while(i + j < n && s[j] == s[i + j]) ++j;\n\
    \    res[i] = j;\n\n    if(j == 0){\n      ++i;\n      continue;\n    }\n    int\
    \ k = 1;\n    while(k < j && k + res[k] < j){\n      res[i + k] = res[k], ++k;\n\
    \    }\n    i += k, j -= k;\n  }\n  return res;\n}\n"
  code: "vector<int> ZAlgorithm(string &s){\n  int n = s.length();\n  vector<int>\
    \ res(n);\n  res[0] = n;\n  int i = 1, j = 0;\n  while(i < n){\n    while(i +\
    \ j < n && s[j] == s[i + j]) ++j;\n    res[i] = j;\n\n    if(j == 0){\n      ++i;\n\
    \      continue;\n    }\n    int k = 1;\n    while(k < j && k + res[k] < j){\n\
    \      res[i + k] = res[k], ++k;\n    }\n    i += k, j -= k;\n  }\n  return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: string/z-algorithm.hpp
  requiredBy: []
  timestamp: '2022-12-30 22:47:10+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/LC-zalgorithm.test.cpp
documentation_of: string/z-algorithm.hpp
layout: document
redirect_from:
- /library/string/z-algorithm.hpp
- /library/string/z-algorithm.hpp.html
title: Z Algorithm
---
