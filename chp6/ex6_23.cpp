#include <array>
#include <cstddef>
#include <iostream>


void print1(int* input, std::size_t n) {
  for (auto i = 0; i < n; ++i) {
     std::cout << input[i] << std::endl;
  }
}

void print2(int* start, int* end) {
  while ( start != end ) {
    std::cout << *start << std::endl;
    ++start;
  }
}

int main() {
   int i = 2, j[2] = {0, 1};
   
   print1(j, 2);
   print1(&i, 1);
   
   //print2(std::begin(&i), std::end(&i));
   print2(std::begin(j), std::end(j));
   
   return 0;
}