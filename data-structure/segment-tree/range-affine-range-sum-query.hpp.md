---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure/segment-tree/lazy-segment-tree.hpp
    title: data-structure/segment-tree/lazy-segment-tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/LC-RangeAffineRangeSum.test.cpp
    title: verify/LC-RangeAffineRangeSum.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/segment-tree/lazy-segment-tree.hpp\"\ntemplate\
    \ <typename T, typename E>\nstruct LazySegmentTree{\n  using F = function<T(T,\
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
    \ seg.query(l, r).first;\n  }\n};\n"
  code: "#include \"lazy-segment-tree.hpp\"\ntemplate <typename T>\nstruct RangeAffineRangeSumQuery{\n\
    \  using P = pair<T,T>;\n\n  int n;\n  T mod;\n\n  function<P(P,P)> f = [&](P\
    \ a, P b)->P{\n    return {(a.first + b.first) % mod, (a.second + b.second) %\
    \ mod};\n  };\n\n  function<P(P,P)> g = [&](P a, P b)->P{\n    return {(a.first\
    \ * b.first + a.second * b.second) % mod, a.second % mod};\n  };\n\n  function<P(P,P)>\
    \ h = [&](P a, P b)->P{\n    return {a.first * b.first % mod, (a.second * b.first\
    \ + b.second) % mod};\n  };\n\n  LazySegmentTree<P, P> seg;\n  RangeAffineRangeSumQuery(int\
    \ n, T mod): n(n), mod(mod), seg(n, f, g, h, P({0, 0}), P({1, 0})){\n\n  }\n\n\
    \  void set(int k, T &x){\n    seg.set(k, {x, 1});\n  }\n\n  void applyRange(int\
    \ l, int r, P p){\n    seg.applyRange(l, r, p);\n  }\n\n  T query(int l, int r){\n\
    \    return seg.query(l, r).first;\n  }\n};\n"
  dependsOn:
  - data-structure/segment-tree/lazy-segment-tree.hpp
  isVerificationFile: false
  path: data-structure/segment-tree/range-affine-range-sum-query.hpp
  requiredBy: []
  timestamp: '2022-12-30 01:29:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/LC-RangeAffineRangeSum.test.cpp
documentation_of: data-structure/segment-tree/range-affine-range-sum-query.hpp
layout: document
redirect_from:
- /library/data-structure/segment-tree/range-affine-range-sum-query.hpp
- /library/data-structure/segment-tree/range-affine-range-sum-query.hpp.html
title: data-structure/segment-tree/range-affine-range-sum-query.hpp
---
