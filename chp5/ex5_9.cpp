#include <iostream>

int main() {
  int count = 0;
  std::string str;
   
  std::cin >> str;
  for(auto& c : str ) {
      if ( c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u' ) {
        ++count;
      }
  }
  
  std::cout << "Total count of vowels is " << count << std::endl;
  
  return 0;
}