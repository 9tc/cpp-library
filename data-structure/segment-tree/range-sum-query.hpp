#include "segment-tree.hpp"
struct RangeSumQuery{
  int n;
  SegmentTree<ll> seg;
  RangeSumQuery(int n): n(n), seg(n, [&](ll l, ll r){
    return l + r;
  }, 0){

  }

  void update(int k, int val){
    seg.update(k, val);
  }

  void add(int k, int val){
    seg.update(k, seg.query(k, k+1) + val);
  }

  ll query(int l, int r){
    return seg.query(l, r);
  }
};
