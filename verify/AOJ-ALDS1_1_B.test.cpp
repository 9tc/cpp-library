#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B"

#include "../template.hpp"
#include "../math/gcd.hpp"

int main(){
  int x, y;
  cin >> x >> y;
  cout << GCD(x, y) << endl;
}
