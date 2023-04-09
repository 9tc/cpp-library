#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "../template/template.hpp"
#include "../math/modint.hpp"

int main(){
  modint1000000007 m;
  int n;
  cin >> m >> n;

  cout << m.pow(n) << endl;  
}
