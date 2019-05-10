#include <iostream>
#include <string>

// return the plural version of word if ctr is greater than 1



inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}


int main() {
  std::string word1, word2;
   
  while ( std::cin >> word1 && std::cin >> word2 ) {
    std::cout << isShorter(word1, word2) << std::endl;
  }
  return 0;
}