vector<int> topologicalSort(const Graph &g) {
  const int n = g.size();
  vector<int> deg(n);
  for(int i = 0; i < n; ++i){
    for(auto &to: g[i]){
      ++deg[to];
    }
  }
  stack<int> st;
  for(int i = 0; i < n; ++i) {
    if(deg[i] == 0){
      st.emplace(i);
    }
  }
  vector<int> res;
  while(!st.empty()) {
    auto p = st.top();
    st.pop();
    res.emplace_back(p);
    for(auto &to: g[p]) {
      if(--deg[to] == 0) st.emplace(to);
    }
  }
  return res;
}
