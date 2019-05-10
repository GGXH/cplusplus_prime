#include <iostream>
#include <string>

// return the plural version of word if ctr is greater than 1



std::string make_plural(size_t ctr, const std::string &word, const std::string ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}


int main() {
  std::string word;
   
  while ( std::cin >> word ) {
    std::cout << make_plural(2, word) << std::endl;
  }
  return 0;
}