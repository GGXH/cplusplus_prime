#include <iostream>
#include <vector>

int main() {
 int a;
 std::vector<int> pool;
  
 while (std::cin >> a) {
   pool.push_back(a);
 }
  
 std::cout << "Pair sum: " << std::endl;
 int last = 0;
 for (auto & it : pool) {
  std::cout << last + it << std::endl;
  last = it;
 }
 
 std::cout << "FL: " << std::endl;
 for (decltype(pool.size()) it = 0; it <= pool.size() / 2; ++it) {
   std::cout << pool[it] + pool[pool.size() - it - 1] << std::endl;
 }
  
 return 0;
}