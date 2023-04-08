---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data-structure/unionfind.hpp
    title: data-structure/unionfind.hpp
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"verify/LC-Unionfind.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#line 1 \"template/template.hpp\"\n#include<bits/stdc++.h>\nusing ll = long\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 2 \"data-structure/unionfind.hpp\"\
    \nstruct UnionFind {\n  vector<int> parent;\n  vector<int> rank;\n\n  UnionFind(int\
    \ n) {\n    init(n);\n  }\n\n  void init(int n) {\n    parent.resize(n);\n   \
    \ rank.resize(n);\n    for(int i = 0; i < n; ++i){\n      parent[i] = i;\n   \
    \   rank[i] = 0;\n    }\n  }\n\n  int getRoot(int x) {\n    if(parent[x] == x)\
    \ return x;\n\n    return parent[x] = getRoot(parent[x]);\n  }\n\n  bool isSame(int\
    \ x, int y) {\n    return getRoot(x) == getRoot(y);\n  }\n\n  bool merge(int x,\
    \ int y) {\n    x = getRoot(x);\n    y = getRoot(y);\n    if(x == y) return false;\n\
    \    if(rank[x] < rank[y]) swap(x, y);\n    if(rank[x] == rank[y]) ++rank[x];\n\
    \    parent[y] = x;\n    return true;\n  }\n\n  vector<vector<int>> getGroups(){\n\
    \    int n = rank.size();\n    vector<vector<int>> rest(n), res;\n    for(int\
    \ i = 0; i < n; ++i) rest[getRoot(i)].push_back(i);\n    for(int i = 0; i < n;\
    \ ++i) if(rest[i].size()) res.push_back(rest[i]);\n    return res;\n  }\n};\n\
    #line 5 \"verify/LC-Unionfind.test.cpp\"\n\nint main(){\n  int N, Q;\n  cin >>\
    \ N >> Q;\n  UnionFind uf(N);\n  int t, u, v;\n  REP(i,Q){\n    cin >> t >> u\
    \ >> v;\n    if(t) cout << (int)uf.isSame(u, v) << endl;\n    else uf.merge(u,\
    \ v);\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../template/template.hpp\"\n#include \"../data-structure/unionfind.hpp\"\n\
    \nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  UnionFind uf(N);\n  int t, u,\
    \ v;\n  REP(i,Q){\n    cin >> t >> u >> v;\n    if(t) cout << (int)uf.isSame(u,\
    \ v) << endl;\n    else uf.merge(u, v);\n  }\n}\n"
  dependsOn:
  - template/template.hpp
  - data-structure/unionfind.hpp
  isVerificationFile: true
  path: verify/LC-Unionfind.test.cpp
  requiredBy: []
  timestamp: '2022-11-17 17:44:39+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/LC-Unionfind.test.cpp
layout: document
redirect_from:
- /verify/verify/LC-Unionfind.test.cpp
- /verify/verify/LC-Unionfind.test.cpp.html
title: verify/LC-Unionfind.test.cpp
---
