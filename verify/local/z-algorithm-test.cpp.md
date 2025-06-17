---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/z-algorithm.hpp
    title: Z Algorithm
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n#include<bits/stdc++.h>\nusing ll = long\
    \ long;\n#define REP(i, n) for(ll i = 0; (i) < ll(n); ++ (i))\n#define FOR(i,\
    \ m, n) for(ll i = (m); (i) <= ll(n); ++ (i))\n#define REPR(i, n) for(ll i = ll(n)\
    \ - 1; (i) >= 0; -- (i))\n#define FORR(i, m, n) for(ll i = ll(n); (i) >= ll(m);\
    \ -- (i))\n#define ALL(x) x.begin(),x.end()\n\n#define INF (int)1e9\n#define LLINF\
    \ (long long)1e18\n#define MOD (int)(1e9+7)\n#define MOD9 (int)998244353\n#define\
    \ PI 3.141592653589\n#define PB push_back\n#define F first\n#define S second\n\
    \n#define YESNO(T) if(T){cout<<\"YES\"<<endl;}else{cout<<\"NO\"<<endl;}\n#define\
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 1 \"string/z-algorithm.hpp\"\
    \nvector<int> ZAlgorithm(string &s){\n  int n = s.length();\n  // \u7A7A\u6587\
    \u5B57\u5217\u306E\u5834\u5408\u306F\u7A7A\u306E\u30D9\u30AF\u30C8\u30EB\u3092\
    \u8FD4\u3059\n  if (n == 0) return vector<int>();\n\n  vector<int> res(n);\n \
    \ res[0] = n;\n  int i = 1, j = 0;\n  while(i < n){\n    while(i + j < n && s[j]\
    \ == s[i + j]) ++j;\n    res[i] = j;\n\n    if(j == 0){\n      ++i;\n      continue;\n\
    \    }\n    int k = 1;\n    while(k < j && k + res[k] < j){\n      res[i + k]\
    \ = res[k], ++k;\n    }\n    i += k, j -= k;\n  }\n  return res;\n}\n#line 3 \"\
    verify/local/z-algorithm-test.cpp\"\n\n// \u5B9F\u969B\u306BZ\u5024\u3092\u624B\
    \u52D5\u691C\u8A3C\u3059\u308B\u95A2\u6570\nvoid verifyZValues(const string& s,\
    \ const vector<int>& z) {\n  for (size_t i = 0; i < s.length(); ++i) {\n    int\
    \ expected_z = 0;\n    // \u5B9F\u969B\u306B\u6587\u5B57\u5217\u3092\u6BD4\u8F03\
    \u3057\u3066\u691C\u8A3C\n    while (i + expected_z < s.length() && s[expected_z]\
    \ == s[i + expected_z]) {\n      expected_z++;\n    }\n    if (z[i] != expected_z)\
    \ {\n      cout << \"\u691C\u8A3C\u30A8\u30E9\u30FC: \u30A4\u30F3\u30C7\u30C3\u30AF\
    \u30B9 \" << i << \" \u306E Z\u5024\u304C\u9593\u9055\u3063\u3066\u3044\u307E\u3059\
    \u3002\" \n           << \"\u8A08\u7B97\u5024: \" << expected_z << \"\u3001\u30A2\
    \u30EB\u30B4\u30EA\u30BA\u30E0\u7D50\u679C: \" << z[i] << endl;\n      // \u8A73\
    \u7D30\u306A\u30B3\u30F3\u30C6\u30AD\u30B9\u30C8\u8868\u793A\n      cout << \"\
    \  \u4F4D\u7F6E \" << i << \" (\" << s.substr(i, min(10, (int)s.length() - (int)i))\
    \ << \"...)\" << endl;\n      cout << \"  \u63A5\u982D\u8F9E (\" << s.substr(0,\
    \ min(10, (int)s.length())) << \"...)\" << endl;\n    }\n  }\n}\n\nbool runTest(const\
    \ string& testName, const string& s, const vector<int>& expected) {\n  try {\n\
    \    // \u5165\u529B\u306E\u691C\u8A3C\n    cout << \"\u30C6\u30B9\u30C8 \" <<\
    \ testName << \": \";\n\n    vector<int> result = ZAlgorithm(const_cast<string&>(s));\n\
    \n    // \u5B9F\u88C5\u306E\u6574\u5408\u6027\u3092\u691C\u8A3C\uFF08\u30AA\u30D7\
    \u30B7\u30E7\u30F3\uFF09\n    // verifyZValues(s, result);\n\n    bool passed\
    \ = (result.size() == expected.size());\n    for (size_t i = 0; passed && i <\
    \ result.size(); ++i) {\n      if (result[i] != expected[i]) {\n        passed\
    \ = false;\n      }\n    }\n\n    if (passed) {\n      cout << \"\u6210\u529F\"\
    \ << endl;\n    } else {\n      cout << \"\u5931\u6557\" << endl;\n      cout\
    \ << \"  \u5165\u529B\u6587\u5B57\u5217: \" << (s.empty() ? \"<\u7A7A\u6587\u5B57\
    \u5217>\" : s) << endl;\n\n      // \u5931\u6557\u3057\u305F\u30A4\u30F3\u30C7\
    \u30C3\u30AF\u30B9\u3092\u7279\u5B9A\n      if (result.size() != expected.size())\
    \ {\n        cout << \"  \u30B5\u30A4\u30BA\u304C\u4E00\u81F4\u3057\u307E\u305B\
    \u3093: \u671F\u5F85=\"  << expected.size() \n             << \", \u5B9F\u969B\
    =\" << result.size() << endl;\n      } else {\n        for (size_t i = 0; i <\
    \ result.size(); ++i) {\n          if (result[i] != expected[i]) {\n         \
    \   cout << \"  \u4E0D\u4E00\u81F4\u7B87\u6240: \u30A4\u30F3\u30C7\u30C3\u30AF\
    \u30B9 \" << i << \", \u671F\u5F85=\" \n                 << expected[i] << \"\
    , \u5B9F\u969B=\" << result[i] << endl;\n          }\n        }\n      }\n\n \
    \     cout << \"  \u671F\u5F85\u7D50\u679C: \";\n      if (expected.empty()) {\n\
    \        cout << \"<\u7A7A\u914D\u5217>\";\n      } else {\n        for (int val\
    \ : expected) cout << val << \" \";\n      }\n      cout << endl;\n      cout\
    \ << \"  \u5B9F\u969B\u7D50\u679C: \";\n      if (result.empty()) {\n        cout\
    \ << \"<\u7A7A\u914D\u5217>\";\n      } else {\n        for (int val : result)\
    \ cout << val << \" \";\n      }\n      cout << endl;\n    }\n\n    return passed;\n\
    \  } catch (const std::exception& e) {\n    cout << \"\u5931\u6557 (\u4F8B\u5916\
    \u767A\u751F: \" << e.what() << \")\" << endl;\n    return false;\n  } catch (...)\
    \ {\n    cout << \"\u5931\u6557 (\u4E0D\u660E\u306A\u4F8B\u5916\u304C\u767A\u751F\
    )\" << endl;\n    return false;\n  }\n}\n\nvoid runAllTests() {\n  int passedCount\
    \ = 0;\n  int totalTests = 0;\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B91: \u57FA\
    \u672C\u7684\u306A\u4F8B\n  {\n    string s = \"aaaaa\";\n    vector<int> expected\
    \ = {5, 4, 3, 2, 1};\n    if (runTest(\"\u30B1\u30FC\u30B91 (\u540C\u4E00\u6587\
    \u5B57\u306E\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B92: \u7E70\u308A\u8FD4\u3057\u30D1\
    \u30BF\u30FC\u30F3\n  {\n    string s = \"ababab\";\n    vector<int> expected\
    \ = {6, 0, 4, 0, 2, 0};\n    if (runTest(\"\u30B1\u30FC\u30B92 (\u7E70\u308A\u8FD4\
    \u3057\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B93: \u3088\u308A\u8907\u96D1\u306A\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"abacaba\";\n    vector<int> expected\
    \ = {7, 0, 1, 0, 3, 0, 1};\n    if (runTest(\"\u30B1\u30FC\u30B93 (\u8907\u96D1\
    \u306A\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B94: \u4E00\u81F4\u3057\u306A\u3044\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"abcdef\";\n    vector<int> expected\
    \ = {6, 0, 0, 0, 0, 0};\n    if (runTest(\"\u30B1\u30FC\u30B94 (\u4E00\u81F4\u3057\
    \u306A\u3044\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B95: \u7A7A\u6587\u5B57\u5217\n\
    \  {\n    string s = \"\";\n    vector<int> expected = {};\n    if (runTest(\"\
    \u30B1\u30FC\u30B95 (\u7A7A\u6587\u5B57\u5217)\", s, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B96: \u5358\u4E00\
    \u6587\u5B57\n  {\n    string s = \"a\";\n    vector<int> expected = {1};\n  \
    \  if (runTest(\"\u30B1\u30FC\u30B96 (\u5358\u4E00\u6587\u5B57)\", s, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\
    \u30B97: \u524D\u5F8C\u5BFE\u79F0\u30D1\u30BF\u30FC\u30F3\n  {\n    string s =\
    \ \"level\";\n    vector<int> expected = {5, 0, 0, 0, 1};\n    if (runTest(\"\u30B1\
    \u30FC\u30B97 (\u524D\u5F8C\u5BFE\u79F0)\", s, expected)) passedCount++;\n   \
    \ totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B98: \u9577\u3044\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"aabaabaab\";\n    vector<int>\
    \ expected = {9, 1, 0, 6, 1, 0, 3, 1, 0};\n    if (runTest(\"\u30B1\u30FC\u30B9\
    8 (\u9577\u3044\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n   \
    \ totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B99: \u5883\u754C\
    \u30B1\u30FC\u30B9\n  {\n    string s = \"aaa\";\n    vector<int> expected = {3,\
    \ 2, 1};\n    if (runTest(\"\u30B1\u30FC\u30B99 (\u77ED\u3044\u540C\u4E00\u6587\
    \u5B57)\", s, expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\
    \u30B9\u30C8\u30B1\u30FC\u30B910: \u8907\u96D1\u306A\u7E70\u308A\u8FD4\u3057\n\
    \  {\n    string s = \"aabaabaaabaabaaab\";\n    vector<int> expected = {17, 1,\
    \ 0, 5, 1, 0, 2, 10, 1, 0, 5, 1, 0, 2, 3, 1, 0};\n    if (runTest(\"\u30B1\u30FC\
    \u30B910 (\u8907\u96D1\u306A\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B911: \u7570\
    \u306A\u308B\u7A2E\u985E\u306E\u6587\u5B57\n  {\n    string s = \"abc123xyz\"\
    ;\n    vector<int> expected = {9, 0, 0, 0, 0, 0, 0, 0, 0};\n    if (runTest(\"\
    \u30B1\u30FC\u30B911 (\u7570\u306A\u308B\u7A2E\u985E\u306E\u6587\u5B57)\", s,\
    \ expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\
    \u30B1\u30FC\u30B912: \u975EASCII\u6587\u5B57\n  {\n    string s = \"\u3053\u3093\
    \u306B\u3061\u306F\u4E16\u754C\";\n    // \u5B9F\u969B\u306EZ\u5024\u3092\u6B63\
    \u78BA\u306B\u671F\u5F85\u5024\u3068\u3057\u3066\u8A2D\u5B9A\n    vector<int>\
    \ expected = {21, 0, 0, 1, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0};\n\
    \    if (runTest(\"\u30B1\u30FC\u30B912 (\u975EASCII\u6587\u5B57)\", s, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  cout << \"\\n\u5168\" << totalTests\
    \ << \"\u30C6\u30B9\u30C8\u4E2D \" << passedCount << \"\u500B\u6210\u529F (\"\
    \ \n       << (passedCount * 100 / totalTests) << \"%)\" << endl;\n}\n\nint main(int\
    \ argc, char* argv[]) {\n  cout << \"=== Z-Algorithm\u81EA\u52D5\u30C6\u30B9\u30C8\
    \ ===\" << endl;\n\n  // \u30C7\u30D0\u30C3\u30B0\u30E2\u30FC\u30C9\u306E\u691C\
    \u51FA\n  bool debug = false;\n  if (argc > 1 && string(argv[1]) == \"--debug\"\
    ) {\n    debug = true;\n    cout << \"[\u30C7\u30D0\u30C3\u30B0\u30E2\u30FC\u30C9\
    \u6709\u52B9]\" << endl;\n  }\n\n  if (debug) {\n    // \u7279\u5B9A\u306E\u30C6\
    \u30B9\u30C8\u30B1\u30FC\u30B9\u3092\u624B\u52D5\u691C\u8A3C\n    cout << \"\\\
    n=== \u624B\u52D5\u691C\u8A3C\u30E2\u30FC\u30C9 ===\" << endl;\n    vector<string>\
    \ testStrings = {\n      \"aabaabaaabaabaaab\",\n      \"\u3053\u3093\u306B\u3061\
    \u306F\u4E16\u754C\"\n    };\n\n    for (const auto& s : testStrings) {\n    \
    \  cout << \"\u6587\u5B57\u5217: \" << s << endl;\n      vector<int> result =\
    \ ZAlgorithm(const_cast<string&>(s));\n\n      cout << \"Z\u5024: \";\n      for\
    \ (int val : result) cout << val << \" \";\n      cout << endl;\n\n      // \u624B\
    \u52D5\u3067\u306E\u691C\u8A3C\n      cout << \"\u691C\u8A3C\u4E2D...\" << endl;\n\
    \      verifyZValues(s, result);\n      cout << \"\u691C\u8A3C\u5B8C\u4E86\" <<\
    \ endl << endl;\n    }\n  } else {\n    // \u901A\u5E38\u306E\u30C6\u30B9\u30C8\
    \u5B9F\u884C\n    runAllTests();\n  }\n\n  return 0;\n}\n"
  code: "#include \"../../template.hpp\"\n#include \"../../string/z-algorithm.hpp\"\
    \n\n// \u5B9F\u969B\u306BZ\u5024\u3092\u624B\u52D5\u691C\u8A3C\u3059\u308B\u95A2\
    \u6570\nvoid verifyZValues(const string& s, const vector<int>& z) {\n  for (size_t\
    \ i = 0; i < s.length(); ++i) {\n    int expected_z = 0;\n    // \u5B9F\u969B\u306B\
    \u6587\u5B57\u5217\u3092\u6BD4\u8F03\u3057\u3066\u691C\u8A3C\n    while (i + expected_z\
    \ < s.length() && s[expected_z] == s[i + expected_z]) {\n      expected_z++;\n\
    \    }\n    if (z[i] != expected_z) {\n      cout << \"\u691C\u8A3C\u30A8\u30E9\
    \u30FC: \u30A4\u30F3\u30C7\u30C3\u30AF\u30B9 \" << i << \" \u306E Z\u5024\u304C\
    \u9593\u9055\u3063\u3066\u3044\u307E\u3059\u3002\" \n           << \"\u8A08\u7B97\
    \u5024: \" << expected_z << \"\u3001\u30A2\u30EB\u30B4\u30EA\u30BA\u30E0\u7D50\
    \u679C: \" << z[i] << endl;\n      // \u8A73\u7D30\u306A\u30B3\u30F3\u30C6\u30AD\
    \u30B9\u30C8\u8868\u793A\n      cout << \"  \u4F4D\u7F6E \" << i << \" (\" <<\
    \ s.substr(i, min(10, (int)s.length() - (int)i)) << \"...)\" << endl;\n      cout\
    \ << \"  \u63A5\u982D\u8F9E (\" << s.substr(0, min(10, (int)s.length())) << \"\
    ...)\" << endl;\n    }\n  }\n}\n\nbool runTest(const string& testName, const string&\
    \ s, const vector<int>& expected) {\n  try {\n    // \u5165\u529B\u306E\u691C\u8A3C\
    \n    cout << \"\u30C6\u30B9\u30C8 \" << testName << \": \";\n\n    vector<int>\
    \ result = ZAlgorithm(const_cast<string&>(s));\n\n    // \u5B9F\u88C5\u306E\u6574\
    \u5408\u6027\u3092\u691C\u8A3C\uFF08\u30AA\u30D7\u30B7\u30E7\u30F3\uFF09\n   \
    \ // verifyZValues(s, result);\n\n    bool passed = (result.size() == expected.size());\n\
    \    for (size_t i = 0; passed && i < result.size(); ++i) {\n      if (result[i]\
    \ != expected[i]) {\n        passed = false;\n      }\n    }\n\n    if (passed)\
    \ {\n      cout << \"\u6210\u529F\" << endl;\n    } else {\n      cout << \"\u5931\
    \u6557\" << endl;\n      cout << \"  \u5165\u529B\u6587\u5B57\u5217: \" << (s.empty()\
    \ ? \"<\u7A7A\u6587\u5B57\u5217>\" : s) << endl;\n\n      // \u5931\u6557\u3057\
    \u305F\u30A4\u30F3\u30C7\u30C3\u30AF\u30B9\u3092\u7279\u5B9A\n      if (result.size()\
    \ != expected.size()) {\n        cout << \"  \u30B5\u30A4\u30BA\u304C\u4E00\u81F4\
    \u3057\u307E\u305B\u3093: \u671F\u5F85=\"  << expected.size() \n             <<\
    \ \", \u5B9F\u969B=\" << result.size() << endl;\n      } else {\n        for (size_t\
    \ i = 0; i < result.size(); ++i) {\n          if (result[i] != expected[i]) {\n\
    \            cout << \"  \u4E0D\u4E00\u81F4\u7B87\u6240: \u30A4\u30F3\u30C7\u30C3\
    \u30AF\u30B9 \" << i << \", \u671F\u5F85=\" \n                 << expected[i]\
    \ << \", \u5B9F\u969B=\" << result[i] << endl;\n          }\n        }\n     \
    \ }\n\n      cout << \"  \u671F\u5F85\u7D50\u679C: \";\n      if (expected.empty())\
    \ {\n        cout << \"<\u7A7A\u914D\u5217>\";\n      } else {\n        for (int\
    \ val : expected) cout << val << \" \";\n      }\n      cout << endl;\n      cout\
    \ << \"  \u5B9F\u969B\u7D50\u679C: \";\n      if (result.empty()) {\n        cout\
    \ << \"<\u7A7A\u914D\u5217>\";\n      } else {\n        for (int val : result)\
    \ cout << val << \" \";\n      }\n      cout << endl;\n    }\n\n    return passed;\n\
    \  } catch (const std::exception& e) {\n    cout << \"\u5931\u6557 (\u4F8B\u5916\
    \u767A\u751F: \" << e.what() << \")\" << endl;\n    return false;\n  } catch (...)\
    \ {\n    cout << \"\u5931\u6557 (\u4E0D\u660E\u306A\u4F8B\u5916\u304C\u767A\u751F\
    )\" << endl;\n    return false;\n  }\n}\n\nvoid runAllTests() {\n  int passedCount\
    \ = 0;\n  int totalTests = 0;\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B91: \u57FA\
    \u672C\u7684\u306A\u4F8B\n  {\n    string s = \"aaaaa\";\n    vector<int> expected\
    \ = {5, 4, 3, 2, 1};\n    if (runTest(\"\u30B1\u30FC\u30B91 (\u540C\u4E00\u6587\
    \u5B57\u306E\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B92: \u7E70\u308A\u8FD4\u3057\u30D1\
    \u30BF\u30FC\u30F3\n  {\n    string s = \"ababab\";\n    vector<int> expected\
    \ = {6, 0, 4, 0, 2, 0};\n    if (runTest(\"\u30B1\u30FC\u30B92 (\u7E70\u308A\u8FD4\
    \u3057\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B93: \u3088\u308A\u8907\u96D1\u306A\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"abacaba\";\n    vector<int> expected\
    \ = {7, 0, 1, 0, 3, 0, 1};\n    if (runTest(\"\u30B1\u30FC\u30B93 (\u8907\u96D1\
    \u306A\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B94: \u4E00\u81F4\u3057\u306A\u3044\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"abcdef\";\n    vector<int> expected\
    \ = {6, 0, 0, 0, 0, 0};\n    if (runTest(\"\u30B1\u30FC\u30B94 (\u4E00\u81F4\u3057\
    \u306A\u3044\u30D1\u30BF\u30FC\u30F3)\", s, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B95: \u7A7A\u6587\u5B57\u5217\n\
    \  {\n    string s = \"\";\n    vector<int> expected = {};\n    if (runTest(\"\
    \u30B1\u30FC\u30B95 (\u7A7A\u6587\u5B57\u5217)\", s, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B96: \u5358\u4E00\
    \u6587\u5B57\n  {\n    string s = \"a\";\n    vector<int> expected = {1};\n  \
    \  if (runTest(\"\u30B1\u30FC\u30B96 (\u5358\u4E00\u6587\u5B57)\", s, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\
    \u30B97: \u524D\u5F8C\u5BFE\u79F0\u30D1\u30BF\u30FC\u30F3\n  {\n    string s =\
    \ \"level\";\n    vector<int> expected = {5, 0, 0, 0, 1};\n    if (runTest(\"\u30B1\
    \u30FC\u30B97 (\u524D\u5F8C\u5BFE\u79F0)\", s, expected)) passedCount++;\n   \
    \ totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B98: \u9577\u3044\
    \u30D1\u30BF\u30FC\u30F3\n  {\n    string s = \"aabaabaab\";\n    vector<int>\
    \ expected = {9, 1, 0, 6, 1, 0, 3, 1, 0};\n    if (runTest(\"\u30B1\u30FC\u30B9\
    8 (\u9577\u3044\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n   \
    \ totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B99: \u5883\u754C\
    \u30B1\u30FC\u30B9\n  {\n    string s = \"aaa\";\n    vector<int> expected = {3,\
    \ 2, 1};\n    if (runTest(\"\u30B1\u30FC\u30B99 (\u77ED\u3044\u540C\u4E00\u6587\
    \u5B57)\", s, expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\
    \u30B9\u30C8\u30B1\u30FC\u30B910: \u8907\u96D1\u306A\u7E70\u308A\u8FD4\u3057\n\
    \  {\n    string s = \"aabaabaaabaabaaab\";\n    vector<int> expected = {17, 1,\
    \ 0, 5, 1, 0, 2, 10, 1, 0, 5, 1, 0, 2, 3, 1, 0};\n    if (runTest(\"\u30B1\u30FC\
    \u30B910 (\u8907\u96D1\u306A\u7E70\u308A\u8FD4\u3057)\", s, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B911: \u7570\
    \u306A\u308B\u7A2E\u985E\u306E\u6587\u5B57\n  {\n    string s = \"abc123xyz\"\
    ;\n    vector<int> expected = {9, 0, 0, 0, 0, 0, 0, 0, 0};\n    if (runTest(\"\
    \u30B1\u30FC\u30B911 (\u7570\u306A\u308B\u7A2E\u985E\u306E\u6587\u5B57)\", s,\
    \ expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\
    \u30B1\u30FC\u30B912: \u975EASCII\u6587\u5B57\n  {\n    string s = \"\u3053\u3093\
    \u306B\u3061\u306F\u4E16\u754C\";\n    // \u5B9F\u969B\u306EZ\u5024\u3092\u6B63\
    \u78BA\u306B\u671F\u5F85\u5024\u3068\u3057\u3066\u8A2D\u5B9A\n    vector<int>\
    \ expected = {21, 0, 0, 1, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0};\n\
    \    if (runTest(\"\u30B1\u30FC\u30B912 (\u975EASCII\u6587\u5B57)\", s, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  cout << \"\\n\u5168\" << totalTests\
    \ << \"\u30C6\u30B9\u30C8\u4E2D \" << passedCount << \"\u500B\u6210\u529F (\"\
    \ \n       << (passedCount * 100 / totalTests) << \"%)\" << endl;\n}\n\nint main(int\
    \ argc, char* argv[]) {\n  cout << \"=== Z-Algorithm\u81EA\u52D5\u30C6\u30B9\u30C8\
    \ ===\" << endl;\n\n  // \u30C7\u30D0\u30C3\u30B0\u30E2\u30FC\u30C9\u306E\u691C\
    \u51FA\n  bool debug = false;\n  if (argc > 1 && string(argv[1]) == \"--debug\"\
    ) {\n    debug = true;\n    cout << \"[\u30C7\u30D0\u30C3\u30B0\u30E2\u30FC\u30C9\
    \u6709\u52B9]\" << endl;\n  }\n\n  if (debug) {\n    // \u7279\u5B9A\u306E\u30C6\
    \u30B9\u30C8\u30B1\u30FC\u30B9\u3092\u624B\u52D5\u691C\u8A3C\n    cout << \"\\\
    n=== \u624B\u52D5\u691C\u8A3C\u30E2\u30FC\u30C9 ===\" << endl;\n    vector<string>\
    \ testStrings = {\n      \"aabaabaaabaabaaab\",\n      \"\u3053\u3093\u306B\u3061\
    \u306F\u4E16\u754C\"\n    };\n\n    for (const auto& s : testStrings) {\n    \
    \  cout << \"\u6587\u5B57\u5217: \" << s << endl;\n      vector<int> result =\
    \ ZAlgorithm(const_cast<string&>(s));\n\n      cout << \"Z\u5024: \";\n      for\
    \ (int val : result) cout << val << \" \";\n      cout << endl;\n\n      // \u624B\
    \u52D5\u3067\u306E\u691C\u8A3C\n      cout << \"\u691C\u8A3C\u4E2D...\" << endl;\n\
    \      verifyZValues(s, result);\n      cout << \"\u691C\u8A3C\u5B8C\u4E86\" <<\
    \ endl << endl;\n    }\n  } else {\n    // \u901A\u5E38\u306E\u30C6\u30B9\u30C8\
    \u5B9F\u884C\n    runAllTests();\n  }\n\n  return 0;\n}\n"
  dependsOn:
  - template.hpp
  - string/z-algorithm.hpp
  isVerificationFile: false
  path: verify/local/z-algorithm-test.cpp
  requiredBy: []
  timestamp: '2025-06-18 01:09:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: verify/local/z-algorithm-test.cpp
layout: document
redirect_from:
- /library/verify/local/z-algorithm-test.cpp
- /library/verify/local/z-algorithm-test.cpp.html
title: verify/local/z-algorithm-test.cpp
---
