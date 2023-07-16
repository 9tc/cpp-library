#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include "../template.hpp"
#include "../data-structure/cumulative-sum.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  VL a = input(N);
  CumulativeSum<ll> cs(a);

  REP(i,Q){
    int l, r;
    cin >> l >> r;
    cout << cs.get(l, r) << endl;
  }
}
