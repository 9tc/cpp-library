---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/topological-sort.hpp\"\nvector<int> topologicalSort(const\
    \ Graph &g) {\n  const int n = g.size();\n  vector<int> deg(n);\n  for(int i =\
    \ 0; i < n; ++i){\n    for(auto &to: g[i]){\n      ++deg[to];\n    }\n  }\n  stack<int>\
    \ st;\n  for(int i = 0; i < n; ++i) {\n    if(deg[i] == 0){\n      st.emplace(i);\n\
    \    }\n  }\n  vector<int> res;\n  while(!st.empty()) {\n    auto p = st.top();\n\
    \    st.pop();\n    res.emplace_back(p);\n    for(auto &to: g[p]) {\n      if(--deg[to]\
    \ == 0) st.emplace(to);\n    }\n  }\n  return res;\n}\n"
  code: "vector<int> topologicalSort(const Graph &g) {\n  const int n = g.size();\n\
    \  vector<int> deg(n);\n  for(int i = 0; i < n; ++i){\n    for(auto &to: g[i]){\n\
    \      ++deg[to];\n    }\n  }\n  stack<int> st;\n  for(int i = 0; i < n; ++i)\
    \ {\n    if(deg[i] == 0){\n      st.emplace(i);\n    }\n  }\n  vector<int> res;\n\
    \  while(!st.empty()) {\n    auto p = st.top();\n    st.pop();\n    res.emplace_back(p);\n\
    \    for(auto &to: g[p]) {\n      if(--deg[to] == 0) st.emplace(to);\n    }\n\
    \  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/topological-sort.hpp
  requiredBy: []
  timestamp: '2023-07-29 15:17:26+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/topological-sort.hpp
layout: document
redirect_from:
- /library/graph/topological-sort.hpp
- /library/graph/topological-sort.hpp.html
title: graph/topological-sort.hpp
---
