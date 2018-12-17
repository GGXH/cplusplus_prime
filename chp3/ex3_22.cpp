#include <cctype>
#include <iostream>
#include <string>

int main() {
 std::string str;
  
 getline(std::cin, str);
  
 for ( auto s = str.begin(); s != str.end(); ++s) {
  *s = std::toupper(*s);
 }
 
 std::cout << "after revision: " << std::endl;
 std::cout << str << std::endl;

 return 0;
}
