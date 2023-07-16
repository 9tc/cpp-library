#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C"

#include "../template.hpp"
#include "../math/is-prime.hpp"

int main(){
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 0; i < n; ++i){
    int t;
    cin >> t;
    if(isPrime(t)) ++ans;
  }
  cout << ans << endl;
}
