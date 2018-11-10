#include <iostream>


int main() {
  int val = 0, sum = 0;
  
  while (std::cin >> val)
   sum += val;
   
  std::cout << "summation is " << sum << std::endl;
}