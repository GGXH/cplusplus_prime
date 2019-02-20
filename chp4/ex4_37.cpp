#include <iostream>
#include <string>

int main() {
   int i;
   double d;
   const std::string* ps;
   char *pc;
   void *pv;
   
   pv = reinterpret_cast<void*>(const_cast<std::string*>(ps));
   
   i = static_cast<int>(*pc);
   
   pv = static_cast<void*>(&d);
   
   pc = reinterpret_cast<char*>(pv);
}