#include <iostream>

int main() {
  int i;
  
  if (i = 42) {
    std::cout << "i = 42" << std::endl;
  }
  
  if (42 = i) {
    std::cout << "42 = i" << std::endl;
  }
  
  return 0;
  
}