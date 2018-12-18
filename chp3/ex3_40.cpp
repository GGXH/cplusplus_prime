#include <cstring>
#include <iostream>

int main() {
 char a[] = "abcd";
 char b[] = "efg";
 
 char c[] = "";
 std::strcpy(c, a);
 
 auto d = c;
 
 while (*d) {
  std::cout << *d;
  ++d;
 }
 std::cout << std::endl;
  
 std::strcat(c, b);
 
 d = c;
 while (*d) {
  std::cout << *d;
  ++d;
 }
 std::cout << std::endl;
 
 return 0;
}