#include <iostream>
#include <string>

int main() {
  int count = 0;
  std::string str;
   
  std::getline(std::cin, str);
  for(size_t i = 1; i < str.size(); ++i) {
     if ( str[i-1] == 'f' ) {
       switch(str[i]) {
         case('f'):
         case('l'):
         case('i'):
           ++count;
           break;
          default:
           break;
       }
     }
  }
  
  std::cout << "Total count of ff, fl, and fi is " << count << std::endl;
  
  return 0;
}