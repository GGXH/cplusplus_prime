#include <iostream>
#include <string>

int main() {
 std::string str1, str2;
  
 std::getline(std::cin, str1);
 std::getline(std::cin, str2);
  
 std::cout << "comparing larger string:" << std::endl;
 if (str1 != str2) {
   if (str1 > str2) {
     std::cout << str1;
   } else {
     std::cout << str2;
   }
   std::cout << std::endl;
 } else {
   std::cout << "The two strings are equal." << std::endl;
 }
  
 std::cout << "comparing string with larger size:" << std::endl;
 if (str1.size() != str2.size()) {
  if (str1.size() > str2.size()) {
   std::cout << str1;
  } else {
   std::cout << str2;
  }
  std::cout << std::endl;
 } else {
  std::cout << "The two strings are with the same size." << std::endl;
 }
 return 0;
}