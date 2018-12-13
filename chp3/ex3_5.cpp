#include <iostream>
#include <string>

int main() {
 std::string str_con = "";
 std::string str;
  
// while(getline(std::cin, str)) {
//  str_con += str;
// }
// 
// std::cout << std::endl << "Concatenated string is " << str_con << std::endl;
  
 str_con = "";
 while (getline(std::cin, str, ' ')) {
  str_con += str;
 }
 std::cout << str_con << std::endl;
 
 return 0;
}