#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_5_B"

#include "../template.hpp"
#include "../data-structure/cumulative-sum-2d.hpp"

int main() {
  int n = input();
  CumulativeSum2D<ll> cum(1001);
  REP(i, n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cum.imos(a, b, c, d, 1);
  }
  ll ans = 0;
  REP(i, 1001) REP(j, 1001) chmax(ans, cum.get(i, j));
  cout << ans << endl;
}
