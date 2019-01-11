#include <iostream>

int main() {
  int i;
  
  while (std::cin >> i) {
    if ( i % 2 ) {
      std::cout << "Odd" << std::endl;
    } else {
      std::cout << "Even" << std::endl;
    }
  }
  
  return 0;
}