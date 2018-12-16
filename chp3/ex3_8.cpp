#include <iostream>
#include <string>

int main() {
 std::string str;
 
 getline(std::cin, str);
  
 decltype(str.size()) i = 0;
 while (i < str.size()) {
  str[i] = 'X';
  ++i;
 }
 
 std::cout << str << std::endl;
 
 return 0;
 
}
 