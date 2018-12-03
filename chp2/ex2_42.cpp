#include <iostream>
#include <string>
#include "ex2_42.h"
//#include "../BookSource_code/2/Sales_data.h"

//struct Sales_data {
// std::string bookNo;
// unsigned soldNo = 0;
// double revenue = 0;
//};


int main() {
 double price;
 Sales_data sd1;
 std::cin >> sd1.bookNo >> sd1.soldNo >> price;
 sd1.revenue = sd1.soldNo * price;
 Sales_data sd2;
 while (std::cin >> sd2.bookNo >> sd2.soldNo >> price) {
  sd2.revenue = sd2.soldNo * price;
  if (sd1.bookNo == sd2.bookNo) {
    sd1.soldNo += sd2.soldNo;
    sd1.revenue += sd2.revenue;
  } else {
    std::cout << sd1.bookNo << " " << sd1.soldNo << " " << sd1.revenue << std::endl;
    
  }
 }
 std::cout << sd1.bookNo << " " << sd1.soldNo << " " << sd1.revenue << std::endl;
}