#include <algorithm>
#include <iostream>
#include <string>


int main(int argc, char* argv[]) {
 
   int size = std::min(argc, 3);
   std::string input = "";
   
   for (int i = 1; i < size; ++i) {
     input += argv[i];
   }
   
   std::cout << input << std::endl;
   
   return 0;
}