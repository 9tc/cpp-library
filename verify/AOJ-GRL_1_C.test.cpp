#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C"

#include "../template.hpp"
#include "../graph/warshall-floyd.hpp"

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<ll>> mat(N, vector<ll>(N, LLINF));
  REP(i,N) mat[i][i] = 0;
  REP(i,M){
    int s, t, d;
    cin >> s >> t >> d;
    mat[s][t] = d;
  }

  auto res = warshallFloyd(mat, LLINF);
  bool hasNegativeCycle = false;
  REP(i,N) if(res[i][i] != 0) hasNegativeCycle = true;
  if(hasNegativeCycle) cout << "NEGATIVE CYCLE" << endl;
  else{
    REP(i,N){
      REP(j,N){
        if(res[i][j] == LLINF) cout << "INF";
        else cout << res[i][j];
        if(j != N-1) cout << " ";
      }
      cout << endl;
    }
  }
}
