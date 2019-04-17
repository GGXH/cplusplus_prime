#include <iostream>


void swap(int*& i, int*& j) {
  int* tmp = i;
  i = j;
  j = tmp;
}

int main() {
   int i;
   int j;
   int *a = &i;
   int *b = &j;
   
   while ( std::cin >> i >> j ) {
      swap(a, b);
      std::cout << *a << " " << *b << std::endl;
   }
   
   return 0;
}