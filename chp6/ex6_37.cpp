#include <string>

typedef std::string strarr[10];
 
std::string a[] = {"", ""};

strarr* fun();

auto fun() -> std::string(*)[10];


decltype(a) *fun();