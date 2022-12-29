vector<int> detectCycle(Graph &g){
  int n = g.size();
  const int UNUSED = 0;
  const int USING = 1;
  const int USED = 2;
  vector<int> status(n, UNUSED);
  vector<int> pre(n);
  vector<int> cycle;

  function<bool(int)> dfs = [&](int u) -> bool{
    status[u] = USING;
    for(auto &v: g[u]){
      if(status[v] == UNUSED){
        pre[v] = u;
        if(dfs(v)) return true;
      }else if(status[v] == USING){
        int cur = u;
        while(cur != v){
          cycle.push_back(pre[cur]);
          cur = pre[cur];
        }
        cycle.push_back(u);
        return true;
      }
    }
    status[u] = USED;
    return false;
  };

  for(int i = 0; i < g.size(); ++i){
    if(status[i] == UNUSED && dfs(i)){
      reverse(cycle.begin(), cycle.end());
      return cycle;
    }
  }
  return {};
};
