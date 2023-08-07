template<class T>
struct CumulativeSum2D{
  vector<vector<T>> data;
  vector<vector<T>> sum;
  bool flgBuild;

  CumulativeSum2D(){
    flgBuild = false;
  }

  CumulativeSum2D(int n): data(n, vector<T>(n, 0)), sum(n+1, vector<T>(n+1, 0)){
    flgBuild = false;
  }

  CumulativeSum2D(int h, int w): data(h, vector<T>(w, 0)), sum(h+1, vector<T>(w+1, 0)){
    flgBuild = false;
  }

  CumulativeSum2D(vector<vector<T>> &v): data(v), sum(v.size()+1, vector<T>(v[0].size()+1, 0)){
    flgBuild = false;
    build();
  }

  void update(int i, int j, T value){
    flgBuild = false;
    data[i][j] = value;
  }

  void update(pair<int,int> p, T value){
    update(p.first, p.second, value);
  }

  void add(int i, int j, T value){
    flgBuild = false;
    data[i][j] += value;
  }

  void add(pair<int,int> p, T value){
    add(p.first, p.second, value);
  }

  void imos(int x1, int y1, int x2, int y2, T value){
    add(x1, y1, value);
    add(x1, y2, -value);
    add(x2, y1, -value);
    add(x2, y2, value);
  }

  void imos(pair<int,int> p1, pair<int,int> p2, T value){
    imos(p1.first, p1.second, p2.first, p2.second, value);
  }

  void build(){
    if(flgBuild) return;
    for(int i = 0; i < data.size(); ++i){
        for(int j = 0; j < data[i].size(); ++j){
            sum[i+1][j+1] = sum[i+1][j] + sum[i][j+1] - sum[i][j] + data[i][j];
        }
    }
    flgBuild = true;
  }

  T get(int x1, int y1, int x2, int y2){
    if(!flgBuild) build();
    return sum[x2][y2] - sum[x1][y2] - sum[x2][y1] + sum[x1][y1];
  }

  T get(pair<int,int> l, pair<int,int> r){
    return get(l.first, l.second, r.first, r.second);
  }

  T get(int i, int j){
    if(!flgBuild) build();
    return sum[i][j];
  }
  
  T get(pair<int,int> p){
    return get(p.first, p.second);
  }
};
