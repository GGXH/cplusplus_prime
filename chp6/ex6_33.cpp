#include <iostream>
#include <vector>

void print(std::vector<int>::iterator cur, std::vector<int>::const_iterator end) {
  if ( cur == end ) {
    return ;
  }
  
  std::cout << *cur << std::endl;
  ++cur;
  print(cur, end);
}


int main() {
  std::vector<int> ia{1, 2, 3, 4};
   
  print(ia.begin(), ia.end());
}