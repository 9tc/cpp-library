#include "segment-tree.hpp"
struct RangeMinimumQuery{
  int n;
  SegmentTree<ll> seg;
  RangeMinimumQuery(int n): n(n), seg(n, [&](ll l, ll r){
    return min(l, r);
  }, LLONG_MAX){

  }

  void update(int k, ll val){
    seg.update(k, val);
  }

  ll query(int l, int r){
    return seg.query(l, r);
  }
};
