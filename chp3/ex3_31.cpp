#include <iostream>

int main() {
 int a[10];
 
 for(size_t i = 0; i < 10; ++i) {
  a[i] = i;
 }
 
 for (auto& s : a) {
  std::cout << s << std::endl;
 }
 
 return 0;
}