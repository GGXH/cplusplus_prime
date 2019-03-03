#include <iostream>
#include <string>

int main() {
  int count = 0;
  std::string str;
   
  std::getline(std::cin, str);
  for(auto& c : str ) {
     switch (c) {
       case ' ':
       case '\t':
       case '\n':
        ++count;
        break;
     }
  }
  
  std::cout << "Total count of space or tab is " << count << std::endl;
  
  return 0;
}