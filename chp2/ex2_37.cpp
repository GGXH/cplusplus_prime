#include <iostream>

int main() {
 int a = 3, b = 4;
 
 decltype(a) c = a;
 ++c;
 std::cout << "a: " << a << " c: " << c << std::endl;
 
 decltype(a = b) d = a;
 std::cout << "a: " << a << " b: " << b << " d: " << d << std::endl;
 ++d;
 std::cout << "a: " << a << " b: " << b << " d: " << d << std::endl;
}