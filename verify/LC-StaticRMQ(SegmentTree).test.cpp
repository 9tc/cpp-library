#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#include "../template/template.hpp"
#include "../data-structure/segment-tree/range-minimum-query.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  VI a = input(N);
  RangeMinimumQuery rmq(N);
  REP(i,N) rmq.update(i, a[i]);
  REP(i,Q){
    int l, r;
    cin >> l >> r;
    cout << rmq.query(l, r) << '\n';
  }
}
