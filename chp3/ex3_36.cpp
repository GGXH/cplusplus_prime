#include <iostream>
#include <vector>

int compare_array(int a[], std::size_t a_size, int b[], std::size_t b_size) {
 
 int res = -1;
 auto size = a_size;
 if ( a_size > b_size ) {
  size = b_size;
  res = 1;
 }
 
 if (a_size == b_size) {
  res = 0;
 }
 
 for (auto i = 0; i < size; ++i) {
  if (*(a+i) > *(b+i) ) {
   return 1;
  } else if ( *(a+i) < *(b+i) ) {
   return -1;
  }
 }
 
 return res;
}


int compare_vector(const std::vector<int>& a, const std::vector<int>& b) {
 int res = -1;
 
 auto a_it = a.cbegin();
 auto b_it = b.cbegin();
 
 while ( a_it != a.cend() && b_it != b.cend() ) {
  if (*a_it > *b_it) {
   return 1;
  } else if ( *a_it < *b_it ) {
   return -1;
  }
  ++a_it;
  ++b_it;
 }
 
 if ( a_it != a.cend()) {
  return 1;
 } 
 if ( b_it != b.cend()) {
  return -1;
 }
 return 0;
}

int main() {
 int a[] = {1, 2, 3, 4};
 int b[] = {2, 3};
 int c[] = {2, 3};
 
 std::cout << compare_array(a, 4, b, 2) << std::endl;
 std::cout << compare_array(b, 2, a, 4) << std::endl;
 std::cout << compare_array(b, 2, c, 2) << std::endl;
  
 std::vector<int> d{1, 2, 3, 4};
 std::vector<int> e{2, 3};
 std::vector<int> f{2, 3};
  
 std::cout << compare_vector(d, e) << std::endl;
 std::cout << compare_vector(e, d) << std::endl;
 std::cout << compare_vector(f, e) << std::endl;
 
 return 0;
}
