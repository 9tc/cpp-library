#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D"

#include "../template.hpp"
#include "../math/divisor.hpp"

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int res = 0;
  for(auto &t: getDivisors(c)){
    if(a <= t && t <= b) ++res;
  }
  cout << res << endl;
}
