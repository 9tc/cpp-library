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
  bundledCode: "#line 1 \"graph/dijkstra.hpp\"\nvector<ll> dijkstra(Graph& G, int\
    \ s){\n    int n = G.size();\n    vector<ll> dist(n, LLINF);\n    dist[s] = 0;\n\
    \    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;\n\
    \    pq.emplace(0, s);\n    while(!pq.empty()) {\n        auto [nowCost, now]\
    \ = pq.top(); pq.pop();\n        if(dist[now] < nowCost) continue;\n        for(auto\
    \ to: G[now]) {\n            if(chmin(dist[to], nowCost + 1)) pq.emplace(nowCost\
    \ + 1, to);\n        }\n    }\n    return dist;\n}\n"
  code: "vector<ll> dijkstra(Graph& G, int s){\n    int n = G.size();\n    vector<ll>\
    \ dist(n, LLINF);\n    dist[s] = 0;\n    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,\
    \ greater<pair<ll,ll>>> pq;\n    pq.emplace(0, s);\n    while(!pq.empty()) {\n\
    \        auto [nowCost, now] = pq.top(); pq.pop();\n        if(dist[now] < nowCost)\
    \ continue;\n        for(auto to: G[now]) {\n            if(chmin(dist[to], nowCost\
    \ + 1)) pq.emplace(nowCost + 1, to);\n        }\n    }\n    return dist;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2024-04-16 00:47:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---
