#include <iostream>
#include <vector>

int main() {
 int a[10];
 int b[10];
 std::vector<int> c;
 
 for(size_t i = 0; i < 10; ++i) {
  a[i] = i;
 }
 
 for(size_t i = 0; i < 10; ++i) {
  b[i] = a[i];
 }
 
 for (auto& s : a) {
  c.push_back(s);
 }
 
 
 for (auto& s : b) {
  std::cout << s << std::endl;
 }
 
 for (auto& s : c) {
  std::cout << s << std::endl;
 }
 
 return 0;
}