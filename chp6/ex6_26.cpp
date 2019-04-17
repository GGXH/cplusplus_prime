#include <algorithm>
#include <iostream>
#include <string>


int main(int argc, char* argv[]) {
 
   std::string input = "";
   
   for (int i = 1; i < argc; ++i) {
     input += argv[i];
     input += " ";
   }
   
   std::cout << input << std::endl;
   
   return 0;
}