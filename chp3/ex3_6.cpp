#include <iostream>
#include <string>

int main() {
 std::string str;
  
 getline(std::cin, str);
  
 for (decltype(str.size()) i = 0; i < str.size(); ++i) {
  str[i]= 'X';
 }
 
 std::cout << str << std::endl;
  
 return 0;
  
}