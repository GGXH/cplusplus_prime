#include <cctype>
#include <iostream>
#include <string>

int main() {
 std::string str;
  
 getline(std::cin, str);
  
 for(auto & c : str) {
  if (! std::ispunct(c)) {
   std::cout << c;
  }
 }
 std::cout << std::endl;
  
 return 0;
}