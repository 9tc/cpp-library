#define PROBLEM "https://judge.yosupo.jp/problem/cycle_detection"

#include "../template.hpp"
#include "../graph/cycle-detection.hpp"

int main(){
  int N, M;
  cin >> N >> M;
  Graph G(N);
  map<pair<int,int>, int> edges;
  REP(i,M){
    int u, v;
    cin >> u >> v;
    G[u].PB(v);
    edges[{u, v}] = i;
  }

  auto cycle = detectCycle(G);
  if(cycle.size()){
    cout << cycle.size() << endl;
    REP(i,cycle.size()){
      cout << edges[{cycle[i], i+1 == cycle.size() ? cycle[0] : cycle[i+1]}] << endl;
    }
  }else{
    cout << -1 << endl;
  }
}
