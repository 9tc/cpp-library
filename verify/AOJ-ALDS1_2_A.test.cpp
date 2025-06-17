#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A"

#include "../template.hpp"
#include "../sort/bubble-sort.hpp"

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i,n) cin >> a[i];

  // バブルソートを実行（AOJでは詳細表示は不要）
  int swapCount = bubbleSort(a, false);

  // 結果を出力
  for(int i = 0; i < n; ++i){
    cout << (i ? " ": "") << a[i];
  }
  cout << endl;
  cout << swapCount << endl;
}
