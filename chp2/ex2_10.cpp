#include <iostream>

std::string global_str;

int global_int;

int main(){    
	int local_int;    
	std::string local_str;
		
	std::cout << "gstr" << global_str << std::endl;
	std::cout << "gint" << global_int << std::endl;
		
	std::cout << "lstr" << local_str << std::endl;
	std::cout << "lint" << local_int << std::endl;
}