#include <iostream>

int main() {
 
 int val1 = 0, val2 = 0;
 
 std::cout << "Input two numbers: ";
 std::cin >> val1 >> val2;
  
 if ( val1 > val2 ) {
  int tmp = val1;
  val1 = val2;
  val2 = tmp;
 }
 
 int val = val1;
 
 while (val <= val2) {
  std::cout << val << std::endl;
  ++val;
 }
 
}