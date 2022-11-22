#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include "../template/template.hpp"
#include "../math/prime-factorize.hpp"

int main(){
  int n;
  cin >> n;

  cout << n << ":";
  for(auto &[key, val]: primeFactorize(n)){
    REP(i,val) cout << " " << key;
  }
  cout << endl;
}
