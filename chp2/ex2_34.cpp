#include <iostream>

int main() {
 int i = 0, &r = i;
 auto a = r;  // a is an int (r is an alias for i, which has type int)
 
 const int ci = i, &cr = ci;
 auto b = ci;  // b is an int (top-level const in ci is dropped)
 auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
 auto d = &i;  // d is an int*(& of an int object is int*)
 auto e = &ci; // e is const int*(& of a const object is low-level const)
 
 auto &g = ci;       // g is a const int& that is bound to ci
 
 std::cout << "a: " << a << std::endl;
 a = 42;
 std::cout << "a: " << a << std::endl;
  
 std::cout << "b: " << b << std::endl;
 b = 42;
 std::cout << "b: " << b << std::endl;
  
 std::cout << "c: " << c << std::endl;
 c = 42;
 std::cout << "c: " << c << std::endl;
  
// std::cout << "d: " << d << std::endl;
// d = 42;
// std::cout << "d: " << d << std::endl;
//  
// std::cout << "e: " << e << std::endl;
// e = 42;
// std::cout << "e: " << e << std::endl;
//  
// std::cout << "g: " << g << std::endl;
// g = 42;
// std::cout << "g: " << g << std::endl;
}
 