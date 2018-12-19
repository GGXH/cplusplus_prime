#include <iostream>

int main() {
 int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
 
 for(auto p = a; p != a + 3; ++p) {
  for(auto q = *p; q != *p + 4; ++q) {
   std::cout << *q;
  }
 }
 
 std::cout << std::endl;
 
 for(auto i = 0; i < 3; ++i) {
  for(auto j = 0; j < 4; ++j) {
   std::cout << a[i][j];
  }
 }
 
 std::cout << std::endl;
  
  for(auto& p : a) {
   for(auto& q : p) {
    std::cout << q;
   }
  }
  
  std::cout << std::endl;
   
  return 0;
}