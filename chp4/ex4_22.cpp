#include <iostream>

int main() {
  int score;
  
//  while ( std::cin >> score ) {
//    std::cout << ( score < 60 ? "Fail" : ( score < 75 ? "low pass" : ( score > 90 ? "high pass" : "pass" ) ) ) << std::endl;
//  }
  
  while ( std::cin >> score) {
    if ( score < 60 ) {
      std::cout << "Fail";
    } else if ( score < 70 ) {
      std::cout << "low pass";
    } else if ( score > 90 ) {
      std::cout << "high pass";
    } else {
      std::cout << "pass";
    }
    
    std::cout << std::endl;
  }
    
  return 0;
  
}