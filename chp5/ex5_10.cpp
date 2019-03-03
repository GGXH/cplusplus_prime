#include <iostream>

int main() {
  int count = 0;
  std::string str;
   
  std::cin >> str;
  for(auto& c : str ) {
     switch (c) {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
        ++count;
        break;
     }
  }
  
  std::cout << "Total count of vowels is " << count << std::endl;
  
  return 0;
}