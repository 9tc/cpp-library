---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra-with-walk.hpp
    title: graph/dijkstra-with-walk.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"verify/LC-ShortestPath.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\
    \n#line 1 \"template/template.hpp\"\n#include<bits/stdc++.h>\nusing ll = long\
    \ long;\n#define REP(i, n) for(ll i = 0; (i) < ll(n); ++ (i))\n#define FOR(i,\
    \ m, n) for(ll i = (m); (i) <= ll(n); ++ (i))\n#define REPR(i, n) for(ll i = ll(n)\
    \ - 1; (i) >= 0; -- (i))\n#define FORR(i, m, n) for(ll i = ll(n); (i) >= ll(m);\
    \ -- (i))\n#define ALL(x) x.begin(),x.end()\n\n#define INF (int)1e9\n#define LLINF\
    \ (long long)1e18\n#define MOD (int)(1e9+7)\n#define MOD9 (int)998244353\n#define\
    \ PI 3.141592653589\n#define PB push_back\n#define F first\n#define S second\n\
    \n#define YESNO(T) if(T){cout<<\"YES\"<<endl;}else{cout<<\"NO\"<<endl;}\n#define\
    \ yesno(T) if(T){cout<<\"yes\"<<endl;}else{cout<<\"no\"<<endl;}\n#define YesNo(T)\
    \ if(T){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}\n#define Yes(T) {cout<<\"\
    Yes\"<<endl; if(T) return 0;}\n#define No(T) {cout <<\"No\"<<endl; if(T) return\
    \ 0;}\n#define YES(T) {cout<<\"YES\"<<endl; if(T) return 0;}\n#define NO(T) {cout\
    \ <<\"NO\"<<endl; if(T) return 0;}\n\n#define Graph vector<vector<int> >\n#define\
    \ CostGraph vector<vector<pair<int,ll> > >\n#define PII pair<int,int>\n#define\
    \ PLL pair<ll,ll>\n#define VI vector<int>\n#define VL vector<ll>\n#define VVI\
    \ vector<vector<int> >\n#define VVL vector<vector<ll> >\n#define VPII vector<pair<int,int>\
    \ >\n#define VPLL vector<pair<ll,ll> >\n\n#define DDD fixed<<setprecision(10)\n\
    #define PAD setfill('0')<<right<<setw(8)\n\ntemplate <class T>\ninline bool chmin(T\
    \ &a, T b) {\n  if(a > b){ a = b; return true;}\n  return false;\n}\ntemplate\
    \ <class T>\ninline bool chmax(T &a, T b) {\n  if(a < b){a = b; return true;}\n\
    \  return false;\n}\nstruct input{\n  int n;\n  input() {}\n  input(int n_) :\
    \ n(n_){};\n  template <class T>\n  operator T(){\n    T ret;\n    std::cin >>\
    \ ret;\n    return ret;\n  }\n  template <class T>\n  operator std::vector<T>()\
    \ {\n    std::vector<T> ret(n);\n    REP(i,n) std::cin >> ret[i];\n    return\
    \ ret;\n  }\n};\ntemplate <class T>\ninline void printVec(std::vector<T> v){\n\
    \  REP(i,v.size()){\n    if(i) std::cout << \" \";\n    std::cout << v[i];\n \
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"graph/dijkstra-with-walk.hpp\"\
    \npair<vector<ll>, vector<ll>> dijkstraWithWalk(CostGraph& g, int s){\n  int n\
    \ = g.size();\n  vector<ll> dist(n, LLINF);\n  vector<ll> walk(n);\n  priority_queue<pair<ll,ll>,\
    \ vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;\n  pq.emplace(0, s);\n  while(!pq.empty()){\n\
    \    auto [nowCost, now] = pq.top(); pq.pop();\n    if(dist[now] < nowCost) continue;\n\
    \    for(auto [to, cost]: g[now]) {\n      if(chmin(dist[to], nowCost + cost))\
    \ {\n        pq.emplace(nowCost + cost, to);\n        walk[to] = now;\n      }\n\
    \    }\n  }\n  return {dist, walk};\n}\n#line 4 \"verify/LC-ShortestPath.test.cpp\"\
    \n\nint main(){\n  int N, M, s, t;\n  cin >> N >> M >> s >> t;\n\n  CostGraph\
    \ G(N);\n  REP(i,M){\n    int a, b, c;\n    cin >> a >> b >> c;\n    G[a].PB({b,\
    \ c});\n  }\n\n  auto [dist, walk] = dijkstraWithWalk(G, s);\n  if(dist[t] ==\
    \ LLINF) cout << -1 << endl;\n  else{\n    VPLL ans;\n    ll cur = t;\n    while(cur\
    \ != s){\n      ans.push_back({walk[cur], cur});\n      cur = walk[cur];\n   \
    \ }\n    reverse(ans.begin(), ans.end());\n    cout << dist[t] << \" \" << ans.size()\
    \ << endl;\n    for(auto &[u, v]: ans) cout << u << \" \" << v << endl;\n  }\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"../template/template.hpp\"\n#include \"../graph/dijkstra-with-walk.hpp\"\n\
    \nint main(){\n  int N, M, s, t;\n  cin >> N >> M >> s >> t;\n\n  CostGraph G(N);\n\
    \  REP(i,M){\n    int a, b, c;\n    cin >> a >> b >> c;\n    G[a].PB({b, c});\n\
    \  }\n\n  auto [dist, walk] = dijkstraWithWalk(G, s);\n  if(dist[t] == LLINF)\
    \ cout << -1 << endl;\n  else{\n    VPLL ans;\n    ll cur = t;\n    while(cur\
    \ != s){\n      ans.push_back({walk[cur], cur});\n      cur = walk[cur];\n   \
    \ }\n    reverse(ans.begin(), ans.end());\n    cout << dist[t] << \" \" << ans.size()\
    \ << endl;\n    for(auto &[u, v]: ans) cout << u << \" \" << v << endl;\n  }\n\
    }\n"
  dependsOn:
  - template/template.hpp
  - graph/dijkstra-with-walk.hpp
  isVerificationFile: true
  path: verify/LC-ShortestPath.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 04:15:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/LC-ShortestPath.test.cpp
layout: document
redirect_from:
- /verify/verify/LC-ShortestPath.test.cpp
- /verify/verify/LC-ShortestPath.test.cpp.html
title: verify/LC-ShortestPath.test.cpp
---
