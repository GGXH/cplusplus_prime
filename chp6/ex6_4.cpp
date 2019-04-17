#include <iostream>

int fact(int input) {
  int res = 1;
  while ( input > 1 ) {
    res *= input;
    --input;
  }
  
  return res;
  
}

int getfact() {
  int input;
  std::cin >> input;
   
  return fact(input);
}

int main() {
  std::cout << getfact() << std::endl;
  
  return 0;
}