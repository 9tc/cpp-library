---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_1_A.test.cpp
    title: verify/AOJ-ALDS1_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_1_B.test.cpp
    title: verify/AOJ-ALDS1_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_1_C.test.cpp
    title: verify/AOJ-ALDS1_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_2_A.test.cpp
    title: verify/AOJ-ALDS1_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_2_B.test.cpp
    title: verify/AOJ-ALDS1_2_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ALDS1_6_A.test.cpp
    title: verify/AOJ-ALDS1_6_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-DPL_1_D.test.cpp
    title: verify/AOJ-DPL_1_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-DSL_1_B.test.cpp
    title: verify/AOJ-DSL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-DSL_2_A.test.cpp
    title: verify/AOJ-DSL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-ITP1_3_D.test.cpp
    title: verify/AOJ-ITP1_3_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-NTL_1_A.test.cpp
    title: verify/AOJ-NTL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-NTL_1_C.test.cpp
    title: verify/AOJ-NTL_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-CycleDetection(Directed).test.cpp
    title: verify/LC-CycleDetection(Directed).test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-PointAddRangeSum.test.cpp
    title: verify/LC-PointAddRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-RangeAffineRangeSum.test.cpp
    title: verify/LC-RangeAffineRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-StaticRMQ(SegmentTree).test.cpp
    title: verify/LC-StaticRMQ(SegmentTree).test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-StaticRangeSum.test.cpp
    title: verify/LC-StaticRangeSum.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify/LC-Unionfind.test.cpp
    title: verify/LC-Unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template/template.hpp\"\n#include<bits/stdc++.h>\nusing\
    \ ll = long long;\n#define REP(i, n) for(ll i = 0; (i) < ll(n); ++ (i))\n#define\
    \ FOR(i, m, n) for(ll i = (m); (i) <= ll(n); ++ (i))\n#define REPR(i, n) for(ll\
    \ i = ll(n) - 1; (i) >= 0; -- (i))\n#define FORR(i, m, n) for(ll i = ll(n); (i)\
    \ >= ll(m); -- (i))\n#define ALL(x) x.begin(),x.end()\n\n#define INF (int)1e9\n\
    #define LLINF (long long)1e18\n#define MOD (int)(1e9+7)\n#define MOD9 (int)998244353\n\
    #define PI 3.141592653589\n#define PB push_back\n#define F first\n#define S second\n\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n"
  code: "#include<bits/stdc++.h>\nusing ll = long long;\n#define REP(i, n) for(ll\
    \ i = 0; (i) < ll(n); ++ (i))\n#define FOR(i, m, n) for(ll i = (m); (i) <= ll(n);\
    \ ++ (i))\n#define REPR(i, n) for(ll i = ll(n) - 1; (i) >= 0; -- (i))\n#define\
    \ FORR(i, m, n) for(ll i = ll(n); (i) >= ll(m); -- (i))\n#define ALL(x) x.begin(),x.end()\n\
    \n#define INF (int)1e9\n#define LLINF (long long)1e18\n#define MOD (int)(1e9+7)\n\
    #define MOD9 (int)998244353\n#define PI 3.141592653589\n#define PB push_back\n\
    #define F first\n#define S second\n\n#define YESNO(T) if(T){cout<<\"YES\"<<endl;}else{cout<<\"\
    NO\"<<endl;}\n#define yesno(T) if(T){cout<<\"yes\"<<endl;}else{cout<<\"no\"<<endl;}\n\
    #define YesNo(T) if(T){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}\n#define\
    \ Yes(T) {cout<<\"Yes\"<<endl; if(T) return 0;}\n#define No(T) {cout <<\"No\"\
    <<endl; if(T) return 0;}\n#define YES(T) {cout<<\"YES\"<<endl; if(T) return 0;}\n\
    #define NO(T) {cout <<\"NO\"<<endl; if(T) return 0;}\n\n#define Graph vector<vector<int>\
    \ >\n#define CostGraph vector<vector<pair<int,ll> > >\n#define PII pair<int,int>\n\
    #define PLL pair<ll,ll>\n#define VI vector<int>\n#define VL vector<ll>\n#define\
    \ VVI vector<vector<int> >\n#define VVL vector<vector<ll> >\n#define VPII vector<pair<int,int>\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2022-11-17 17:32:45+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-ALDS1_1_C.test.cpp
  - verify/AOJ-NTL_1_A.test.cpp
  - verify/AOJ-NTL_1_C.test.cpp
  - verify/AOJ-ALDS1_2_B.test.cpp
  - verify/AOJ-DSL_1_B.test.cpp
  - verify/LC-Unionfind.test.cpp
  - verify/LC-StaticRangeSum.test.cpp
  - verify/LC-PointAddRangeSum.test.cpp
  - verify/LC-StaticRMQ(SegmentTree).test.cpp
  - verify/AOJ-ALDS1_6_A.test.cpp
  - verify/AOJ-ALDS1_2_A.test.cpp
  - verify/AOJ-ALDS1_1_A.test.cpp
  - verify/LC-RangeAffineRangeSum.test.cpp
  - verify/AOJ-ALDS1_1_B.test.cpp
  - verify/AOJ-DSL_2_A.test.cpp
  - verify/AOJ-ITP1_3_D.test.cpp
  - verify/AOJ-DPL_1_D.test.cpp
  - verify/LC-CycleDetection(Directed).test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
