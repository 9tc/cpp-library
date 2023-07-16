---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/AOJ-NTL_1_B.test.cpp
    title: verify/AOJ-NTL_1_B.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"utils/modint.hpp\"\ntemplate <int mod>\nstruct ModInt {\n\
    \  int val;\n\n  ModInt() : val(0) {}\n\n  ModInt(int64_t value) : val(value >=\
    \ 0 ? value % mod : (mod - (-value) % mod) % mod) {}\n\n  ModInt &operator+=(const\
    \ ModInt &p) {\n    if ((val += p.val) >= mod) val -= mod;\n    return *this;\n\
    \  }\n\n  ModInt &operator-=(const ModInt &p) {\n    if ((val += mod - p.val)\
    \ >= mod) val -= mod;\n    return *this;\n  }\n\n  ModInt &operator*=(const ModInt\
    \ &p) {\n    val = (int)(1LL * val * p.val % mod);\n    return *this;\n  }\n\n\
    \  ModInt &operator/=(const ModInt &p) {\n    *this *= p.inverse();\n    return\
    \ *this;\n  }\n\n  ModInt operator-() const { return ModInt(-val); }\n\n  ModInt\
    \ operator+(const ModInt &p) const { return ModInt(*this) += p; }\n\n  ModInt\
    \ operator-(const ModInt &p) const { return ModInt(*this) -= p; }\n\n  ModInt\
    \ operator*(const ModInt &p) const { return ModInt(*this) *= p; }\n\n  ModInt\
    \ operator/(const ModInt &p) const { return ModInt(*this) /= p; }\n\n  bool operator==(const\
    \ ModInt &p) const { return val == p.val; }\n\n  bool operator!=(const ModInt\
    \ &p) const { return val != p.val; }\n\n  ModInt inverse() const {\n    int a\
    \ = val, b = mod, u = 1, v = 0, t;\n    while (b > 0) {\n      t = a / b;\n  \
    \    swap(a -= t * b, b);\n      swap(u -= t * v, v);\n    }\n    return ModInt(u);\n\
    \  }\n\n  template<typename T>\n  ModInt pow(T n) const {\n    ModInt ret(1),\
    \ mul(val);\n    while (n > 0) {\n      if (n & 1) ret *= mul;\n      mul *= mul;\n\
    \      n >>= 1;\n    }\n    return ret;\n  }\n\n  friend ostream &operator<<(ostream\
    \ &os, const ModInt &p) {\n    return os << p.val;\n  }\n\n  friend istream &operator>>(istream\
    \ &is, ModInt &a) {\n    int64_t t;\n    is >> t;\n    a = ModInt<mod>(t);\n \
    \   return (is);\n  }\n\n  static int get_mod() { return mod; }\n};\n\nusing modint998244353\
    \ = ModInt<998244353>;\nusing modint1000000007 = ModInt<1000000007>;\n"
  code: "template <int mod>\nstruct ModInt {\n  int val;\n\n  ModInt() : val(0) {}\n\
    \n  ModInt(int64_t value) : val(value >= 0 ? value % mod : (mod - (-value) % mod)\
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
    \ ModInt<998244353>;\nusing modint1000000007 = ModInt<1000000007>;"
  dependsOn: []
  isVerificationFile: false
  path: utils/modint.hpp
  requiredBy: []
  timestamp: '2023-07-16 15:53:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/AOJ-NTL_1_B.test.cpp
documentation_of: utils/modint.hpp
layout: document
redirect_from:
- /library/utils/modint.hpp
- /library/utils/modint.hpp.html
title: utils/modint.hpp
---
