#include <iostream>
#include <string>

int compare_str(const std::string& a, const std::string& b) {
 decltype(a.size()) i = 0;

 while (i < a.size() && i < b.size()) {
  if (a[i] < b[i]) {
   return -1;
  } else if (a[i] > b[i]) {
   return 1;
  }
  ++i;
 }
 
 if (a.size() > b.size()) {
  return 1;
 } else if ( a.size() < b.size()) {
  return -1;
 }
 return 0;
}

int compare_charp(const char* a, const char* b) {
 while(*a && *b) {
  if (*a < *b) {
   return -1;
  } else if ( *a > *b ) {
   return 1;
  }
  ++a;
  ++b;
 }
 
 if (*a) {
  return 1;
 } else if (*b) {
  return -1;
 }
 
 return 0;
}

int main() {
 std::string a = "abcde";
 std::string b = "bc";
 std::string c = b;

 std::cout << compare_str(a, b) << std::endl;
 std::cout << compare_str(b, c) << std::endl;
 std::cout << compare_str(b, a) << std::endl;
 
 const char d[] = "abcd";
 const char e[] = "bc";
 const char f[] = "bc";
 
 std::cout << compare_charp(d, e) << std::endl;
 std::cout << compare_charp(f, e) << std::endl;
 std::cout << compare_charp(e, d) << std::endl;
  
 return 0;
}