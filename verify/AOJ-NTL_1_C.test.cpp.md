---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/gcd.hpp
    title: math/gcd.hpp
  - icon: ':x:'
    path: math/lcm.hpp
    title: math/lcm.hpp
  - icon: ':x:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C
  bundledCode: "Traceback (most recent call last):\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/usr/local/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/lcm.hpp: line 3: #pragma once found in a non-first line\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C\"\
    \n\n#include \"../template/template.hpp\"\n#include \"../math/lcm.hpp\"\n\nint\
    \ main(){\n  int n;\n  cin >> n;\n  int a;\n  cin >> a;\n  REP(i,n-1){\n    int\
    \ b;\n    cin >> b;\n    a = LCM(a, b);\n  }\n  cout << a << endl;\n}\n"
  dependsOn:
  - template/template.hpp
  - math/lcm.hpp
  - math/gcd.hpp
  isVerificationFile: true
  path: verify/AOJ-NTL_1_C.test.cpp
  requiredBy: []
  timestamp: '2022-11-17 17:44:39+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/AOJ-NTL_1_C.test.cpp
layout: document
redirect_from:
- /verify/verify/AOJ-NTL_1_C.test.cpp
- /verify/verify/AOJ-NTL_1_C.test.cpp.html
title: verify/AOJ-NTL_1_C.test.cpp
---
