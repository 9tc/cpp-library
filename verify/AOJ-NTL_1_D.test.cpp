#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_D"

#include "../template.hpp"
#include "../math/eulers-phi-function.hpp"

int main(){
  int n;
  cin >> n;
  cout << eulersPhiFunction<int>(n) << endl;
}
