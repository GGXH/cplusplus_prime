#include <iostream>
#include <vector>

int main() {
  std::vector<int> a{1, 2, 3, 4, 5, 6};
   
  for (auto& i : a) {
    i = ( i % 2 == 1 ) ? 2 * i : i;
  }
  
  for (auto& i : a) {
    std::cout << i << std::endl;
  }
    
  return 0;
  
}