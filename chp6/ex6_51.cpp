#include <iostream>

void f() {
   std::cout << "take 0 parameter" << std::endl;
}


void f(int a) {
   std::cout << "take 1 int parameter" << std::endl;
}


void f(int a, int b) {
   std::cout << "take 2 int parameters" << std::endl;
}


void f(double a, double b) {
   std::cout << "take 2 double parameters" << std::endl;
}


int main() {
  //f(2.56, 43);
  
  f(42);
  
  f(42, 0);
  
  f(2.56, 3.14);
}