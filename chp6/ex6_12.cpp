#include <iostream>

void swap(int& input1, int& input2) {
  int tmp = input1;
  input1 = input2;
  input2 = tmp;  
}


int main() {
  int a = 10, b = 20;
  
  std::cout << a << " " << b << std::endl;
   
  swap(a, b);
  
  std::cout << a << " " << b << std::endl;
    
  return 0;
}