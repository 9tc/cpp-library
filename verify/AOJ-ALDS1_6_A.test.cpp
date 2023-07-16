#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_A"

#include "../template.hpp"
#include "../sort/bucket-sort.hpp"

int main(){
  int n;
  cin >> n;
  VI a(n);
  REP(i,n) cin >> a[i];
  bucketSort(a);
  printVec(a);
}
