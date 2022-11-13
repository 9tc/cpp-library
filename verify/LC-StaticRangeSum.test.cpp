#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include "../template/template.hpp"
#include "../data-structure/cumulative-sum.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  VL a = input(N);
  StaticRangeSum<ll> cs(a);

  REP(i,N){
    int l, r;
    cin >> l >> r;
    cout << cs.get(l, r) << endl;
  }
}
