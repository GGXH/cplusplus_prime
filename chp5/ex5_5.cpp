#include <iostream>
#include <string>

std::string grade(const float& score) {
  std::string g;
  if ( score == 100 ) {
    g = "A++";
  } else if ( score >= 90 ) {
    g = "A";
  } else if ( score >= 80 ) {
    g = "B";
  } else if ( score >= 70 ) {
    g = "C";
  } else if ( score >= 60 ) {
    g = "D";
  } else {
    g = "F";
  }
  
  return g;
}

int main() {
  float score;
  
  while ( std::cin >> score ) {
    std::cout << score << " " << grade(score) << std::endl;
  }
  
  return 0;
}