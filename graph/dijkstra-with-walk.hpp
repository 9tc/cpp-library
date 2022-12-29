pair<vector<ll>, vector<ll>> dijkstraWithWalk(CostGraph& g, int s){
  int n = g.size();
  vector<ll> dist(n, LLINF);
  vector<ll> walk(n);
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
  pq.emplace(0, s);
  while(!pq.empty()){
    auto [nowCost, now] = pq.top(); pq.pop();
    if(dist[now] < nowCost) continue;
    for(auto [to, cost]: g[now]) {
      if(chmin(dist[to], nowCost + cost)) {
        pq.emplace(nowCost + cost, to);
        walk[to] = now;
      }
    }
  }
  return {dist, walk};
}
