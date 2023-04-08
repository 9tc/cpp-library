---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: dp/longest-increasing-subsequence.hpp
    title: dp/longest-increasing-subsequence.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/longest_increasing_subsequence
    links:
    - https://judge.yosupo.jp/problem/longest_increasing_subsequence
  bundledCode: "#line 1 \"verify/LC-LongestIncreasingSubsequence.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\n\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"dp/longest-increasing-subsequence.hpp\"\
    \ntemplate<class T>\nvector<T> lis(const vector<T> &a, bool strict = true){\n\
    \  int n = a.size();\n  vector<T> l;\n  vector<T> prev(n);\n\n  for(int i = 0;\
    \ i < n; ++i){\n    auto it = strict ? lower_bound(l.begin(), l.end(), a[i]) :\
    \ upper_bound(l.begin(), l.end(), a[i]);\n    prev[i] = it - l.begin();\n    if(it\
    \ == l.end()) l.push_back(a[i]);\n    else *it = a[i];\n  }\n\n  int idx = l.size()\
    \ - 1;\n  vector<T> res(l.size());\n  for(int i = n - 1; i >= 0; --i){\n    if(prev[i]\
    \ == idx) res[idx--] = i;\n  }\n  return res;\n}\n#line 5 \"verify/LC-LongestIncreasingSubsequence.test.cpp\"\
    \n\nint main(){\n  int N;\n  cin >> N;\n  VI a = input(N);\n\n  auto res = lis(a);\n\
    \  cout << res.size() << endl;\n  printVec(res);\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../dp/longest-increasing-subsequence.hpp\"\
    \n\nint main(){\n  int N;\n  cin >> N;\n  VI a = input(N);\n\n  auto res = lis(a);\n\
    \  cout << res.size() << endl;\n  printVec(res);\n}\n"
  dependsOn:
  - template/template.hpp
  - dp/longest-increasing-subsequence.hpp
  isVerificationFile: true
  path: verify/LC-LongestIncreasingSubsequence.test.cpp
  requiredBy: []
  timestamp: '2023-01-14 10:54:35+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/LC-LongestIncreasingSubsequence.test.cpp
layout: document
redirect_from:
- /verify/verify/LC-LongestIncreasingSubsequence.test.cpp
- /verify/verify/LC-LongestIncreasingSubsequence.test.cpp.html
title: verify/LC-LongestIncreasingSubsequence.test.cpp
---
