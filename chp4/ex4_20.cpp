#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string>::iterator iter;
   
  std::vector<std::string> a{"a", "b", "c"};
   
  iter = a.begin();
  
  std::cout << *iter++ << std::endl;
   
  //std::cout << (*iter)++ << std::endl;
   
  //std::cout << *iter.empty() << std::endl;
   
  std::cout << iter->empty() << std::endl;
   
  //std::cout << ++*iter << std::endl;
   
  std::cout << iter++->empty() << std::endl;
  
    
  return 0;
  
}