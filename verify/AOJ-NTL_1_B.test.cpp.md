---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  - icon: ':heavy_check_mark:'
    path: utils/modint.hpp
    title: utils/modint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B
  bundledCode: "#line 1 \"verify/AOJ-NTL_1_B.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#line 1 \"template.hpp\"\n#include<bits/stdc++.h>\nusing ll = long long;\n\
    #define REP(i, n) for(ll i = 0; (i) < ll(n); ++ (i))\n#define FOR(i, m, n) for(ll\
    \ i = (m); (i) <= ll(n); ++ (i))\n#define REPR(i, n) for(ll i = ll(n) - 1; (i)\
    \ >= 0; -- (i))\n#define FORR(i, m, n) for(ll i = ll(n); (i) >= ll(m); -- (i))\n\
    #define ALL(x) x.begin(),x.end()\n\n#define INF (int)1e9\n#define LLINF (long\
    \ long)1e18\n#define MOD (int)(1e9+7)\n#define MOD9 (int)998244353\n#define PI\
    \ 3.141592653589\n#define PB push_back\n#define F first\n#define S second\n\n\
    #define YESNO(T) if(T){cout<<\"YES\"<<endl;}else{cout<<\"NO\"<<endl;}\n#define\
    \ yesno(T) if(T){cout<<\"yes\"<<endl;}else{cout<<\"no\"<<endl;}\n#define YesNo(T)\
    \ if(T){cout<<\"Yes\"<<endl;}else{cout<<\"No\"<<endl;}\n#define Yes(T) {cout<<\"\
    Yes\"<<endl; if(T) return 0;}\n#define No(T) {cout <<\"No\"<<endl; if(T) return\
    \ 0;}\n#define YES(T) {cout<<\"YES\"<<endl; if(T) return 0;}\n#define NO(T) {cout\
    \ <<\"NO\"<<endl; if(T) return 0;}\n\n#define Graph vector<vector<int> >\n#define\
    \ CostGraph vector<vector<pair<int,ll> > >\n#define PII pair<int,int>\n#define\
    \ PLL pair<ll,ll>\n#define VI vector<int>\n#define VL vector<ll>\n#define VVI\
    \ vector<vector<int> >\n#define VVL vector<vector<ll> >\n#define VPII vector<pair<int,int>\
    \ >\n#define VPLL vector<pair<ll,ll> >\n\n#define DDD fixed<<setprecision(10)\n\
    #define PAD setfill('0')<<right<<setw(8)\n\ntemplate <class T>\ninline bool chmin(T\
    \ &a, T b) {\n  if(a > b){ a = b; return true;}\n  return false;\n}\ntemplate\
    \ <class T>\ninline bool chmax(T &a, T b) {\n  if(a < b){a = b; return true;}\n\
    \  return false;\n}\nstruct input{\n  int n;\n  input() {}\n  input(int n_) :\
    \ n(n_){};\n  template <class T>\n  operator T(){\n    T ret;\n    std::cin >>\
    \ ret;\n    return ret;\n  }\n  template <class T>\n  operator std::vector<T>()\
    \ {\n    std::vector<T> ret(n);\n    REP(i,n) std::cin >> ret[i];\n    return\
    \ ret;\n  }\n};\ntemplate <class T>\ninline void printVec(std::vector<T> v){\n\
    \  REP(i,v.size()){\n    if(i) std::cout << \" \";\n    std::cout << v[i];\n \
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"utils/modint.hpp\"\
    \ntemplate <int mod>\nstruct ModInt {\n  int val;\n\n  ModInt() : val(0) {}\n\n\
    \  ModInt(int64_t value) : val(value >= 0 ? value % mod : (mod - (-value) % mod)\
    \ % mod) {}\n\n  ModInt &operator+=(const ModInt &p) {\n    if ((val += p.val)\
    \ >= mod) val -= mod;\n    return *this;\n  }\n\n  ModInt &operator-=(const ModInt\
    \ &p) {\n    if ((val += mod - p.val) >= mod) val -= mod;\n    return *this;\n\
    \  }\n\n  ModInt &operator*=(const ModInt &p) {\n    val = (int)(1LL * val * p.val\
    \ % mod);\n    return *this;\n  }\n\n  ModInt &operator/=(const ModInt &p) {\n\
    \    *this *= p.inverse();\n    return *this;\n  }\n\n  ModInt operator-() const\
    \ { return ModInt(-val); }\n\n  ModInt operator+(const ModInt &p) const { return\
    \ ModInt(*this) += p; }\n\n  ModInt operator-(const ModInt &p) const { return\
    \ ModInt(*this) -= p; }\n\n  ModInt operator*(const ModInt &p) const { return\
    \ ModInt(*this) *= p; }\n\n  ModInt operator/(const ModInt &p) const { return\
    \ ModInt(*this) /= p; }\n\n  bool operator==(const ModInt &p) const { return val\
    \ == p.val; }\n\n  bool operator!=(const ModInt &p) const { return val != p.val;\
    \ }\n\n  ModInt inverse() const {\n    int a = val, b = mod, u = 1, v = 0, t;\n\
    \    while (b > 0) {\n      t = a / b;\n      swap(a -= t * b, b);\n      swap(u\
    \ -= t * v, v);\n    }\n    return ModInt(u);\n  }\n\n  template<typename T>\n\
    \  ModInt pow(T n) const {\n    ModInt ret(1), mul(val);\n    while (n > 0) {\n\
    \      if (n & 1) ret *= mul;\n      mul *= mul;\n      n >>= 1;\n    }\n    return\
    \ ret;\n  }\n\n  friend ostream &operator<<(ostream &os, const ModInt &p) {\n\
    \    return os << p.val;\n  }\n\n  friend istream &operator>>(istream &is, ModInt\
    \ &a) {\n    int64_t t;\n    is >> t;\n    a = ModInt<mod>(t);\n    return (is);\n\
    \  }\n\n  static int get_mod() { return mod; }\n};\n\nusing modint998244353 =\
    \ ModInt<998244353>;\nusing modint1000000007 = ModInt<1000000007>;\n#line 5 \"\
    verify/AOJ-NTL_1_B.test.cpp\"\n\nint main(){\n  modint1000000007 m;\n  int n;\n\
    \  cin >> m >> n;\n\n  cout << m.pow(n) << endl;  \n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B\"\
    \n\n#include \"../template.hpp\"\n#include \"../utils/modint.hpp\"\n\nint main(){\n\
    \  modint1000000007 m;\n  int n;\n  cin >> m >> n;\n\n  cout << m.pow(n) << endl;\
    \  \n}\n"
  dependsOn:
  - template.hpp
  - utils/modint.hpp
  isVerificationFile: true
  path: verify/AOJ-NTL_1_B.test.cpp
  requiredBy: []
  timestamp: '2023-07-16 15:58:42+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/AOJ-NTL_1_B.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-NTL_1_B.test.cpp
- /verify/verify/AOJ-NTL_1_B.test.cpp.html
title: verify/AOJ-NTL_1_B.test.cpp
---
