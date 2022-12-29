---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/segment-tree/lazy-segment-tree.hpp
    title: data-structure/segment-tree/lazy-segment-tree.hpp
  - icon: ':heavy_check_mark:'
    path: data-structure/segment-tree/range-affine-range-sum-query.hpp
    title: data-structure/segment-tree/range-affine-range-sum-query.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/range_affine_range_sum
    links:
    - https://judge.yosupo.jp/problem/range_affine_range_sum
  bundledCode: "#line 1 \"verify/LC-RangeAffineRangeSum.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/range_affine_range_sum\"\n\n#line 1 \"template/template.hpp\"\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"data-structure/segment-tree/lazy-segment-tree.hpp\"\
    \ntemplate <typename T, typename E>\nstruct LazySegmentTree{\n  using F = function<T(T,\
    \ T)>;\n  using G = function<T(T, E)>;\n  using H = function<E(E, E)>;\n  int\
    \ n, sz, height;\n  vector<T> data;\n  vector<E> lazy;\n  const F f;\n  const\
    \ G g;\n  const H h;\n  const T e;\n  const E eLazy;\n\n  inline void update(int\
    \ k){\n    data[k] = f(data[2 * k + 0], data[2 * k + 1]);\n  }\n\n  inline void\
    \ all_apply(int k, const E &x) {\n    data[k] = g(data[k], x);\n    if(k < sz)\
    \ lazy[k] = h(lazy[k], x);\n  }\n\n  inline void propagate(int k){\n    if(lazy[k]\
    \ != eLazy){\n      all_apply(2 * k + 0, lazy[k]);\n      all_apply(2 * k + 1,\
    \ lazy[k]);\n      lazy[k] = eLazy;\n    }\n  }\n\n  // LazySegmentTree() = default;\n\
    \  LazySegmentTree(int n, const F f, const G g, const H h, const T &e, const E\
    \ &eLazy): n(n), f(f), g(g), h(h), e(e), eLazy(eLazy){\n    sz = 1;\n    height\
    \ = 0;\n    while(sz < n) sz <<= 1, ++height;\n    data.assign(2 * sz, e);\n \
    \   lazy.assign(2 * sz, eLazy);\n  }\n\n  void set(int k, const T &x){\n    k\
    \ += sz;\n    for(int i = height; i > 0; --i) propagate(k >> i);\n    data[k]\
    \ = x;\n    for(int i = 1; i <= height; ++i) update(k >> i);\n  }\n\n  T query(int\
    \ l, int r){\n    if(l >= r) return e;\n    l += sz;\n    r += sz;\n    for(int\
    \ i = height; i > 0; --i){\n      if(((l >> i) << i) != l) propagate(l >> i);\n\
    \      if(((r >> i) << i) != r) propagate((r - 1) >> i);\n    }\n    T lval =\
    \ e, rval = e;\n    for(; l < r; l >>= 1, r >>= 1){\n      if(l & 1) lval = f(lval,\
    \ data[l++]);\n      if(r & 1) rval = f(data[--r], rval);\n    }\n    return f(lval,\
    \ rval);\n  }\n\n  void apply(int k, const E &x){\n    k += sz;\n    for(int i\
    \ = height; i > 0; --i) propagate(k >> i);\n    data[k] = g(data[k], x);\n   \
    \ for(int i = 1; i <= height; ++i) update(k >> i);\n  }\n\n  void applyRange(int\
    \ l, int r, const E &x){\n    if(l >= r) return;\n    l += sz;\n    r += sz;\n\
    \    for(int i = height; i > 0; --i){\n      if(((l >> i) << i) != l) propagate(l\
    \ >> i);\n      if(((r >> i) << i) != r) propagate((r - 1) >> i);\n    }\n\n \
    \   int l2 = l, r2 = r;\n    for(; l < r; l >>= 1, r >>= 1){\n      if(l & 1)\
    \ all_apply(l++, x);\n      if(r & 1) all_apply(--r, x);\n    }\n    l = l2, r\
    \ = r2;\n\n    for(int i = 1; i <= height; ++i){\n      if(((l >> i) << i) !=\
    \ l) update(l >> i);\n      if(((r >> i) << i) != r) update((r - 1) >> i);\n \
    \   }\n  }\n\n  template <typename C>\n  int findFirst(int l, const C &check){\n\
    \    if(l >= n) return n;\n    l += sz;\n    for(int i = height; i > 0; --i) propagate(l\
    \ >> i);\n    T sum = e;\n    do{\n      while((l & 1) == 0) l >>= 1;\n      if(check(f(sum,\
    \ data[l]))){\n        while(l < sz) {\n          propagate(l);\n          l <<=\
    \ 1;\n          auto nxt = f(sum, data[l]);\n          if(!check(nxt)){\n    \
    \        sum = nxt;\n            ++l;\n          }\n        }\n        return\
    \ l + 1 - sz;\n      }\n      sum = f(sum, data[l++]);\n    }while((l & -l) !=\
    \ l);\n    return n;\n  }\n\n  template <typename C>\n  int findLast(int r, const\
    \ C &check){\n    if(r <= 0) return -1;\n    r += sz;\n    for(int i = height;\
    \ i > 0; --i) propagate((r - 1) >> i);\n    T sum = e;\n    do{\n      --r;\n\
    \      while(r > 1 and (r & 1)) r >>= 1;\n      if(check(f(data[r], sum))){\n\
    \        while(r < sz){\n          propagate(r);\n          r = (r << 1) + 1;\n\
    \          auto nxt = f(data[r], sum);\n          if(!check(nxt)){\n         \
    \   sum = nxt;\n            --r;\n          }\n        }\n        return r - sz;\n\
    \      }\n      sum = f(data[r], sum);\n    }while((r & -r) != r);\n    return\
    \ -1;\n  }\n};\n#line 2 \"data-structure/segment-tree/range-affine-range-sum-query.hpp\"\
    \ntemplate <typename T>\nstruct RangeAffineRangeSumQuery{\n  using P = pair<T,T>;\n\
    \n  int n;\n  T mod;\n\n  function<P(P,P)> f = [&](P a, P b)->P{\n    return {(a.first\
    \ + b.first) % mod, (a.second + b.second) % mod};\n  };\n\n  function<P(P,P)>\
    \ g = [&](P a, P b)->P{\n    return {(a.first * b.first + a.second * b.second)\
    \ % mod, a.second % mod};\n  };\n\n  function<P(P,P)> h = [&](P a, P b)->P{\n\
    \    return {a.first * b.first % mod, (a.second * b.first + b.second) % mod};\n\
    \  };\n\n  LazySegmentTree<P, P> seg;\n  RangeAffineRangeSumQuery(int n, T mod):\
    \ n(n), mod(mod), seg(n, f, g, h, P({0, 0}), P({1, 0})){\n\n  }\n\n  void set(int\
    \ k, T &x){\n    seg.set(k, {x, 1});\n  }\n\n  void applyRange(int l, int r, P\
    \ p){\n    seg.applyRange(l, r, p);\n  }\n\n  T query(int l, int r){\n    return\
    \ seg.query(l, r).first;\n  }\n};\n#line 5 \"verify/LC-RangeAffineRangeSum.test.cpp\"\
    \n\nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  VL a = input(N);\n\n  RangeAffineRangeSumQuery<ll>\
    \ rsq(N, 998244353);\n  REP(i,N) rsq.set(i, a[i]);\n  REP(i,Q){\n    int t;\n\
    \    cin >> t;\n    if(t == 0){\n      int l, r;\n      ll b, c;\n      cin >>\
    \ l >> r >> b >> c;\n      rsq.applyRange(l, r, {b, c});\n    }else{\n      int\
    \ l, r;\n      cin >> l >> r;\n      cout << rsq.query(l, r) << endl;\n    }\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/range_affine_range_sum\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../data-structure/segment-tree/range-affine-range-sum-query.hpp\"\
    \n\nint main(){\n  int N, Q;\n  cin >> N >> Q;\n  VL a = input(N);\n\n  RangeAffineRangeSumQuery<ll>\
    \ rsq(N, 998244353);\n  REP(i,N) rsq.set(i, a[i]);\n  REP(i,Q){\n    int t;\n\
    \    cin >> t;\n    if(t == 0){\n      int l, r;\n      ll b, c;\n      cin >>\
    \ l >> r >> b >> c;\n      rsq.applyRange(l, r, {b, c});\n    }else{\n      int\
    \ l, r;\n      cin >> l >> r;\n      cout << rsq.query(l, r) << endl;\n    }\n\
    \  }\n}\n"
  dependsOn:
  - template/template.hpp
  - data-structure/segment-tree/range-affine-range-sum-query.hpp
  - data-structure/segment-tree/lazy-segment-tree.hpp
  isVerificationFile: true
  path: verify/LC-RangeAffineRangeSum.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 01:31:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/LC-RangeAffineRangeSum.test.cpp
layout: document
redirect_from:
- /verify/verify/LC-RangeAffineRangeSum.test.cpp
- /verify/verify/LC-RangeAffineRangeSum.test.cpp.html
title: verify/LC-RangeAffineRangeSum.test.cpp
---
