#include <iostream>

#include "Sales_item.h"

int main () {
 
 Sales_item s, sp;
 
 int count = 0;
 
 std::cin >> sp;
  ++count;
 
 while (std::cin >> s) {
  if (s.isbn() == sp.isbn()) {
   ++count;
  } else {
   std::cout << "There are " << count << " " << sp.isbn() << std::endl;
   sp = s;
   count = 1;
  }
 }
 
 std::cout << "There are " << count << " " << sp.isbn() << std::endl;
}