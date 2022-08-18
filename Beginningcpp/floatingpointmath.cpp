// Beginningcpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Floating-point control in a for loop

#include <iostream>
#include<iomanip>

int main()
{
	const double pi{ 3.1415925 };
	const size_t perline{ 3 };			// Outputs per line
	size_t linecount{};					// Count of output lines
	for (double radius{ 0.2 }; radius <= 3.0; radius += 0.2)
	{
		std::cout << std::fixed << std::setprecision(2) << " radius =" << std::setw(5)
			<< radius << " area =" << std::setw(6) << pi * radius * radius
			<< " delta to 3 = " << std::scientific << ((radius + 0.2) - 3.0) << std::endl;
	}
}
