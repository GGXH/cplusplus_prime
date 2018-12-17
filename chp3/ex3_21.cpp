#include <iostream>
#include <string>
#include <vector>


int main() {

 std::vector<int> v1;
 std::cout << "a: size " << v1.size() << std::endl;
 for(auto s = v1.begin(); s != v1.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
 
 
 std::vector<int> v2(10);
 std::cout << "b: size " << v2.size() << std::endl;
 for(auto s = v2.begin(); s != v2.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
 
 std::vector<int> v3(10, 42);
 std::cout << "c: size " << v3.size() << std::endl;
 for(auto s = v3.begin(); s != v3.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
 
  
 std::vector<int> v4{10};
 std::cout << "d: size " << v4.size() << std::endl;
 for(auto s = v4.begin(); s != v4.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
  
 std::vector<int> v5{10, 42};
 std::cout << "e: size " << v5.size() << std::endl;
 for(auto s = v5.begin(); s != v5.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
 
 std::vector<std::string> v6{10};
 std::cout << "f: size " << v6.size() << std::endl;
 for(auto s = v6.begin(); s != v6.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
  
 std::vector<std::string> v7{10, "hi"};
 std::cout << "g: size " << v7.size() << std::endl;
 for(auto s = v7.begin(); s != v7.end(); ++s) {
  std::cout << *s << " ";
 }
 std::cout << std::endl;
 
 return 0;
}