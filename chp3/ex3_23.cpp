#include <iostream>
#include <vector>

int main() {
 std::vector<int> a(10);
 
 int i = 0;
 std::cout << "current value" << std::endl;
 for(auto s = a.begin(); s != a.end(); ++s, ++i) {
  *s = i;
  std::cout << *s << std::endl;
 }
 

 for(auto s = a.begin(); s != a.end(); ++s) {
  *s = *s * 2;
 }
 
 std::cout << "After revision" << std::endl;
 for(auto s = a.begin(); s != a.end(); ++s) {
  std::cout << *s << std::endl;
 }
 
 return 0;
}