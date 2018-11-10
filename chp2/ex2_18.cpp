#include <iostream>

int main() {
	double d = 3.14;
	double *dp;
	
	dp = &d;
	
	std::cout << dp << " : " << *dp << std::endl;
	
	*dp = 2.71828;
	
	std::cout << dp << " : " << *dp << std::endl;
}	