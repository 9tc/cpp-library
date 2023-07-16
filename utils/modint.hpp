template <int mod>
struct ModInt {
  int val;

  ModInt() : val(0) {}

  ModInt(int64_t value) : val(value >= 0 ? value % mod : (mod - (-value) % mod) % mod) {}

  Modint(int64_t value, int m) : val(value >= 0 ? value % m : (m - (-value) % m) % m), mod(m) {}

  ModInt &operator+=(const ModInt &p) {
    if ((val += p.val) >= mod) val -= mod;
    return *this;
  }

  ModInt &operator-=(const ModInt &p) {
    if ((val += mod - p.val) >= mod) val -= mod;
    return *this;
  }

  ModInt &operator*=(const ModInt &p) {
    val = (int)(1LL * val * p.val % mod);
    return *this;
  }

  ModInt &operator/=(const ModInt &p) {
    *this *= p.inverse();
    return *this;
  }

  ModInt operator-() const { return ModInt(-val); }

  ModInt operator+(const ModInt &p) const { return ModInt(*this) += p; }

  ModInt operator-(const ModInt &p) const { return ModInt(*this) -= p; }

  ModInt operator*(const ModInt &p) const { return ModInt(*this) *= p; }

  ModInt operator/(const ModInt &p) const { return ModInt(*this) /= p; }

  bool operator==(const ModInt &p) const { return val == p.val; }

  bool operator!=(const ModInt &p) const { return val != p.val; }

  ModInt inverse() const {
    int a = val, b = mod, u = 1, v = 0, t;
    while (b > 0) {
      t = a / b;
      swap(a -= t * b, b);
      swap(u -= t * v, v);
    }
    return ModInt(u);
  }

  template<typename T>
  ModInt pow(T n) const {
    ModInt ret(1), mul(val);
    while (n > 0) {
      if (n & 1) ret *= mul;
      mul *= mul;
      n >>= 1;
    }
    return ret;
  }

  friend ostream &operator<<(ostream &os, const ModInt &p) {
    return os << p.val;
  }

  friend istream &operator>>(istream &is, ModInt &a) {
    int64_t t;
    is >> t;
    a = ModInt<mod>(t);
    return (is);
  }

  static int get_mod() { return mod; }
};

template<typename T>
T factorial(const int n){
  static std::vector<T> v = {1};
  while(v.size() <= n) v.push_back(v.back() * v.size());
  return v[n];
}

template<typename T>
T binom(const int n, const int k){
  return factorial<T>(n) / factorial<T>(k) / factorial<T>(n - k);
}

using modint998244353 = ModInt<998244353>;
using modint1000000007 = ModInt<1000000007>;