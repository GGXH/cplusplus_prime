#include <iostream>
#include <vector>

int main() {
 int a[] = {1, 2, 3, 4};
 
 std::vector<int> b(std::begin(a), std::end(a));
  
 for (auto & i : b) {
  std::cout << i << std::endl;
 }
 
 return 0;
}