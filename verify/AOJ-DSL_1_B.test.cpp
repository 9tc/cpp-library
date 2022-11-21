#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B"

#include "../template/template.hpp"
#include "../data-structure/weighted-unionfind.hpp"

int main(){
  int n, q;
  cin >> n >> q;
  WeightedUnionFind wuf(n, 0);
  REP(i,q){
    int t;
    cin >> t;
    if(t == 0){
      int x, y, z;
      cin >> x >> y >> z;

      wuf.merge(y, x, z);
    }else{
      int x, y;
      cin >> x >> y;
      if(wuf.isSame(x, y)){
        cout << wuf.getDiff(y, x) << endl;
      }else{
        cout << "?" << endl;
      }
    }
  }
}
