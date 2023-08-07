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
  bundledCode: "#line 1 \"data-structure/erasable-priority-queue.hpp\"\ntemplate<typename\
    \ T, typename Comp = less<T>>\nstruct ErasablePriorityQueue{\n    priority_queue<T,\
    \ vector<T>, Comp> data, erased;\n    \n    ErasablePriorityQueue(){}\n\n    void\
    \ push(T x){\n      data.push(x);\n    }\n\n    void erase(T x){\n      erased.push(x);\n\
    \    }\n\n    void modify(){\n      while(!data.empty() && !erased.empty() &&\
    \ data.top() == erased.top()){\n        data.pop();\n        erased.pop();\n \
    \     }\n      if(data.empty()){\n        erased.clear();\n      }\n    }\n\n\
    \    T top(){\n      modify();\n      return data.top();\n    }\n\n    void pop(){\n\
    \      modify();\n      data.pop();\n    }\n\n    bool empty(){\n      modify();\n\
    \      return data.empty();\n    }\n};\n"
  code: "template<typename T, typename Comp = less<T>>\nstruct ErasablePriorityQueue{\n\
    \    priority_queue<T, vector<T>, Comp> data, erased;\n    \n    ErasablePriorityQueue(){}\n\
    \n    void push(T x){\n      data.push(x);\n    }\n\n    void erase(T x){\n  \
    \    erased.push(x);\n    }\n\n    void modify(){\n      while(!data.empty() &&\
    \ !erased.empty() && data.top() == erased.top()){\n        data.pop();\n     \
    \   erased.pop();\n      }\n      if(data.empty()){\n        erased.clear();\n\
    \      }\n    }\n\n    T top(){\n      modify();\n      return data.top();\n \
    \   }\n\n    void pop(){\n      modify();\n      data.pop();\n    }\n\n    bool\
    \ empty(){\n      modify();\n      return data.empty();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/erasable-priority-queue.hpp
  requiredBy: []
  timestamp: '2023-08-08 00:16:33+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/erasable-priority-queue.hpp
layout: document
redirect_from:
- /library/data-structure/erasable-priority-queue.hpp
- /library/data-structure/erasable-priority-queue.hpp.html
title: data-structure/erasable-priority-queue.hpp
---
