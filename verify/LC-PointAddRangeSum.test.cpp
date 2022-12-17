#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../template/template.hpp"
#include "../data-structure/segment-tree/range-sum-query.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  VL a = input(N);
  RangeSumQuery rsq(N);
  REP(i,n) rsq.update(i, a[i]);

  REP(i,Q){
    int state;
    cin >> state;
    if(state == 0){
      int p, x;
      cin >> p >> x;
      rsq.add(p, x);
    }else{
      int l, r;
      cin >> l >> r;
      cout << rsq.query(l, r) << '\n';
    }
  }
}
