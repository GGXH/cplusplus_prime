#include <iostream>
#include <string>

int main() {
  
  std::string str1 = "", str2 = "";
   
  while (std::cin >> str1) {
   if ( str1[0] - 'A' < 0 || str1[0] - 'A' >= 26 ) {
     str2 = str1;
     continue;
   }
   if ( str1 == str2) {
     break;
   }
   str2 = str1;
  }
  
  if ( str1 == str2 ) {
    std::cout << str1 << std::endl;
  } else {
    std::cout << "no word is repeated" << std::endl;
  }
  
  return 0;
}