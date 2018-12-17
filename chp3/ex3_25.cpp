#include <iostream>
#include <vector>

int main() {
 std::vector<unsigned> scores(11, 0);
 unsigned grade;
 
 auto s = scores.begin();
 while (std::cin >> grade) {
  if (grade <= 100) {
   ++(*(s + grade / 10));
  }
 }
  
 for(; s != scores.end(); ++s) {
  std::cout << *s << std::endl;
 }
 
 return 0;
}