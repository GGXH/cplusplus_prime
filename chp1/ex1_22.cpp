#include <iostream>

#include "Sales_item.h"

int main() {
 
 Sales_item s1, s2;
 
 std::cin >> s1;
 
 while (std::cin >> s2){
  
  if (compareIsbn(s1, s2)) {
   s1 += s2;
  } else {
    std::cout << "ISBN should be identical." << std::endl;
    break;
  }
 }
 
 std::cout << "Summation is " << s1 << std::endl;
 
}