#include <iostream>

int main() {
 int sum = 0;
 
 for(int i = 50; i <= 100; ++i) {
  sum += i;
 }
 
 std::cout << "sum from 50 to 100 is " << sum << std::endl;
  
 sum = 0;
  
 for(int i = 10; i >= 0; --i) {
  sum += i;
 }
 
 std::cout << "sum from 10 to 0 is " << sum << std::endl;
}