#include <iostream>

int main() {
 int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
 for (auto b = std::begin(a); b != std::end(a); ++b) {
  *b = 0;
 }
 
 for (auto&b : a) {
  std::cout << b << std::endl;
 }
 
 return 0;
}