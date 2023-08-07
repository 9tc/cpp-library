---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: data-structure/erasable-priority-queue.hpp
    title: data-structure/erasable-priority-queue.hpp
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
    \      return data.empty();\n    }\n};\n#line 2 \"data-structure/erasable-priority-queue-with-contains.hpp\"\
    \ntemplate<typename T, typename Comp = less<T>>\nstruct ErasablePriorityQueueWithContains{\n\
    \    ErasablePriorityQueue<T, Comp> data;\n    multiset<T> contained;\n\n    ErasablePriorityQueueWithContains(){}\n\
    \n    void push(T x){\n      contained.insert(x);\n      data.push(x);\n    }\n\
    \n    void erase(T x){\n      contained.erase(contained.find(x));\n      data.erase(x);\n\
    \    }\n\n    bool contains(T x){\n      return contained.find(x) != contained.end();\n\
    \    }\n\n    T top(){\n      return data.top();\n    }\n\n    void pop(){\n \
    \     contained.erase(contained.find(data.top()));\n      data.pop();\n    }\n\
    \n    bool empty(){\n      return data.empty();\n    }\n\n    int size(){\n  \
    \    return contained.size();\n    }\n\n    void clear(){\n      data = ErasablePriorityQueue<T,\
    \ Comp>();\n      contained.clear();\n    }\n\n    void swap(ErasablePriorityQueueWithContains<T,\
    \ Comp> &other){\n      data.swap(other.data);\n      contained.swap(other.contained);\n\
    \    }\n};\n"
  code: "#include \"erasable-priority-queue.hpp\"\ntemplate<typename T, typename Comp\
    \ = less<T>>\nstruct ErasablePriorityQueueWithContains{\n    ErasablePriorityQueue<T,\
    \ Comp> data;\n    multiset<T> contained;\n\n    ErasablePriorityQueueWithContains(){}\n\
    \n    void push(T x){\n      contained.insert(x);\n      data.push(x);\n    }\n\
    \n    void erase(T x){\n      contained.erase(contained.find(x));\n      data.erase(x);\n\
    \    }\n\n    bool contains(T x){\n      return contained.find(x) != contained.end();\n\
    \    }\n\n    T top(){\n      return data.top();\n    }\n\n    void pop(){\n \
    \     contained.erase(contained.find(data.top()));\n      data.pop();\n    }\n\
    \n    bool empty(){\n      return data.empty();\n    }\n\n    int size(){\n  \
    \    return contained.size();\n    }\n\n    void clear(){\n      data = ErasablePriorityQueue<T,\
    \ Comp>();\n      contained.clear();\n    }\n\n    void swap(ErasablePriorityQueueWithContains<T,\
    \ Comp> &other){\n      data.swap(other.data);\n      contained.swap(other.contained);\n\
    \    }\n};"
  dependsOn:
  - data-structure/erasable-priority-queue.hpp
  isVerificationFile: false
  path: data-structure/erasable-priority-queue-with-contains.hpp
  requiredBy: []
  timestamp: '2023-08-08 00:28:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data-structure/erasable-priority-queue-with-contains.hpp
layout: document
redirect_from:
- /library/data-structure/erasable-priority-queue-with-contains.hpp
- /library/data-structure/erasable-priority-queue-with-contains.hpp.html
title: data-structure/erasable-priority-queue-with-contains.hpp
---
