#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E"

#include "../template.hpp"
#include "../math/extend-gcd.hpp"

int main(){
  int a, b, x, y;
  cin >> a >> b;
  auto res = extendGCD(a, b, x, y);
  cout << x << " " << y << endl;
}
