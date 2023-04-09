---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-NTL_1_D.test.cpp
    title: verify/AOJ-NTL_1_D.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/eulers-phi-function.hpp\"\ntemplate <typename T>\n\
    T eulersPhiFunction(T n){\n    T res = n;\n    for(T i = 2; i * i <= n; ++i){\n\
    \        if(n % i == 0){\n            res -= res / i;\n            while(n % i\
    \ == 0) n /= i;\n        }\n    }\n\n    if(n > 1) res -= res / n;\n    return\
    \ res;\n}\n"
  code: "template <typename T>\nT eulersPhiFunction(T n){\n    T res = n;\n    for(T\
    \ i = 2; i * i <= n; ++i){\n        if(n % i == 0){\n            res -= res /\
    \ i;\n            while(n % i == 0) n /= i;\n        }\n    }\n\n    if(n > 1)\
    \ res -= res / n;\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/eulers-phi-function.hpp
  requiredBy: []
  timestamp: '2023-04-10 01:04:21+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-NTL_1_D.test.cpp
documentation_of: math/eulers-phi-function.hpp
layout: document
redirect_from:
- /library/math/eulers-phi-function.hpp
- /library/math/eulers-phi-function.hpp.html
title: math/eulers-phi-function.hpp
---
