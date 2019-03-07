#include <iostream>
#include <string>

int main() {
  int max_num = 0;
  std::string lastword = "";
  std::string currword;
  int curr_num = 0;
   
  while ( std::cin >> currword ) {
    if ( currword == lastword ) {
      ++curr_num;
    } else {
      if ( curr_num > max_num ) {
        max_num = curr_num;
      }
      lastword = currword;
    }
  }
  
  if ( curr_num > max_num ) {
   max_num = curr_num;
  }
  
  if ( max_num > 0 ) {
    std::cout << max_num << std::endl;
  } else {
    std::cout << "no repeat" << std::endl;
  }
  
  return 0;
}