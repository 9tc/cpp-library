#define PROBLEM "https://judge.yosupo.jp/problem/zalgorithm"

#include "../template/template.hpp"
#include "../string/z-algorithm.hpp"

int main(){
  string S = input();
  
  printVec(ZAlgorithm(S));
}
