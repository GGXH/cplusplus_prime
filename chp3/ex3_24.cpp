#include <iostream>
#include <vector>

int main() {
 std::vector<int> pool;
  
 int a;
 while (std::cin >> a) {
  pool.push_back(a);
 }
 
 std::cout << "Add adjacent: " << std::endl;
  
 for (auto s = pool.cbegin(); s != pool.cend() - 1; ++s) {
  std::cout << *s + *(s+1) << std::endl;
 }
 
 std::cout << "be: " << std::endl;
 for (auto b = pool.cbegin(), c = pool.cend() -1; c > b; --c, ++b) {
  std::cout << (*b) + (*c) << std::endl;
 }
 
 return 0;
}