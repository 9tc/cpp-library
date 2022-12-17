template <typename T>
struct SegmentTree{
  using F = function<T(T, T)>;
  int sz;
  vector<T> seg;

  const F f;
  const T e;

  SegmentTree(int n, const F f, const T &e): f(f), e(e){
    sz = 1;
    while(sz < n) sz <<= 1;
    seg.assign(2 * sz, e);
  }

  void set(int k, const T &x){
    seg[k+sz] = x;
  }

  void build(){
    for(int k = sz - 1; k > 0; --k){
      seg[k] = f(seg[2*k+0], seg[2*k+1]);
    }
  }

  void update(int k, const T &x){
    k += sz;
    seg[k] = x;
    while(k >>= 1){
      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
    }
  }

  T query(int a, int b){
    T l = e, r = e;
    for(a += sz, b += sz; a < b; a >>= 1, b >>= 1){
      if(a & 1) l = f(l, seg[a++]);
      if(b & 1) r = f(seg[--b], r);
    }
    return f(l, r);
  }

  T operator[](const int &k) const{
    return seg[k + sz];
  }

  template <typename C>
  int findSubtree(int a, const C &check, T &m, bool type){
    while(a < sz){
      T nxt = type ? f(seg[2 * a + type], m): f(m, seg[2 * a + type]);
      if(check(nxt)) a = 2 * a + type;
      else m = nxt, a = 2 * a + 1 - type;
    }
    return a - sz;
  }

  template<typename C>
  int findFirst(int a, const C &check){
    T l = e;
    if(a <= 0){
      if(check(f(l, seg[1]))) return findSubtree(1, check, l, false);
      return -1;
    }
    int b = sz;
    for(a += sz, b += sz; a < b; a >>= 1, b >>= 1){
      if(a & 1) {
        T nxt = f(l, seg[a]);
        if(check(nxt)) return findSubtree(a, check, l, false);
        l = nxt;
        ++a;
      }
    }
    return -1;
  }

  template <typename C>
  int findLast(int b, const C &check){
    T r = e;
    if(b >= sz) {
      if(check(f(seg[1], r))) return findSubtree(1, check, r, true);
      return -1;
    }
    int a = sz;
    for(b += sz; a < b; a >>= 1, b >>= 1){
      if(b & 1){
        T nxt = f(seg[--b], r);
        if(check(nxt)) return findSubtree(b, check, r, true);
        r = nxt;
      }
    }
    return -1;
  }
};
