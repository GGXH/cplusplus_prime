#include <iostream>

#include "Sales_item.h"

int main() {
   Sales_item s1, s2;
   
   std::cin >> s1;
   std::cin >> s2;
    
   if (compareIsbn(s1, s2)) {
      std::cout << s1 + s2 << std::endl;
   } else {
      std::cout << "The input do not have the same ISBN" << std::endl;
   }
   
   return 0;
}