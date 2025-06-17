vector<int> ZAlgorithm(string &s){
  int n = s.length();
  // 空文字列の場合は空のベクトルを返す
  if (n == 0) return vector<int>();

  vector<int> res(n);
  res[0] = n;
  int i = 1, j = 0;
  while(i < n){
    while(i + j < n && s[j] == s[i + j]) ++j;
    res[i] = j;

    if(j == 0){
      ++i;
      continue;
    }
    int k = 1;
    while(k < j && k + res[k] < j){
      res[i + k] = res[k], ++k;
    }
    i += k, j -= k;
  }
  return res;
}
