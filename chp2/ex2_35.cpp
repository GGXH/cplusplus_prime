#include <iostream>

int main() {
 const int i = 42;
 
 auto j = i;
 std::cout << "j: " << j << std::endl;
 j = 2;
 std::cout << "j: " << j << " i: " << i << std::endl;
 
 
 const auto &k = i; 
// k = 4;
 
 auto *p = &i;
// p = 4;
 
 const auto j2 = i, &k2 = i;
// j2 = 1;
// k2 = 3;
 
}