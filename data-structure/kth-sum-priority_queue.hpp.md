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
  bundledCode: "#line 1 \"data-structure/kth-sum-priority_queue.hpp\"\ntemplate<typename\
    \ T>\nstruct KthSumPriorityQueue{\n  priority_queue<T> pqr;\n  priority_queue<T,\
    \ vector<T>, greater<T>> pql;\n  T sm;\n  int k;\n\n  KthSumPriorityQueue(int\
    \ k): k(k) {\n    sm = 0;\n  }\n\n  void push(T x){\n    pql.push(x);\n    sm\
    \ += x;\n    if(pql.size() > k){\n      sm -= pql.top();\n      pqr.push(pql.top());\n\
    \      pql.pop();\n    }\n  }\n\n  void pop(){\n    // TODO\n    assert(false);\n\
    \  }\n\n  T top(){\n    return pql.top();\n  }\n\n  T sum(){\n    return sm;\n\
    \  }\n\n  int size(){\n    return pql.size() + pqr.size();\n  }\n\n  bool empty(){\n\
    \    return pql.empty();\n  }\n\n  void setk(int k){\n    this->k = k;\n    while(pql.size()\
    \ > k){\n      sm -= pql.top();\n      pqr.push(pql.top());\n      pql.pop();\n\
    \    }\n    while(pql.size() < k && !pqr.empty()){\n      sm += pqr.top();\n \
    \     pql.push(pqr.top());\n      pqr.pop();\n    }\n  }\n};\n"
  code: "template<typename T>\nstruct KthSumPriorityQueue{\n  priority_queue<T> pqr;\n\
    \  priority_queue<T, vector<T>, greater<T>> pql;\n  T sm;\n  int k;\n\n  KthSumPriorityQueue(int\
    \ k): k(k) {\n    sm = 0;\n  }\n\n  void push(T x){\n    pql.push(x);\n    sm\
    \ += x;\n    if(pql.size() > k){\n      sm -= pql.top();\n      pqr.push(pql.top());\n\
    \      pql.pop();\n    }\n  }\n\n  void pop(){\n    // TODO\n    assert(false);\n\
    \  }\n\n  T top(){\n    return pql.top();\n  }\n\n  T sum(){\n    return sm;\n\
    \  }\n\n  int size(){\n    return pql.size() + pqr.size();\n  }\n\n  bool empty(){\n\
    \    return pql.empty();\n  }\n\n  void setk(int k){\n    this->k = k;\n    while(pql.size()\
    \ > k){\n      sm -= pql.top();\n      pqr.push(pql.top());\n      pql.pop();\n\
    \    }\n    while(pql.size() < k && !pqr.empty()){\n      sm += pqr.top();\n \
    \     pql.push(pqr.top());\n      pqr.pop();\n    }\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/kth-sum-priority_queue.hpp
  requiredBy: []
  timestamp: '2023-07-30 02:41:35+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/kth-sum-priority_queue.hpp
layout: document
redirect_from:
- /library/data-structure/kth-sum-priority_queue.hpp
- /library/data-structure/kth-sum-priority_queue.hpp.html
title: data-structure/kth-sum-priority_queue.hpp
---
