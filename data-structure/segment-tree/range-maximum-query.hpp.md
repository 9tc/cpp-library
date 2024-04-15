---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/segment-tree/segment-tree.hpp
    title: data-structure/segment-tree/segment-tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
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
    \ 2 \"data-structure/segment-tree/range-maximum-query.hpp\"\nstruct RangeMaximumQuery{\n\
    \  int n;\n  SegmentTree<ll> seg;\n    RangeMaximumQuery(int n, ll e): n(n), seg(n,\
    \ [&](ll l, ll r){\n    return max(l, r);\n  }, e){\n\n  }\n\n  RangeMaximumQuery(int\
    \ n): n(n), seg(n, [&](ll l, ll r){\n    return max(l, r);\n  }, -LLONG_MAX){\n\
    \n  }\n\n  void update(int k, ll val){\n    seg.update(k, val);\n  }\n\n  ll query(int\
    \ l, int r){\n    return seg.query(l, r);\n  }\n};\n"
  code: "#include \"segment-tree.hpp\"\nstruct RangeMaximumQuery{\n  int n;\n  SegmentTree<ll>\
    \ seg;\n    RangeMaximumQuery(int n, ll e): n(n), seg(n, [&](ll l, ll r){\n  \
    \  return max(l, r);\n  }, e){\n\n  }\n\n  RangeMaximumQuery(int n): n(n), seg(n,\
    \ [&](ll l, ll r){\n    return max(l, r);\n  }, -LLONG_MAX){\n\n  }\n\n  void\
    \ update(int k, ll val){\n    seg.update(k, val);\n  }\n\n  ll query(int l, int\
    \ r){\n    return seg.query(l, r);\n  }\n};\n"
  dependsOn:
  - data-structure/segment-tree/segment-tree.hpp
  isVerificationFile: false
  path: data-structure/segment-tree/range-maximum-query.hpp
  requiredBy: []
  timestamp: '2023-07-29 11:25:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/segment-tree/range-maximum-query.hpp
layout: document
redirect_from:
- /library/data-structure/segment-tree/range-maximum-query.hpp
- /library/data-structure/segment-tree/range-maximum-query.hpp.html
title: data-structure/segment-tree/range-maximum-query.hpp
---