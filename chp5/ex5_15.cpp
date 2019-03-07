#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> a{0, 1, 1, 1};
  std::vector<int> b{0, 1, 1, 2, 3, 5, 8};
 
  decltype(a.size()) msz = std::min(a.size(), b.size());
 
  bool res = true;
  for(decltype(a.size()) i = 0; i < msz; ++i) {
    if ( a[i] != b[i] ) {
      res = false;
      break;
    }
  }
  
  std::cout << (res ? "is prefix" : "is not prefix") << std::endl;
  
  return 0;
}