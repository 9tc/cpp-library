---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data-structure/cumulative-sum.hpp
    title: data-structure/cumulative-sum.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"verify/LC-StaticRangeSum.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/static_range_sum\"\n\n#line 1 \"template/template.hpp\"\
    \n#include<bits/stdc++.h>\nusing ll = long long;\n#define REP(i, n) for(ll i =\
    \ 0; (i) < ll(n); ++ (i))\n#define FOR(i, m, n) for(ll i = (m); (i) <= ll(n);\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"data-structure/cumulative-sum.hpp\"\
    \ntemplate<class T>\nstruct CumulativeSum{\n  vector<T> data;\n  vector<T> sum;\n\
    \  bool flgBuild;\n\n  CumulativeSum(){\n    flgBuild = false;\n  }\n\n  CumulativeSum(int\
    \ n): data(n, 0), sum(n+1, 0){\n    flgBuild = false;\n  }\n\n  CumulativeSum(vector<T>\
    \ &v): data(v), sum(v.size()+1, 0){\n    flgBuild = false;\n    build();\n  }\n\
    \n  void update(int it, T value){\n    flgBuild = false;\n    data[it] = value;\n\
    \  }\n\n  void add(int it, T value){\n    flgBuild = false;\n    data[it] += value;\n\
    \  }\n\n  void build(){\n    if(flgBuild) return;\n    for(int i = 0; i < data.size();\
    \ ++i){\n      sum[i+1] = sum[i] + data[i];\n    }\n    flgBuild = true;\n  }\n\
    \n  T get(int l, int r){\n    if(!flgBuild) build();\n    return sum[r] - sum[l];\n\
    \  }\n};\n#line 5 \"verify/LC-StaticRangeSum.test.cpp\"\n\nint main(){\n  int\
    \ N, Q;\n  cin >> N >> Q;\n  VL a = input(N);\n  CumulativeSum<ll> cs(a);\n\n\
    \  REP(i,Q){\n    int l, r;\n    cin >> l >> r;\n    cout << cs.get(l, r) << endl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include \"../template/template.hpp\"\n#include \"../data-structure/cumulative-sum.hpp\"\
    \n\nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  VL a = input(N);\n  CumulativeSum<ll>\
    \ cs(a);\n\n  REP(i,Q){\n    int l, r;\n    cin >> l >> r;\n    cout << cs.get(l,\
    \ r) << endl;\n  }\n}\n"
  dependsOn:
  - template/template.hpp
  - data-structure/cumulative-sum.hpp
  isVerificationFile: true
  path: verify/LC-StaticRangeSum.test.cpp
  requiredBy: []
  timestamp: '2022-11-17 17:44:39+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/LC-StaticRangeSum.test.cpp
layout: document
redirect_from:
- /verify/verify/LC-StaticRangeSum.test.cpp
- /verify/verify/LC-StaticRangeSum.test.cpp.html
title: verify/LC-StaticRangeSum.test.cpp
---
