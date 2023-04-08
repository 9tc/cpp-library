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
title: ダイクストラ法(一つ前に通った頂点の情報付き)
---
