#include <iostream>
#include <string>

bool ContainCaptial(const std::string& input) {
  for ( auto& c : input ) {
     if ( c - 'A' >= 0 && c - 'A' < 26 ) {
        return true;
     } 
  }
  
  return false;
}

void removeCaptial(std::string& input) {
  for ( auto& c : input ) {
     if ( c - 'A' >= 0 && c - 'A' < 26 ) {
        c = c - 'A' + 'a';
     } 
  }
  
  return;
}


int main() {
  std::string input;
   
  while ( std::cin >> input ) {
     std::cout << ContainCaptial(input) << std::endl;
     removeCaptial(input);
     std::cout << input << std::endl;
  }    
  return 0;
}