#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"

#include "../template.hpp"
#include "../string/z-algorithm.hpp"

int main(){
  string S = input();
  
  printVec(ZAlgorithm(S));
}
