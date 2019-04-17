#include <algorithm>
#include <iostream>

int aabs(int input) {
  return std::abs(input);
  
}

int getaabs() {
  int input;
  std::cin >> input;
   
  return aabs(input);
}

int main() {
  std::cout << getaabs() << std::endl;
  
  return 0;
}