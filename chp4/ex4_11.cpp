#include <iostream>

int main() {
  int a = 0, b = 1, c = 2, d = 3;
  
  if ( a > b && b > c && c > d) {
    std::cout << "True"  << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
  
  return 0;
  
}