#include <initializer_list>
#include <iostream>


int sum(std::initializer_list<int> T) {
  int sum = 0;
  for(auto it = T.begin(); it != T.end(); ++it) {
    sum += *it;
  }
  
  return sum;
}


int main() {
 
   std::cout << sum({0, 1, 2, 3, 4}) << std::endl;
   
   return 0;
}