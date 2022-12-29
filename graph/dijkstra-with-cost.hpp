vector<ll> dijkstraWithCost(CostGraph& G, int s){
  int n = G.size();
  vector<ll> dist(n, LLINF);
  dist[s] = 0;
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
  pq.emplace(0, s);
  while(!pq.empty()) {
    auto [nowCost, now] = pq.top(); pq.pop();
    if(dist[now] < nowCost) continue;
    for(auto [to, cost]: G[now]) {
      if(chmin(dist[to], nowCost + cost)) pq.emplace(nowCost + cost, to);
    }
  }
  return dist;
}
