---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-GRL_1_A.test.cpp
    title: verify/AOJ-GRL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"graph/dijkstra-with-cost.hpp\"\nvector<ll> dijkstraWithCost(CostGraph&\
    \ G, int s){\n  int n = G.size();\n  vector<ll> dist(n, LLINF);\n  dist[s] = 0;\n\
    \  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;\n\
    \  pq.emplace(0, s);\n  while(!pq.empty()) {\n    auto [nowCost, now] = pq.top();\
    \ pq.pop();\n    if(dist[now] < nowCost) continue;\n    for(auto [to, cost]: G[now])\
    \ {\n      if(chmin(dist[to], nowCost + cost)) pq.emplace(nowCost + cost, to);\n\
    \    }\n  }\n  return dist;\n}\n"
  code: "vector<ll> dijkstraWithCost(CostGraph& G, int s){\n  int n = G.size();\n\
    \  vector<ll> dist(n, LLINF);\n  dist[s] = 0;\n  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,\
    \ greater<pair<ll,ll>>> pq;\n  pq.emplace(0, s);\n  while(!pq.empty()) {\n   \
    \ auto [nowCost, now] = pq.top(); pq.pop();\n    if(dist[now] < nowCost) continue;\n\
    \    for(auto [to, cost]: G[now]) {\n      if(chmin(dist[to], nowCost + cost))\
    \ pq.emplace(nowCost + cost, to);\n    }\n  }\n  return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra-with-cost.hpp
  requiredBy: []
  timestamp: '2022-12-30 04:30:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-GRL_1_A.test.cpp
documentation_of: graph/dijkstra-with-cost.hpp
layout: document
redirect_from:
- /library/graph/dijkstra-with-cost.hpp
- /library/graph/dijkstra-with-cost.hpp.html
title: graph/dijkstra-with-cost.hpp
---
