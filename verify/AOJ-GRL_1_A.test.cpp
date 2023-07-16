#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A"

#include "../template.hpp"
#include "../graph/dijkstra-with-cost.hpp"

int main(){
  int N, M, r;
  cin >> N >> M >> r;
  CostGraph G(N);
  REP(i,M){
    int s, t , d;
    cin >> s >> t >> d;
    G[s].push_back({t, d});
  }

  auto dist = dijkstraWithCost(G, r);
  REP(i,N) {
    if(dist[i] == LLINF) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }
}
