#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
 string bookNo;
 int soldNo;
 double revenue;
};

int main() {
 double price; 
 Sales_data sd1;
 cin >> sd1.bookNo >> sd1.soldNo >> price;
 sd1.revenue = sd1.soldNo * price;
 Sales_data sd2;
 while (cin >> sd2.bookNo >> sd2.soldNo >> price) {
  sd2.revenue = sd2.soldNo * price;
  if (sd1.bookNo == sd2.bookNo) {
    sd1.soldNo += sd2.soldNo;
    sd1.revenue += sd2.revenue;
  } else {
    cout << sd1.bookNo << " " << sd1.soldNo << " " << sd1.revenue << endl;
    
  }
 }
 cout << sd1.bookNo << " " << sd1.soldNo << " " << sd1.revenue << endl;
}