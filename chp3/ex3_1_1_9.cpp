#include <iostream>

using std::cout;
using std::endl;

int main() {
 unsigned i = 50;
 unsigned sum = 0;
 
 while ( i <= 100 ) {
  sum += i;
  ++i;
 }
 
 cout << sum << endl;
 
}