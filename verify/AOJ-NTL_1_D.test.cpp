#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C"

#include "../template/template.hpp"
#include "../math/eulers-phi-function.hpp"

int main(){
  int n;
  cin >> n;
  cout << eulersPhiFunction<int>(n) << endl;
}
