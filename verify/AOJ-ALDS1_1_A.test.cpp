#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A"

#include "../template/template.hpp"
#include "../sort/insertion-sort.hpp"

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i,n) cin >> a[i];
  for(int i = 0; i < n; ++i){
    cout << (i ? " ": "") << a[i];
  }
  cout << endl;
  insertionSort(a, true);
}
