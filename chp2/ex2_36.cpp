#include <iostream>

int main() {
 int a = 3, b = 4;
 
 decltype(a) c = a;
 decltype((b)) d = a;
 
 ++c;
 std::cout << "a: " << a << " c: " << c << std::endl;
 
 ++d;
 std::cout << "a: " << a << " d: " << d << std::endl;
  
}