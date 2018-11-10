#include <iostream>

int main() {
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	
	r2 = 3.14159;
	
	std::cout << "i: " << i << " r1: " << r1
						<< " d: " << d << " r2: " << d << std::endl;
							
	r2 = r1;
	
	std::cout << "i: " << i << " r1: " << r1
						<< " d: " << d << " r2: " << d << std::endl;
	
	i = r2;
	
	std::cout << "i: " << i << " r1: " << r1
						<< " d: " << d << " r2: " << d << std::endl;

	
	r1 = d;
	
	std::cout << "i: " << i << " r1: " << r1
						<< " d: " << d << " r2: " << d << std::endl;

}