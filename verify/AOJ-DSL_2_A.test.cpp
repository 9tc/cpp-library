#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A"

#include "../template/template.hpp"
#include "../data-structure/segment-tree/range-minimum-query.hpp"

int main(){
  int n, q;
  cin >> n >> q;
  RangeMinimumQuery rmq(n);
  REP(i,n) rmq.update(i, INT_MAX);
  REP(i,q){
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) rmq.update(x, y);
    else cout << rmq.query(x, y+1) << '\n';
  }
}
