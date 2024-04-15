vector<ll> dijkstra(Graph& G, int s){
    int n = G.size();
    vector<ll> dist(n, LLINF);
    dist[s] = 0;
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.emplace(0, s);
    while(!pq.empty()) {
        auto [nowCost, now] = pq.top(); pq.pop();
        if(dist[now] < nowCost) continue;
        for(auto to: G[now]) {
            if(chmin(dist[to], nowCost + 1)) pq.emplace(nowCost + 1, to);
        }
    }
    return dist;
}
