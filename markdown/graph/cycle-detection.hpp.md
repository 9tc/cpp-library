---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/LC-CycleDetection(Directed).test.cpp
    title: verify/LC-CycleDetection(Directed).test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/cycle-detection.hpp\"\nvector<int> detectCycle(Graph\
    \ &g){\n  int n = g.size();\n  const int UNUSED = 0;\n  const int USING = 1;\n\
    \  const int USED = 2;\n  vector<int> status(n, UNUSED);\n  vector<int> pre(n);\n\
    \  vector<int> cycle;\n\n  function<bool(int)> dfs = [&](int u) -> bool{\n   \
    \ status[u] = USING;\n    for(auto &v: g[u]){\n      if(status[v] == UNUSED){\n\
    \        pre[v] = u;\n        if(dfs(v)) return true;\n      }else if(status[v]\
    \ == USING){\n        int cur = u;\n        while(cur != v){\n          cycle.push_back(pre[cur]);\n\
    \          cur = pre[cur];\n        }\n        cycle.push_back(u);\n        return\
    \ true;\n      }\n    }\n    status[u] = USED;\n    return false;\n  };\n\n  for(int\
    \ i = 0; i < g.size(); ++i){\n    if(status[i] == UNUSED && dfs(i)){\n      reverse(cycle.begin(),\
    \ cycle.end());\n      return cycle;\n    }\n  }\n  return {};\n};\n"
  code: "vector<int> detectCycle(Graph &g){\n  int n = g.size();\n  const int UNUSED\
    \ = 0;\n  const int USING = 1;\n  const int USED = 2;\n  vector<int> status(n,\
    \ UNUSED);\n  vector<int> pre(n);\n  vector<int> cycle;\n\n  function<bool(int)>\
    \ dfs = [&](int u) -> bool{\n    status[u] = USING;\n    for(auto &v: g[u]){\n\
    \      if(status[v] == UNUSED){\n        pre[v] = u;\n        if(dfs(v)) return\
    \ true;\n      }else if(status[v] == USING){\n        int cur = u;\n        while(cur\
    \ != v){\n          cycle.push_back(pre[cur]);\n          cur = pre[cur];\n  \
    \      }\n        cycle.push_back(u);\n        return true;\n      }\n    }\n\
    \    status[u] = USED;\n    return false;\n  };\n\n  for(int i = 0; i < g.size();\
    \ ++i){\n    if(status[i] == UNUSED && dfs(i)){\n      reverse(cycle.begin(),\
    \ cycle.end());\n      return cycle;\n    }\n  }\n  return {};\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/cycle-detection.hpp
  requiredBy: []
  timestamp: '2022-12-30 04:09:10+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/LC-CycleDetection(Directed).test.cpp
documentation_of: graph/cycle-detection.hpp
layout: document
redirect_from:
- /library/graph/cycle-detection.hpp
- /library/graph/cycle-detection.hpp.html
title: 閉路判定
---
