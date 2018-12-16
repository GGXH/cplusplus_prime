#include <iostream>
#include <string>
#include <vector>

int main() {
 std::string str;
 std::vector<std::string> pool;
 
 while ( std::cin >> str ) {
  pool.push_back(str);
 }
 
 std::cout << "Input: " << std::endl;
 
 for(auto& s:pool) {
  std::cout << s << std::endl;
 }
 
 return 0;
}