#include <iostream>
#include <stdexcept>

int main() {
  
  int input1, input2;
  
  while (std::cin >> input1 >> input2) {
    try {
      if ( input2 == 0 ) {
        throw std::invalid_argument("The second input cannot be 0");
      }
      int res = input1 / input2;
  
      std::cout << res << std::endl;
      break;
    } catch (std::invalid_argument err) {
      std::cout << err.what() << std::endl;
      continue;
    }
  }
  
  return 0;
}