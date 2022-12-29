#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D"

#include "../template/template.hpp"
#include "../dp/longest-increasing-subsequence.hpp"

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i,n) cin >> a[i];
  cout << lis(a).size() << endl;
}
