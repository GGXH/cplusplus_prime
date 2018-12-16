#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
 std::vector<std::string> pool;
 std::string str;
  
 while(std::cin >> str) {
  pool.push_back(str);
 }
 
 std::cout << "output: " << std::endl;
 int i = 1;
 for(auto& s : pool) {
  for (auto& c: s) {
    std::cout << (char)std::toupper(c);
  }
  if ( i % 8 == 0 ) {
   std::cout << std::endl;
  } else {
   std::cout << " ";
  }
  ++i;
 }
 
 std::cout << std::endl;
 
 return 0;
}