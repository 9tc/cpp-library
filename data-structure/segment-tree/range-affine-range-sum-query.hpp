#include "lazy-segment-tree.hpp"
template <typename T>
struct RangeAffineRangeSumQuery{
  using P = pair<T,T>;

  int n;
  T mod;

  function<P(P,P)> f = [&](P a, P b)->P{
    return {(a.first + b.first) % mod, (a.second + b.second) % mod};
  };

  function<P(P,P)> g = [&](P a, P b)->P{
    return {(a.first * b.first + a.second * b.second) % mod, a.second % mod};
  };

  function<P(P,P)> h = [&](P a, P b)->P{
    return {a.first * b.first % mod, (a.second * b.first + b.second) % mod};
  };

  LazySegmentTree<P, P> seg;
  RangeAffineRangeSumQuery(int n, T mod): n(n), mod(mod), seg(n, f, g, h, P({0, 0}), P({1, 0})){

  }

  void set(int k, T &x){
    seg.set(k, {x, 1});
  }

  void applyRange(int l, int r, P p){
    seg.applyRange(l, r, p);
  }

  T query(int l, int r){
    return seg.query(l, r).first;
  }
};
