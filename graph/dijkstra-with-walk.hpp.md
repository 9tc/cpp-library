---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/LC-ShortestPath.test.cpp
    title: verify/LC-ShortestPath.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/dijkstra-with-walk.hpp\"\npair<vector<ll>, vector<ll>>\
    \ dijkstraWithWalk(CostGraph& g, int s){\n  int n = g.size();\n  vector<ll> dist(n,\
    \ LLINF);\n  vector<ll> walk(n);\n  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,\
    \ greater<pair<ll,ll>>> pq;\n  pq.emplace(0, s);\n  while(!pq.empty()){\n    auto\
    \ [nowCost, now] = pq.top(); pq.pop();\n    if(dist[now] < nowCost) continue;\n\
    \    for(auto [to, cost]: g[now]) {\n      if(chmin(dist[to], nowCost + cost))\
    \ {\n        pq.emplace(nowCost + cost, to);\n        walk[to] = now;\n      }\n\
    \    }\n  }\n  return {dist, walk};\n}\n"
  code: "pair<vector<ll>, vector<ll>> dijkstraWithWalk(CostGraph& g, int s){\n  int\
    \ n = g.size();\n  vector<ll> dist(n, LLINF);\n  vector<ll> walk(n);\n  priority_queue<pair<ll,ll>,\
    \ vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;\n  pq.emplace(0, s);\n  while(!pq.empty()){\n\
    \    auto [nowCost, now] = pq.top(); pq.pop();\n    if(dist[now] < nowCost) continue;\n\
    \    for(auto [to, cost]: g[now]) {\n      if(chmin(dist[to], nowCost + cost))\
    \ {\n        pq.emplace(nowCost + cost, to);\n        walk[to] = now;\n      }\n\
    \    }\n  }\n  return {dist, walk};\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra-with-walk.hpp
  requiredBy: []
  timestamp: '2022-12-30 04:18:31+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/LC-ShortestPath.test.cpp
documentation_of: graph/dijkstra-with-walk.hpp
layout: document
redirect_from:
- /library/graph/dijkstra-with-walk.hpp
- /library/graph/dijkstra-with-walk.hpp.html
title: "\u30C0\u30A4\u30AF\u30B9\u30C8\u30E9\u6CD5(\u4E00\u3064\u524D\u306B\u901A\u3063\
  \u305F\u9802\u70B9\u306E\u60C5\u5831\u4ED8\u304D)"
---
