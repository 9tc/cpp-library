---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data-structure/weighted-unionfind.hpp
    title: data-structure/weighted-unionfind.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
  bundledCode: "#line 1 \"verify/AOJ-DSL_1_B.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 2 \"data-structure/weighted-unionfind.hpp\"\
    \ntemplate<class T>\nstruct WeightedUnionFind{\n  vector<int> parent;\n  vector<int>\
    \ rank;\n  vector<T> diffWeight;\n\n  WeightedUnionFind(int n, T unity) {\n  \
    \  init(n, unity);\n  }\n\n  void init(int n, T unity) {\n    parent.resize(n);\n\
    \    rank.resize(n);\n    diffWeight.resize(n);\n    for(int i = 0; i < n; ++i){\n\
    \      parent[i] = i;\n      rank[i] = 0;\n      diffWeight[i] = unity;\n    }\n\
    \  }\n\n  int getRoot(int x) {\n    if(parent[x] == x) return x;\n    int r =\
    \ getRoot(parent[x]);\n    diffWeight[x] += diffWeight[parent[x]];\n    return\
    \ parent[x] = r;\n  }\n\n  T getWeight(int x){\n    getRoot(x);\n    return diffWeight[x];\n\
    \  }\n\n  bool isSame(int x, int y) {\n    return getRoot(x) == getRoot(y);\n\
    \  }\n\n  bool merge(int x, int y, T w) {\n    w += getWeight(x);\n    w -= getWeight(y);\n\
    \    x = getRoot(x);\n    y = getRoot(y);\n    if(x == y) return false;\n    if(rank[x]\
    \ < rank[y]) {\n      swap(x, y);\n      w = -w;\n    }\n    if(rank[x] == rank[y])\
    \ ++rank[x];\n    parent[y] = x;\n    diffWeight[y] = w;\n    return true;\n \
    \ }\n\n  T getDiff(int x, int y){\n    return getWeight(y) - getWeight(x);\n \
    \ }\n\n  int getSize(int x){\n    return -parent[getRoot(x)];\n  }\n};\n#line\
    \ 5 \"verify/AOJ-DSL_1_B.test.cpp\"\n\nint main(){\n  int n, q;\n  cin >> n >>\
    \ q;\n  WeightedUnionFind wuf(n, 0);\n  REP(i,q){\n    int t;\n    cin >> t;\n\
    \    if(t == 0){\n      int x, y, z;\n      cin >> x >> y >> z;\n\n      wuf.merge(y,\
    \ x, z);\n    }else{\n      int x, y;\n      cin >> x >> y;\n      if(wuf.isSame(x,\
    \ y)){\n        cout << wuf.getDiff(y, x) << endl;\n      }else{\n        cout\
    \ << \"?\" << endl;\n      }\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../data-structure/weighted-unionfind.hpp\"\
    \n\nint main(){\n  int n, q;\n  cin >> n >> q;\n  WeightedUnionFind wuf(n, 0);\n\
    \  REP(i,q){\n    int t;\n    cin >> t;\n    if(t == 0){\n      int x, y, z;\n\
    \      cin >> x >> y >> z;\n\n      wuf.merge(y, x, z);\n    }else{\n      int\
    \ x, y;\n      cin >> x >> y;\n      if(wuf.isSame(x, y)){\n        cout << wuf.getDiff(y,\
    \ x) << endl;\n      }else{\n        cout << \"?\" << endl;\n      }\n    }\n\
    \  }\n}\n"
  dependsOn:
  - template/template.hpp
  - data-structure/weighted-unionfind.hpp
  isVerificationFile: true
  path: verify/AOJ-DSL_1_B.test.cpp
  requiredBy: []
  timestamp: '2022-11-21 09:10:20+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/AOJ-DSL_1_B.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-DSL_1_B.test.cpp
- /verify/verify/AOJ-DSL_1_B.test.cpp.html
title: verify/AOJ-DSL_1_B.test.cpp
---
