#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "../template/template.hpp"
#include "../data-structure/unionfind.hpp"

int main(){
  int N, Q;
  cin >> N >> Q;
  UnionFind uf(n);
  int t, u, v;
  REP(i,Q){
    cin >> t >> u >> v;
    if(t) cout << (int)uf.isSame(u, v) << endl;
    else uf.merge(u, v);
  }
}
