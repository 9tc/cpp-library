template<class T>
struct StaticRangeSum{
  vector<T> data;
  vector<T> sum;
  bool flgBuild;

  StaticRangeSum(){
    flgBuild = false;
  }

  StaticRangeSum(int n): data(n, 0), sum(n+1, 0){
    flgBuild = false;
  }

  StaticRangeSum(vector<T> &v): data(v){
    sum(v.size()+1, 0);
    flgBuild = false;
    build();
  }

  void update(int it, T value){
    flgBuild = false;
    data[it] = value;
  }

  void add(int it, T value){
    flgBuild = false;
    data[it] += value;
  }

  void build(){
    if(flgBuild) return;
    for(int i = 0; i < data.size(); ++i){
      sum[i+1] = sum[i] + data[i];
    }
    flgBuild = true;
  }

  T get(int l, int r) const{
    if(!flgBuild) build();
    return sum[r] - sum[l];
  }
};
