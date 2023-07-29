#include "segment-tree.hpp"
struct RangeMaximumQuery{
  int n;
  SegmentTree<ll> seg;
    RangeMaximumQuery(int n, ll e): n(n), seg(n, [&](ll l, ll r){
    return max(l, r);
  }, e){

  }

  RangeMaximumQuery(int n): n(n), seg(n, [&](ll l, ll r){
    return max(l, r);
  }, -LLONG_MAX){

  }

  void update(int k, ll val){
    seg.update(k, val);
  }

  ll query(int l, int r){
    return seg.query(l, r);
  }
};
