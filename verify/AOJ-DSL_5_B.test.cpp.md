---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/cumulative-sum-2d.hpp
    title: data-structure/cumulative-sum-2d.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_5_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_5_B
  bundledCode: "#line 1 \"verify/AOJ-DSL_5_B.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_5_B\"\
    \n\n#line 1 \"template.hpp\"\n#include<bits/stdc++.h>\nusing ll = long long;\n\
    #define REP(i, n) for(ll i = 0; (i) < ll(n); ++ (i))\n#define FOR(i, m, n) for(ll\
    \ i = (m); (i) <= ll(n); ++ (i))\n#define REPR(i, n) for(ll i = ll(n) - 1; (i)\
    \ >= 0; -- (i))\n#define FORR(i, m, n) for(ll i = ll(n); (i) >= ll(m); -- (i))\n\
    #define ALL(x) x.begin(),x.end()\n\n#define INF (int)1e9\n#define LLINF (long\
    \ long)1e18\n#define MOD (int)(1e9+7)\n#define MOD9 (int)998244353\n#define PI\
    \ 3.141592653589\n#define PB push_back\n#define F first\n#define S second\n\n\
    #define YESNO(T) if(T){cout<<\"YES\"<<endl;}else{cout<<\"NO\"<<endl;}\n#define\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"data-structure/cumulative-sum-2d.hpp\"\
    \ntemplate<class T>\nstruct CumulativeSum2D{\n  vector<vector<T>> data;\n  vector<vector<T>>\
    \ sum;\n  bool flgBuild;\n\n  CumulativeSum2D(){\n    flgBuild = false;\n  }\n\
    \n  CumulativeSum2D(int n): data(n, vector<T>(n, 0)), sum(n+1, vector<T>(n+1,\
    \ 0)){\n    flgBuild = false;\n  }\n\n  CumulativeSum2D(int h, int w): data(h,\
    \ vector<T>(w, 0)), sum(h+1, vector<T>(w+1, 0)){\n    flgBuild = false;\n  }\n\
    \n  CumulativeSum2D(vector<vector<T>> &v): data(v), sum(v.size()+1, vector<T>(v[0].size()+1,\
    \ 0)){\n    flgBuild = false;\n    build();\n  }\n\n  void update(int i, int j,\
    \ T value){\n    flgBuild = false;\n    data[i][j] = value;\n  }\n\n  void update(pair<int,int>\
    \ p, T value){\n    update(p.first, p.second, value);\n  }\n\n  void add(int i,\
    \ int j, T value){\n    flgBuild = false;\n    data[i][j] += value;\n  }\n\n \
    \ void add(pair<int,int> p, T value){\n    add(p.first, p.second, value);\n  }\n\
    \n  void imos(int x1, int y1, int x2, int y2, T value){\n    add(x1, y1, value);\n\
    \    add(x1, y2, -value);\n    add(x2, y1, -value);\n    add(x2, y2, value);\n\
    \  }\n\n  void imos(pair<int,int> p1, pair<int,int> p2, T value){\n    imos(p1.first,\
    \ p1.second, p2.first, p2.second, value);\n  }\n\n  void build(){\n    if(flgBuild)\
    \ return;\n    for(int i = 0; i < data.size(); ++i){\n        for(int j = 0; j\
    \ < data[i].size(); ++j){\n            sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1]\
    \ - sum[i][j] + data[i][j];\n        }\n    }\n    flgBuild = true;\n  }\n\n \
    \ T get(int x1, int y1, int x2, int y2){\n    if(!flgBuild) build();\n    return\
    \ sum[x2][y2] - sum[x1][y2] - sum[x2][y1] + sum[x1][y1];\n  }\n\n  T get(pair<int,int>\
    \ l, pair<int,int> r){\n    return get(l.first, l.second, r.first, r.second);\n\
    \  }\n\n  T get(int i, int j){\n    if(!flgBuild) build();\n    return sum[i][j];\n\
    \  }\n  \n  T get(pair<int,int> p){\n    return get(p.first, p.second);\n  }\n\
    };\n#line 5 \"verify/AOJ-DSL_5_B.test.cpp\"\n\nint main() {\n  int n = input();\n\
    \  CumulativeSum2D<ll> cum(1001);\n  REP(i, n) {\n    int a, b, c, d;\n    cin\
    \ >> a >> b >> c >> d;\n    cum.imos(a, b, c, d, 1);\n  }\n  ll ans = 0;\n  REP(i,\
    \ 1001) REP(j, 1001) chmax(ans, cum.get(i, j));\n  cout << ans << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_5_B\"\
    \n\n#include \"../template.hpp\"\n#include \"../data-structure/cumulative-sum-2d.hpp\"\
    \n\nint main() {\n  int n = input();\n  CumulativeSum2D<ll> cum(1001);\n  REP(i,\
    \ n) {\n    int a, b, c, d;\n    cin >> a >> b >> c >> d;\n    cum.imos(a, b,\
    \ c, d, 1);\n  }\n  ll ans = 0;\n  REP(i, 1001) REP(j, 1001) chmax(ans, cum.get(i,\
    \ j));\n  cout << ans << endl;\n}\n"
  dependsOn:
  - template.hpp
  - data-structure/cumulative-sum-2d.hpp
  isVerificationFile: true
  path: verify/AOJ-DSL_5_B.test.cpp
  requiredBy: []
  timestamp: '2023-07-29 15:01:05+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/AOJ-DSL_5_B.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-DSL_5_B.test.cpp
- /verify/verify/AOJ-DSL_5_B.test.cpp.html
title: verify/AOJ-DSL_5_B.test.cpp
---
