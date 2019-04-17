#include <iostream>


int compare(int i, const int* j) {
  return i > *j ? i : *j;
}

int main() {
   int i;
   int* j;
   
   while ( std::cin >> i >> *j ) {
      std::cout << compare(i, j) << std::endl;
   }
   
   return 0;
}