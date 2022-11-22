---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/prime-factorize.hpp
    title: math/prime-factorize.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
  bundledCode: "#line 1 \"verify/AOJ-NTL_1_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 2 \"math/prime-factorize.hpp\"\
    \ntemplate <class T>\nmap<T, int> primeFactorize(T n) {\n  map<T, int> res;\n\
    \  for(T i = 2; i * i <= n; ++i){\n    while(n % i == 0){\n      ++res[i];\n \
    \     n /= i;\n    }\n  }\n  if(n != 1) res[n] = 1;\n  return res;\n}\n#line 5\
    \ \"verify/AOJ-NTL_1_A.test.cpp\"\n\nint main(){\n  int n;\n  cin >> n;\n\n  cout\
    \ << n << \":\";\n  for(auto &[key, val]: primeFactorize(n)){\n    REP(i,val)\
    \ cout << \" \" << key;\n  }\n  cout << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../math/prime-factorize.hpp\"\
    \n\nint main(){\n  int n;\n  cin >> n;\n\n  cout << n << \":\";\n  for(auto &[key,\
    \ val]: primeFactorize(n)){\n    REP(i,val) cout << \" \" << key;\n  }\n  cout\
    \ << endl;\n}\n"
  dependsOn:
  - template/template.hpp
  - math/prime-factorize.hpp
  isVerificationFile: true
  path: verify/AOJ-NTL_1_A.test.cpp
  requiredBy: []
  timestamp: '2022-11-22 13:24:56+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/AOJ-NTL_1_A.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-NTL_1_A.test.cpp
- /verify/verify/AOJ-NTL_1_A.test.cpp.html
title: verify/AOJ-NTL_1_A.test.cpp
---
