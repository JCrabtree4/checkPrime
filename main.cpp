#include "stdafx.h"
#include <iostream>

bool isPrime(int x);

int main()
{
	std::cout << "Please Input an single-digit number:\n";
	int x{};
	std::cin >> x;
	
	if ( isPrime(x) )
		std::cout << x << " is prime." << std::endl;
	
	else
		std::cout << x << " is not prime." << std::endl;
	
	// the next three lines tell console to wait for another response before closing. 
	std::cin.clear(); 
	std::cin.ignore(32767, '\n'); 
	std::cin.get(); 

	return 0;
}

