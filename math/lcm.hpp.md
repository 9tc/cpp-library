---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/gcd.hpp
    title: math/gcd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/AOJ-NTL_1_C.test.cpp
    title: verify/AOJ-NTL_1_C.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/lcm.hpp: line 3: #pragma once found in a non-first line\n"
  code: "#include \"../math/gcd.hpp\"\n\n#pragma once\ntemplate <class T>\ninline\
    \ T LCM(T a, T b){\n  return a / GCD(a, b) * b;\n}\n"
  dependsOn:
  - math/gcd.hpp
  isVerificationFile: false
  path: math/lcm.hpp
  requiredBy: []
  timestamp: '2022-11-17 17:44:39+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/AOJ-NTL_1_C.test.cpp
documentation_of: math/lcm.hpp
layout: document
redirect_from:
- /library/math/lcm.hpp
- /library/math/lcm.hpp.html
title: "\u6700\u5C0F\u516C\u500D\u6570"
---
