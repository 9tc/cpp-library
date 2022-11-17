#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C"

#include "../template/template.hpp"
#include "../math/lcm.hpp"

int main(){
  int n;
  cin >> n;
  int a;
  cin >> a;
  REP(i,n-1){
    int b;
    cin >> b;
    a = LCM(a, b);
  }
  cout << a << endl;
}
