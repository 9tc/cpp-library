#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B"

#include "../template.hpp"
#include "../graph/topological-sort.hpp"

int main() {
  int n, m;
  cin >> n >> m;
  Graph g(n);
  REP(i,m){
    int s, t;
    cin >> s >> t;
    g[s].PB(t);
  }
  auto res = topologicalSort(g);
  for(auto &e: res) cout << e << endl;
}
