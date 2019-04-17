#include <iostream>


int fact(int input) {
  int res = 1;
  while ( input > 1 ) {
    res *= input;
    --input;
  }
  
  return res;
  
}

int main() {
  int input;
  
  std::cin >> input;
   
  std::cout << fact(input) << std::endl;
  
  return 0;
}