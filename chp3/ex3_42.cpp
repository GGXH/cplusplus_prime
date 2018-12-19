#include <iostream>
#include <vector>

int main() {
 std::vector<int> a(10, 1);
  
 int b[10];
 
 
 auto j = a.begin();
 for (auto i = std::begin(b); i != std::end(b); ++i, ++j) {
  *i = *j;
 }
 
 for (auto i = std::begin(b); i != std::end(b); ++i) {
  std::cout << *i << std::endl;
 }
 
 return 0;
}