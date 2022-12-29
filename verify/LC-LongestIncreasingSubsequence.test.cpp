#define PROBLEM "https://judge.yosupo.jp/problem/longest_increasing_subsequence"

#include "../template/template.hpp"
#include "../dp/longest-increasing-subsequence.hpp"

int main(){
  int N;
  cin >> N;
  VI a = input(N);

  auto res = lis(a);
  cout << res.size() << endl;
  printVec(res);
}
