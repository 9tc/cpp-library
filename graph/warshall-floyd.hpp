template<typename T>
vector<vector<T>> warshallFloyd(vector<vector<T>> mat, T infty){
  int n = mat.size();
  for(int k = 0; k < n; ++k){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        if(mat[i][k] == infty || mat[k][j] == infty) continue;
        mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
      }
    }
  }
  return mat;
}
