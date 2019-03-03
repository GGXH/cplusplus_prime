#include <iostream>
#include <string>

std::string grade(const float& score) {
  return score == 100 ? "A++" : ( score >= 90 ? "A" : ( score >= 80 ? "B" : ( score >= 70 ? "C" : ( score >= 60 ? "D" : "F" ) ) ) );
}

int main() {
  float score;
  
  while ( std::cin >> score ) {
    std::cout << score << " " << grade(score) << std::endl;
  }
  
  return 0;
}