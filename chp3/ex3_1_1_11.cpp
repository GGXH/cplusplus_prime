#include <iostream>

using std::cin;
using std::cout;
using std::endl;
 
int main() {
 int i, j;
 
 cin >> i >> j;
 
 if ( i > j ) {
  int tmp = i;
  i = j;
  j = tmp;
 }
 
 while ( i <= j ) {
  cout << i << endl;
  ++i;
 }
}