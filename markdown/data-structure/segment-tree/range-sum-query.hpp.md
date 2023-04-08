---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data-structure/segment-tree/segment-tree.hpp
    title: data-structure/segment-tree/segment-tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/LC-PointAddRangeSum.test.cpp
    title: verify/LC-PointAddRangeSum.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/segment-tree/segment-tree.hpp\"\ntemplate\
    \ <typename T>\nstruct SegmentTree{\n  using F = function<T(T, T)>;\n  int sz;\n\
    \  vector<T> seg;\n\n  const F f;\n  const T e;\n\n  SegmentTree(int n, const\
    \ F f, const T &e): f(f), e(e){\n    sz = 1;\n    while(sz < n) sz <<= 1;\n  \
    \  seg.assign(2 * sz, e);\n  }\n\n  void set(int k, const T &x){\n    seg[k+sz]\
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
    \ 2 \"data-structure/segment-tree/range-sum-query.hpp\"\nstruct RangeSumQuery{\n\
    \  int n;\n  SegmentTree<ll> seg;\n  RangeSumQuery(int n): n(n), seg(n, [&](ll\
    \ l, ll r){\n    return l + r;\n  }, 0){\n\n  }\n\n  void update(int k, int val){\n\
    \    seg.update(k, val);\n  }\n\n  void add(int k, int val){\n    seg.update(k,\
    \ seg.query(k, k+1) + val);\n  }\n\n  ll query(int l, int r){\n    return seg.query(l,\
    \ r);\n  }\n};\n"
  code: "#include \"segment-tree.hpp\"\nstruct RangeSumQuery{\n  int n;\n  SegmentTree<ll>\
    \ seg;\n  RangeSumQuery(int n): n(n), seg(n, [&](ll l, ll r){\n    return l +\
    \ r;\n  }, 0){\n\n  }\n\n  void update(int k, int val){\n    seg.update(k, val);\n\
    \  }\n\n  void add(int k, int val){\n    seg.update(k, seg.query(k, k+1) + val);\n\
    \  }\n\n  ll query(int l, int r){\n    return seg.query(l, r);\n  }\n};\n"
  dependsOn:
  - data-structure/segment-tree/segment-tree.hpp
  isVerificationFile: false
  path: data-structure/segment-tree/range-sum-query.hpp
  requiredBy: []
  timestamp: '2022-12-18 17:34:43+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/LC-PointAddRangeSum.test.cpp
documentation_of: data-structure/segment-tree/range-sum-query.hpp
layout: document
redirect_from:
- /library/data-structure/segment-tree/range-sum-query.hpp
- /library/data-structure/segment-tree/range-sum-query.hpp.html
title: data-structure/segment-tree/range-sum-query.hpp
---
