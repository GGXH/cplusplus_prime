#include <iostream>

int getPtr() {
  return 1;
}

int main() {
  int p;
 
  if ( (p = getPtr()) != 0 ) {
    std::cout << "p = getPtr" << std::endl;
  }
  
  int i = 1024;
  if ( i == 1024 ) {
    std::cout << "i = 1024" << std::endl;
  }

  
  return 0;
  
}