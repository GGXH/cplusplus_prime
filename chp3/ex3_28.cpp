#include <iostream>
#include <string>

std::string sa[10];
int ia[10];

int main() {
 std::string sa2[10];
 int ia2[10];
 
 for (auto& s : sa) {
  std::cout << s << std::endl;
 }
 
 for (auto& s : ia) {
  std::cout << s << std::endl;
 }
 
 for (auto& s : sa2) {
  std::cout << s << std::endl;
 }
 
 for (auto& s : ia2) {
  std::cout << s << std::endl;
 }
 
 return 0;
}