#include <iostream>
#include <vector>

int main() {
 int in;
 std::vector<int> pool;
  
 while (std::cin >> in) {
  pool.push_back(in);
 }
 
 std::cout << "Input: " << std::endl;
 for (auto& i : pool) {
  std::cout << i << std::endl;
 }
 
 return 0;
 
}