---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"other/fastio.hpp\"\nclass FastIO {\n  static const int rdata_sz\
    \ = (1 << 25), wdata_sz = (1 << 25);\n  char rdata[rdata_sz], wdata[wdata_sz],\
    \ *rb, *wb;\n  char tmp_s[20];\n\npublic:\n  FastIO() {\n    fread(rdata, 1, rdata_sz,\
    \ stdin);\n    rb = rdata; wb = wdata;\n  }\n  ~FastIO() {\n    fwrite(wdata,\
    \ 1, wb - wdata, stdout);\n  }\n\n  template<typename T>\n  inline void read_i(T\
    \ &x) {\n    bool neg = false;\n    x = 0;\n    while((*rb < '0' || *rb > '9')\
    \ && *rb != '-') ++rb;\n    if(*rb == '-') {\n      neg = true;\n      ++rb;\n\
    \    }\n    while('0' <= *rb && *rb <= '9') {\n      x = 10 * x + (*rb - '0');\n\
    \      ++rb;\n    }\n    if(neg) x = -x;\n  }\n\n#define pc(x) *(wb++) = x\n \
    \ template<typename T>\n  inline void writeln_i(T x) {\n    if (x == 0) { pc('0');\
    \ pc('\\n'); return; }\n    if(x < 0) { pc('-'); x = -x; }\n    char *t = tmp_s;\n\
    \    while(x) {\n      T y = x / 10;\n      *(t++) = (x - y*10) + '0';\n     \
    \ x = y;\n    }\n    while(t != tmp_s) pc(*(--t));\n    pc('\\n');\n  }\n\n  inline\
    \ void writeln(string s){\n    for(char c: s) pc(c);\n    pc('\\n');\n  }\n#undef\
    \ pc\n};\nFastIO io;\n"
  code: "class FastIO {\n  static const int rdata_sz = (1 << 25), wdata_sz = (1 <<\
    \ 25);\n  char rdata[rdata_sz], wdata[wdata_sz], *rb, *wb;\n  char tmp_s[20];\n\
    \npublic:\n  FastIO() {\n    fread(rdata, 1, rdata_sz, stdin);\n    rb = rdata;\
    \ wb = wdata;\n  }\n  ~FastIO() {\n    fwrite(wdata, 1, wb - wdata, stdout);\n\
    \  }\n\n  template<typename T>\n  inline void read_i(T &x) {\n    bool neg = false;\n\
    \    x = 0;\n    while((*rb < '0' || *rb > '9') && *rb != '-') ++rb;\n    if(*rb\
    \ == '-') {\n      neg = true;\n      ++rb;\n    }\n    while('0' <= *rb && *rb\
    \ <= '9') {\n      x = 10 * x + (*rb - '0');\n      ++rb;\n    }\n    if(neg)\
    \ x = -x;\n  }\n\n#define pc(x) *(wb++) = x\n  template<typename T>\n  inline\
    \ void writeln_i(T x) {\n    if (x == 0) { pc('0'); pc('\\n'); return; }\n   \
    \ if(x < 0) { pc('-'); x = -x; }\n    char *t = tmp_s;\n    while(x) {\n     \
    \ T y = x / 10;\n      *(t++) = (x - y*10) + '0';\n      x = y;\n    }\n    while(t\
    \ != tmp_s) pc(*(--t));\n    pc('\\n');\n  }\n\n  inline void writeln(string s){\n\
    \    for(char c: s) pc(c);\n    pc('\\n');\n  }\n#undef pc\n};\nFastIO io;\n"
  dependsOn: []
  isVerificationFile: false
  path: other/fastio.hpp
  requiredBy: []
  timestamp: '2023-04-09 06:25:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: other/fastio.hpp
layout: document
redirect_from:
- /library/other/fastio.hpp
- /library/other/fastio.hpp.html
title: other/fastio.hpp
---
