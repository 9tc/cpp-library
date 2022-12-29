#define PROBLEM "https://judge.yosupo.jp/problem/range_affine_range_sum"

#include "../template/template.hpp"
#include "../data-structure/segment-tree/range-affine-range-sum-query.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  VL a = input(N);

  RangeAffineRangeSumQuery<ll> rsq(N, 998244353);
  REP(i,N) rsq.set(i, a[i]);
  REP(i,Q){
    int t;
    cin >> t;
    if(t == 0){
      int l, r;
      ll b, c;
      cin >> l >> r >> b >> c;
      rsq.applyRange(l, r, {b, c});
    }else{
      int l, r;
      cin >> l >> r;
      cout << rsq.query(l, r) << endl;
    }
  }
}
