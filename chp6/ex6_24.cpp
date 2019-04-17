#include <array>
#include <cstddef>
#include <iostream>


void print(const int ia[10]) {
   for (std::size_t i = 0; i != 10; ++i) {
      std::cout << ia[i] << std::endl;
   }
}


int main() {
   int j[10] = {0, 1, 2,3 ,4, 5, 6, 7, 8,9};
   
   print(j);
   
   return 0;
}