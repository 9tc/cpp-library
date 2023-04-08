---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data-structure/segment-tree/range-minimum-query.hpp
    title: data-structure/segment-tree/range-minimum-query.hpp
  - icon: ':x:'
    path: data-structure/segment-tree/segment-tree.hpp
    title: data-structure/segment-tree/segment-tree.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"verify/LC-StaticRMQ(SegmentTree).test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#line 1 \"template/template.hpp\"\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"data-structure/segment-tree/segment-tree.hpp\"\
    \ntemplate <typename T>\nstruct SegmentTree{\n  using F = function<T(T, T)>;\n\
    \  int sz;\n  vector<T> seg;\n\n  const F f;\n  const T e;\n\n  SegmentTree(int\
    \ n, const F f, const T &e): f(f), e(e){\n    sz = 1;\n    while(sz < n) sz <<=\
    \ 1;\n    seg.assign(2 * sz, e);\n  }\n\n  void set(int k, const T &x){\n    seg[k+sz]\
    \ = x;\n  }\n\n  void build(){\n    for(int k = sz - 1; k > 0; --k){\n      seg[k]\
    \ = f(seg[2*k+0], seg[2*k+1]);\n    }\n  }\n\n  void update(int k, const T &x){\n\
    \    k += sz;\n    seg[k] = x;\n    while(k >>= 1){\n      seg[k] = f(seg[2 *\
    \ k + 0], seg[2 * k + 1]);\n    }\n  }\n\n  T query(int a, int b){\n    T l =\
    \ e, r = e;\n    for(a += sz, b += sz; a < b; a >>= 1, b >>= 1){\n      if(a &\
    \ 1) l = f(l, seg[a++]);\n      if(b & 1) r = f(seg[--b], r);\n    }\n    return\
    \ f(l, r);\n  }\n\n  T operator[](const int &k) const{\n    return seg[k + sz];\n\
    \  }\n\n  template <typename C>\n  int findSubtree(int a, const C &check, T &m,\
    \ bool type){\n    while(a < sz){\n      T nxt = type ? f(seg[2 * a + type], m):\
    \ f(m, seg[2 * a + type]);\n      if(check(nxt)) a = 2 * a + type;\n      else\
    \ m = nxt, a = 2 * a + 1 - type;\n    }\n    return a - sz;\n  }\n\n  template<typename\
    \ C>\n  int findFirst(int a, const C &check){\n    T l = e;\n    if(a <= 0){\n\
    \      if(check(f(l, seg[1]))) return findSubtree(1, check, l, false);\n     \
    \ return -1;\n    }\n    int b = sz;\n    for(a += sz, b += sz; a < b; a >>= 1,\
    \ b >>= 1){\n      if(a & 1) {\n        T nxt = f(l, seg[a]);\n        if(check(nxt))\
    \ return findSubtree(a, check, l, false);\n        l = nxt;\n        ++a;\n  \
    \    }\n    }\n    return -1;\n  }\n\n  template <typename C>\n  int findLast(int\
    \ b, const C &check){\n    T r = e;\n    if(b >= sz) {\n      if(check(f(seg[1],\
    \ r))) return findSubtree(1, check, r, true);\n      return -1;\n    }\n    int\
    \ a = sz;\n    for(b += sz; a < b; a >>= 1, b >>= 1){\n      if(b & 1){\n    \
    \    T nxt = f(seg[--b], r);\n        if(check(nxt)) return findSubtree(b, check,\
    \ r, true);\n        r = nxt;\n      }\n    }\n    return -1;\n  }\n};\n#line\
    \ 2 \"data-structure/segment-tree/range-minimum-query.hpp\"\nstruct RangeMinimumQuery{\n\
    \  int n;\n  SegmentTree<ll> seg;\n  RangeMinimumQuery(int n): n(n), seg(n, [&](ll\
    \ l, ll r){\n    return min(l, r);\n  }, LLONG_MAX){\n\n  }\n\n  void update(int\
    \ k, int val){\n    seg.update(k, val);\n  }\n\n  ll query(int l, int r){\n  \
    \  return seg.query(l, r);\n  }\n};\n#line 5 \"verify/LC-StaticRMQ(SegmentTree).test.cpp\"\
    \n\nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  VI a = input(N);\n  RangeMinimumQuery\
    \ rmq(N);\n  REP(i,N) rmq.update(i, a[i]);\n  REP(i,Q){\n    int l, r;\n    cin\
    \ >> l >> r;\n    cout << rmq.query(l, r) << '\\n';\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ \"../template/template.hpp\"\n#include \"../data-structure/segment-tree/range-minimum-query.hpp\"\
    \n\nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  VI a = input(N);\n  RangeMinimumQuery\
    \ rmq(N);\n  REP(i,N) rmq.update(i, a[i]);\n  REP(i,Q){\n    int l, r;\n    cin\
    \ >> l >> r;\n    cout << rmq.query(l, r) << '\\n';\n  }\n}\n"
  dependsOn:
  - template/template.hpp
  - data-structure/segment-tree/range-minimum-query.hpp
  - data-structure/segment-tree/segment-tree.hpp
  isVerificationFile: true
  path: verify/LC-StaticRMQ(SegmentTree).test.cpp
  requiredBy: []
  timestamp: '2022-12-18 04:16:09+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/LC-StaticRMQ(SegmentTree).test.cpp
layout: document
redirect_from:
- /verify/verify/LC-StaticRMQ(SegmentTree).test.cpp
- /verify/verify/LC-StaticRMQ(SegmentTree).test.cpp.html
title: verify/LC-StaticRMQ(SegmentTree).test.cpp
---
