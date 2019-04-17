#include <iostream>

void reset(int& input1) {
   input1 = 0;
}


int main() {
  
  int input;
  
  while ( std::cin >> input ) {
     reset(input);
     
     std::cout << input << std::endl;
  }
      
  return 0;
}