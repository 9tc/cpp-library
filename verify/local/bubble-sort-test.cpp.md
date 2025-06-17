---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: sort/bubble-sort.hpp
    title: "\u30D0\u30D6\u30EB\u30BD\u30FC\u30C8"
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
    \ } std::cout << std::endl;\n}\n\nusing namespace std;\n#line 2 \"sort/bubble-sort.hpp\"\
    \n\n/**\n * @brief \u30D0\u30D6\u30EB\u30BD\u30FC\u30C8 - O(n^2)\u306E\u6BD4\u8F03\
    \u30D9\u30FC\u30B9\u30BD\u30FC\u30C8\u30A2\u30EB\u30B4\u30EA\u30BA\u30E0\n * @tparam\
    \ T \u914D\u5217\u306E\u8981\u7D20\u306E\u578B\n * @param[in,out] arr \u30BD\u30FC\
    \u30C8\u3059\u308B\u914D\u5217\n * @param[in] verbose \u8A73\u7D30\u8868\u793A\
    \u30D5\u30E9\u30B0\uFF08\u30C7\u30D5\u30A9\u30EB\u30C8\u306Ffalse\uFF09\n * @return\
    \ int \u4EA4\u63DB\u56DE\u6570\n */\ntemplate <class T>\nint bubbleSort(vector<T>&\
    \ arr, bool verbose = false) {\n  int n = arr.size();\n  int swapCount = 0;\n\n\
    \  for (int i = 0; i < n - 1; ++i) {\n    bool swapped = false;\n\n    // \u5404\
    \u30D1\u30B9\u3067\u6700\u5927\u5024\u3092\u53F3\u7AEF\u306B\u79FB\u52D5\uFF08\
    \u964D\u9806\u306B\u51E6\u7406\uFF09\n    for (int j = 0; j < n - 1 - i; ++j)\
    \ {\n      if (arr[j] > arr[j + 1]) {\n        swap(arr[j], arr[j + 1]);\n   \
    \     swapCount++;\n        swapped = true;\n      }\n    }\n\n    // \u9014\u4E2D\
    \u3067\u4EA4\u63DB\u304C\u767A\u751F\u3057\u306A\u3051\u308C\u3070\u65E2\u306B\
    \u30BD\u30FC\u30C8\u6E08\u307F\n    if (!swapped) break;\n\n    // \u8A73\u7D30\
    \u8868\u793A\u30E2\u30FC\u30C9\n    if (verbose) {\n      cout << \"Pass \" <<\
    \ (i + 1) << \": \";\n      for (int k = 0; k < n; ++k) {\n        if (k > 0)\
    \ cout << \" \";\n        cout << arr[k];\n      }\n      cout << endl;\n    }\n\
    \  }\n\n  return swapCount;\n}\n#line 3 \"verify/local/bubble-sort-test.cpp\"\n\
    \n// \u30C6\u30B9\u30C8\u7528\u95A2\u6570 - \u914D\u5217\u304C\u30BD\u30FC\u30C8\
    \u3055\u308C\u3066\u3044\u308B\u304B\u30C1\u30A7\u30C3\u30AF\ntemplate <class\
    \ T>\nbool isSorted(const vector<T>& arr) {\n  for (size_t i = 1; i < arr.size();\
    \ ++i) {\n    if (arr[i-1] > arr[i]) return false;\n  }\n  return true;\n}\n\n\
    // \u30C6\u30B9\u30C8\u5B9F\u884C\u7528\u95A2\u6570\ntemplate <class T>\nbool\
    \ runSortTest(const string& testName, vector<T> arr, const vector<T>& expected)\
    \ {\n  cout << \"\u30C6\u30B9\u30C8 \" << testName << \": \";\n\n  // \u5143\u306E\
    \u914D\u5217\u3092\u8868\u793A\n  cout << \"\\n  \u5165\u529B: [\";\n  for (size_t\
    \ i = 0; i < arr.size(); ++i) {\n    if (i > 0) cout << \", \";\n    cout << arr[i];\n\
    \  }\n  cout << \"]\" << endl;\n\n  // \u30D0\u30D6\u30EB\u30BD\u30FC\u30C8\u5B9F\
    \u884C\n  int swapCount = bubbleSort(arr, true);\n\n  // \u30BD\u30FC\u30C8\u7D50\
    \u679C\u3092\u8868\u793A\n  cout << \"  \u51FA\u529B: [\";\n  for (size_t i =\
    \ 0; i < arr.size(); ++i) {\n    if (i > 0) cout << \", \";\n    cout << arr[i];\n\
    \  }\n  cout << \"]\" << endl;\n  cout << \"  \u4EA4\u63DB\u56DE\u6570: \" <<\
    \ swapCount << endl;\n\n  // \u7D50\u679C\u306E\u691C\u8A3C\n  bool correctSort\
    \ = isSorted(arr);\n  bool matchesExpected = (arr == expected);\n\n  if (correctSort\
    \ && matchesExpected) {\n    cout << \"  \u7D50\u679C: \u6210\u529F \u2713\" <<\
    \ endl;\n    return true;\n  } else {\n    cout << \"  \u7D50\u679C: \u5931\u6557\
    \ \u2717\" << endl;\n    if (!correctSort) {\n      cout << \"    \u30A8\u30E9\
    \u30FC: \u914D\u5217\u304C\u6B63\u3057\u304F\u30BD\u30FC\u30C8\u3055\u308C\u3066\
    \u3044\u307E\u305B\u3093\" << endl;\n    }\n    if (!matchesExpected) {\n    \
    \  cout << \"    \u30A8\u30E9\u30FC: \u671F\u5F85\u7D50\u679C\u3068\u4E00\u81F4\
    \u3057\u307E\u305B\u3093\" << endl;\n      cout << \"    \u671F\u5F85\u7D50\u679C\
    : [\";\n      for (size_t i = 0; i < expected.size(); ++i) {\n        if (i >\
    \ 0) cout << \", \";\n        cout << expected[i];\n      }\n      cout << \"\
    ]\" << endl;\n    }\n    return false;\n  }\n}\n\n// \u3059\u3079\u3066\u306E\u30C6\
    \u30B9\u30C8\u3092\u5B9F\u884C\nvoid runAllTests() {\n  int passedCount = 0;\n\
    \  int totalTests = 0;\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B91: \u6A19\u6E96\
    \u7684\u306A\u914D\u5217\n  {\n    vector<int> arr = {5, 3, 8, 1, 2, 7, 4, 6};\n\
    \    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};\n    if (runSortTest(\"\u30B1\
    \u30FC\u30B91 (\u6A19\u6E96\u7684\u306A\u914D\u5217)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B92: \u65E2\u306B\
    \u30BD\u30FC\u30C8\u6E08\u307F\u306E\u914D\u5217\n  {\n    vector<int> arr = {1,\
    \ 2, 3, 4, 5};\n    vector<int> expected = {1, 2, 3, 4, 5};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B92 (\u30BD\u30FC\u30C8\u6E08\u307F)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B93: \u9006\u9806\
    \u306E\u914D\u5217\n  {\n    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};\n\
    \    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B93 (\u9006\u9806)\", arr, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B94: \u91CD\u8907\u3092\u542B\u3080\
    \u914D\u5217\n  {\n    vector<int> arr = {4, 2, 4, 1, 3, 2};\n    vector<int>\
    \ expected = {1, 2, 2, 3, 4, 4};\n    if (runSortTest(\"\u30B1\u30FC\u30B94 (\u91CD\
    \u8907\u3042\u308A)\", arr, expected)) passedCount++;\n    totalTests++;\n  }\n\
    \n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B95: \u5358\u4E00\u8981\u7D20\n  {\n\
    \    vector<int> arr = {42};\n    vector<int> expected = {42};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B95 (\u5358\u4E00\u8981\u7D20)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B96: \u7A7A\u914D\
    \u5217\n  {\n    vector<int> arr = {};\n    vector<int> expected = {};\n    if\
    \ (runSortTest(\"\u30B1\u30FC\u30B96 (\u7A7A\u914D\u5217)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B97: \u6D6E\u52D5\
    \u5C0F\u6570\u70B9\u6570\n  {\n    vector<double> arr = {3.14, 1.41, 2.71, 1.73};\n\
    \    vector<double> expected = {1.41, 1.73, 2.71, 3.14};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B97 (\u6D6E\u52D5\u5C0F\u6570\u70B9\u6570)\", arr, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\
    \u30B98: \u6587\u5B57\u5217\n  {\n    vector<string> arr = {\"orange\", \"apple\"\
    , \"banana\", \"grape\"};\n    vector<string> expected = {\"apple\", \"banana\"\
    , \"grape\", \"orange\"};\n    if (runSortTest(\"\u30B1\u30FC\u30B98 (\u6587\u5B57\
    \u5217)\", arr, expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u7D50\
    \u679C\u3092\u8868\u793A\n  cout << \"\\n\u5168\" << totalTests << \"\u30C6\u30B9\
    \u30C8\u4E2D \" << passedCount << \"\u500B\u6210\u529F (\" \n       << (passedCount\
    \ * 100 / totalTests) << \"%)\" << endl;\n}\n\nint main() {\n  cout << \"=== \u30D0\
    \u30D6\u30EB\u30BD\u30FC\u30C8\u81EA\u52D5\u30C6\u30B9\u30C8 ===\" << endl;\n\
    \  runAllTests();\n  return 0;\n}\n"
  code: "#include \"../../template.hpp\"\n#include \"../../sort/bubble-sort.hpp\"\n\
    \n// \u30C6\u30B9\u30C8\u7528\u95A2\u6570 - \u914D\u5217\u304C\u30BD\u30FC\u30C8\
    \u3055\u308C\u3066\u3044\u308B\u304B\u30C1\u30A7\u30C3\u30AF\ntemplate <class\
    \ T>\nbool isSorted(const vector<T>& arr) {\n  for (size_t i = 1; i < arr.size();\
    \ ++i) {\n    if (arr[i-1] > arr[i]) return false;\n  }\n  return true;\n}\n\n\
    // \u30C6\u30B9\u30C8\u5B9F\u884C\u7528\u95A2\u6570\ntemplate <class T>\nbool\
    \ runSortTest(const string& testName, vector<T> arr, const vector<T>& expected)\
    \ {\n  cout << \"\u30C6\u30B9\u30C8 \" << testName << \": \";\n\n  // \u5143\u306E\
    \u914D\u5217\u3092\u8868\u793A\n  cout << \"\\n  \u5165\u529B: [\";\n  for (size_t\
    \ i = 0; i < arr.size(); ++i) {\n    if (i > 0) cout << \", \";\n    cout << arr[i];\n\
    \  }\n  cout << \"]\" << endl;\n\n  // \u30D0\u30D6\u30EB\u30BD\u30FC\u30C8\u5B9F\
    \u884C\n  int swapCount = bubbleSort(arr, true);\n\n  // \u30BD\u30FC\u30C8\u7D50\
    \u679C\u3092\u8868\u793A\n  cout << \"  \u51FA\u529B: [\";\n  for (size_t i =\
    \ 0; i < arr.size(); ++i) {\n    if (i > 0) cout << \", \";\n    cout << arr[i];\n\
    \  }\n  cout << \"]\" << endl;\n  cout << \"  \u4EA4\u63DB\u56DE\u6570: \" <<\
    \ swapCount << endl;\n\n  // \u7D50\u679C\u306E\u691C\u8A3C\n  bool correctSort\
    \ = isSorted(arr);\n  bool matchesExpected = (arr == expected);\n\n  if (correctSort\
    \ && matchesExpected) {\n    cout << \"  \u7D50\u679C: \u6210\u529F \u2713\" <<\
    \ endl;\n    return true;\n  } else {\n    cout << \"  \u7D50\u679C: \u5931\u6557\
    \ \u2717\" << endl;\n    if (!correctSort) {\n      cout << \"    \u30A8\u30E9\
    \u30FC: \u914D\u5217\u304C\u6B63\u3057\u304F\u30BD\u30FC\u30C8\u3055\u308C\u3066\
    \u3044\u307E\u305B\u3093\" << endl;\n    }\n    if (!matchesExpected) {\n    \
    \  cout << \"    \u30A8\u30E9\u30FC: \u671F\u5F85\u7D50\u679C\u3068\u4E00\u81F4\
    \u3057\u307E\u305B\u3093\" << endl;\n      cout << \"    \u671F\u5F85\u7D50\u679C\
    : [\";\n      for (size_t i = 0; i < expected.size(); ++i) {\n        if (i >\
    \ 0) cout << \", \";\n        cout << expected[i];\n      }\n      cout << \"\
    ]\" << endl;\n    }\n    return false;\n  }\n}\n\n// \u3059\u3079\u3066\u306E\u30C6\
    \u30B9\u30C8\u3092\u5B9F\u884C\nvoid runAllTests() {\n  int passedCount = 0;\n\
    \  int totalTests = 0;\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B91: \u6A19\u6E96\
    \u7684\u306A\u914D\u5217\n  {\n    vector<int> arr = {5, 3, 8, 1, 2, 7, 4, 6};\n\
    \    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};\n    if (runSortTest(\"\u30B1\
    \u30FC\u30B91 (\u6A19\u6E96\u7684\u306A\u914D\u5217)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B92: \u65E2\u306B\
    \u30BD\u30FC\u30C8\u6E08\u307F\u306E\u914D\u5217\n  {\n    vector<int> arr = {1,\
    \ 2, 3, 4, 5};\n    vector<int> expected = {1, 2, 3, 4, 5};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B92 (\u30BD\u30FC\u30C8\u6E08\u307F)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B93: \u9006\u9806\
    \u306E\u914D\u5217\n  {\n    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};\n\
    \    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B93 (\u9006\u9806)\", arr, expected)) passedCount++;\n    totalTests++;\n\
    \  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B94: \u91CD\u8907\u3092\u542B\u3080\
    \u914D\u5217\n  {\n    vector<int> arr = {4, 2, 4, 1, 3, 2};\n    vector<int>\
    \ expected = {1, 2, 2, 3, 4, 4};\n    if (runSortTest(\"\u30B1\u30FC\u30B94 (\u91CD\
    \u8907\u3042\u308A)\", arr, expected)) passedCount++;\n    totalTests++;\n  }\n\
    \n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B95: \u5358\u4E00\u8981\u7D20\n  {\n\
    \    vector<int> arr = {42};\n    vector<int> expected = {42};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B95 (\u5358\u4E00\u8981\u7D20)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B96: \u7A7A\u914D\
    \u5217\n  {\n    vector<int> arr = {};\n    vector<int> expected = {};\n    if\
    \ (runSortTest(\"\u30B1\u30FC\u30B96 (\u7A7A\u914D\u5217)\", arr, expected)) passedCount++;\n\
    \    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\u30B97: \u6D6E\u52D5\
    \u5C0F\u6570\u70B9\u6570\n  {\n    vector<double> arr = {3.14, 1.41, 2.71, 1.73};\n\
    \    vector<double> expected = {1.41, 1.73, 2.71, 3.14};\n    if (runSortTest(\"\
    \u30B1\u30FC\u30B97 (\u6D6E\u52D5\u5C0F\u6570\u70B9\u6570)\", arr, expected))\
    \ passedCount++;\n    totalTests++;\n  }\n\n  // \u30C6\u30B9\u30C8\u30B1\u30FC\
    \u30B98: \u6587\u5B57\u5217\n  {\n    vector<string> arr = {\"orange\", \"apple\"\
    , \"banana\", \"grape\"};\n    vector<string> expected = {\"apple\", \"banana\"\
    , \"grape\", \"orange\"};\n    if (runSortTest(\"\u30B1\u30FC\u30B98 (\u6587\u5B57\
    \u5217)\", arr, expected)) passedCount++;\n    totalTests++;\n  }\n\n  // \u7D50\
    \u679C\u3092\u8868\u793A\n  cout << \"\\n\u5168\" << totalTests << \"\u30C6\u30B9\
    \u30C8\u4E2D \" << passedCount << \"\u500B\u6210\u529F (\" \n       << (passedCount\
    \ * 100 / totalTests) << \"%)\" << endl;\n}\n\nint main() {\n  cout << \"=== \u30D0\
    \u30D6\u30EB\u30BD\u30FC\u30C8\u81EA\u52D5\u30C6\u30B9\u30C8 ===\" << endl;\n\
    \  runAllTests();\n  return 0;\n}\n"
  dependsOn:
  - template.hpp
  - sort/bubble-sort.hpp
  isVerificationFile: false
  path: verify/local/bubble-sort-test.cpp
  requiredBy: []
  timestamp: '2025-06-18 01:09:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: verify/local/bubble-sort-test.cpp
layout: document
redirect_from:
- /library/verify/local/bubble-sort-test.cpp
- /library/verify/local/bubble-sort-test.cpp.html
title: verify/local/bubble-sort-test.cpp
---
