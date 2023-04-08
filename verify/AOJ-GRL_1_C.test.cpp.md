---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/warshall-floyd.hpp
    title: graph/warshall-floyd.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
  bundledCode: "#line 1 \"verify/AOJ-GRL_1_C.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"graph/warshall-floyd.hpp\"\
    \ntemplate<typename T>\nvector<vector<T>> warshallFloyd(vector<vector<T>> mat,\
    \ T infty){\n  int n = mat.size();\n  for(int k = 0; k < n; ++k){\n    for(int\
    \ i = 0; i < n; ++i){\n      for(int j = 0; j < n; ++j){\n        if(mat[i][k]\
    \ == infty || mat[k][j] == infty) continue;\n        mat[i][j] = min(mat[i][j],\
    \ mat[i][k] + mat[k][j]);\n      }\n    }\n  }\n  return mat;\n}\n#line 5 \"verify/AOJ-GRL_1_C.test.cpp\"\
    \n\nint main(){\n  int N, M;\n  cin >> N >> M;\n  vector<vector<ll>> mat(N, vector<ll>(N,\
    \ LLINF));\n  REP(i,N) mat[i][i] = 0;\n  REP(i,M){\n    int s, t, d;\n    cin\
    \ >> s >> t >> d;\n    mat[s][t] = d;\n  }\n\n  auto res = warshallFloyd(mat,\
    \ LLINF);\n  bool hasNegativeCycle = false;\n  REP(i,N) if(res[i][i] != 0) hasNegativeCycle\
    \ = true;\n  if(hasNegativeCycle) cout << \"NEGATIVE CYCLE\" << endl;\n  else{\n\
    \    REP(i,N){\n      REP(j,N){\n        if(res[i][j] == LLINF) cout << \"INF\"\
    ;\n        else cout << res[i][j];\n        if(j != N-1) cout << \" \";\n    \
    \  }\n      cout << endl;\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../graph/warshall-floyd.hpp\"\
    \n\nint main(){\n  int N, M;\n  cin >> N >> M;\n  vector<vector<ll>> mat(N, vector<ll>(N,\
    \ LLINF));\n  REP(i,N) mat[i][i] = 0;\n  REP(i,M){\n    int s, t, d;\n    cin\
    \ >> s >> t >> d;\n    mat[s][t] = d;\n  }\n\n  auto res = warshallFloyd(mat,\
    \ LLINF);\n  bool hasNegativeCycle = false;\n  REP(i,N) if(res[i][i] != 0) hasNegativeCycle\
    \ = true;\n  if(hasNegativeCycle) cout << \"NEGATIVE CYCLE\" << endl;\n  else{\n\
    \    REP(i,N){\n      REP(j,N){\n        if(res[i][j] == LLINF) cout << \"INF\"\
    ;\n        else cout << res[i][j];\n        if(j != N-1) cout << \" \";\n    \
    \  }\n      cout << endl;\n    }\n  }\n}\n"
  dependsOn:
  - template/template.hpp
  - graph/warshall-floyd.hpp
  isVerificationFile: true
  path: verify/AOJ-GRL_1_C.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 06:07:15+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/AOJ-GRL_1_C.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-GRL_1_C.test.cpp
- /verify/verify/AOJ-GRL_1_C.test.cpp.html
title: verify/AOJ-GRL_1_C.test.cpp
---
