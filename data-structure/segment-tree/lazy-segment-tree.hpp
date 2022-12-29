template <typename T, typename E>
struct LazySegmentTree{
  using F = function<T(T, T)>;
  using G = function<T(T, E)>;
  using H = function<E(E, E)>;
  int n, sz, height;
  vector<T> data;
  vector<E> lazy;
  const F f;
  const G g;
  const H h;
  const T e;
  const E eLazy;

  inline void update(int k){
    data[k] = f(data[2 * k + 0], data[2 * k + 1]);
  }

  inline void all_apply(int k, const E &x) {
    data[k] = g(data[k], x);
    if(k < sz) lazy[k] = h(lazy[k], x);
  }

  inline void propagate(int k){
    if(lazy[k] != eLazy){
      all_apply(2 * k + 0, lazy[k]);
      all_apply(2 * k + 1, lazy[k]);
      lazy[k] = eLazy;
    }
  }

  // LazySegmentTree() = default;
  LazySegmentTree(int n, const F f, const G g, const H h, const T &e, const E &eLazy): n(n), f(f), g(g), h(h), e(e), eLazy(eLazy){
    sz = 1;
    height = 0;
    while(sz < n) sz <<= 1, ++height;
    data.assign(2 * sz, e);
    lazy.assign(2 * sz, eLazy);
  }

  void set(int k, const T &x){
    k += sz;
    for(int i = height; i > 0; --i) propagate(k >> i);
    data[k] = x;
    for(int i = 1; i <= height; ++i) update(k >> i);
  }

  T query(int l, int r){
    if(l >= r) return e;
    l += sz;
    r += sz;
    for(int i = height; i > 0; --i){
      if(((l >> i) << i) != l) propagate(l >> i);
      if(((r >> i) << i) != r) propagate((r - 1) >> i);
    }
    T lval = e, rval = e;
    for(; l < r; l >>= 1, r >>= 1){
      if(l & 1) lval = f(lval, data[l++]);
      if(r & 1) rval = f(data[--r], rval);
    }
    return f(lval, rval);
  }

  void apply(int k, const E &x){
    k += sz;
    for(int i = height; i > 0; --i) propagate(k >> i);
    data[k] = g(data[k], x);
    for(int i = 1; i <= height; ++i) update(k >> i);
  }

  void applyRange(int l, int r, const E &x){
    if(l >= r) return;
    l += sz;
    r += sz;
    for(int i = height; i > 0; --i){
      if(((l >> i) << i) != l) propagate(l >> i);
      if(((r >> i) << i) != r) propagate((r - 1) >> i);
    }

    int l2 = l, r2 = r;
    for(; l < r; l >>= 1, r >>= 1){
      if(l & 1) all_apply(l++, x);
      if(r & 1) all_apply(--r, x);
    }
    l = l2, r = r2;

    for(int i = 1; i <= height; ++i){
      if(((l >> i) << i) != l) update(l >> i);
      if(((r >> i) << i) != r) update((r - 1) >> i);
    }
  }

  template <typename C>
  int findFirst(int l, const C &check){
    if(l >= n) return n;
    l += sz;
    for(int i = height; i > 0; --i) propagate(l >> i);
    T sum = e;
    do{
      while((l & 1) == 0) l >>= 1;
      if(check(f(sum, data[l]))){
        while(l < sz) {
          propagate(l);
          l <<= 1;
          auto nxt = f(sum, data[l]);
          if(!check(nxt)){
            sum = nxt;
            ++l;
          }
        }
        return l + 1 - sz;
      }
      sum = f(sum, data[l++]);
    }while((l & -l) != l);
    return n;
  }

  template <typename C>
  int findLast(int r, const C &check){
    if(r <= 0) return -1;
    r += sz;
    for(int i = height; i > 0; --i) propagate((r - 1) >> i);
    T sum = e;
    do{
      --r;
      while(r > 1 and (r & 1)) r >>= 1;
      if(check(f(data[r], sum))){
        while(r < sz){
          propagate(r);
          r = (r << 1) + 1;
          auto nxt = f(data[r], sum);
          if(!check(nxt)){
            sum = nxt;
            --r;
          }
        }
        return r - sz;
      }
      sum = f(data[r], sum);
    }while((r & -r) != r);
    return -1;
  }
};
