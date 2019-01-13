#include <iostream>

int main() {
  int a;
  
  while (std::cin >> a && a != 42) {
    continue;
  }
  
  std::cout << "get " << a << std::endl;
  
  return 0;
  
}