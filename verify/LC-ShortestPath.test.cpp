#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include "../template.hpp"
#include "../graph/dijkstra-with-walk.hpp"

int main(){
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  CostGraph G(N);
  REP(i,M){
    int a, b, c;
    cin >> a >> b >> c;
    G[a].PB({b, c});
  }

  auto [dist, walk] = dijkstraWithWalk(G, s);
  if(dist[t] == LLINF) cout << -1 << endl;
  else{
    VPLL ans;
    ll cur = t;
    while(cur != s){
      ans.push_back({walk[cur], cur});
      cur = walk[cur];
    }
    reverse(ans.begin(), ans.end());
    cout << dist[t] << " " << ans.size() << endl;
    for(auto &[u, v]: ans) cout << u << " " << v << endl;
  }
}
