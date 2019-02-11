#include <iostream>

int main() {
  bool b;
  char c;
  wchar_t wc;
  char16_t c16;
  char32_t c32;
  short s;
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  
  
  
  std::cout << "size of bool: " << sizeof b << std::endl;
  std::cout << "size of char: " << sizeof c << std::endl;
  std::cout << "size of wchar_t: " << sizeof wc << std::endl;
  std::cout << "size of char16_t: " << sizeof c16 << std::endl;
  std::cout << "size of char32_t: " << sizeof c32 << std::endl;
  std::cout << "size of short: " << sizeof s << std::endl;
  std::cout << "size of int: " << sizeof i << std::endl;
  std::cout << "size of long: " << sizeof l << std::endl;
  std::cout << "size of long long: " << sizeof ll << std::endl;
  std::cout << "size of float: " << sizeof f << std::endl;
  std::cout << "size of double: " << sizeof d << std::endl;
  std::cout << "size of long double: " << sizeof ld << std::endl;

}