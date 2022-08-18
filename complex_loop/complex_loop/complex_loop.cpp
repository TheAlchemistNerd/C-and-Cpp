// complex_loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Multiple initialization in a loop expression

#include <iostream>
#include <iomanip>

int main()
{
	unsigned int limit {};
	std::cout << "This program calculates n! and the sum of the integers"
			  << " up to n  for values 1 to limit.\n";
	std::cout << "What upper limit for n would you like? ";
	std::cin  >> limit;

	// Output column headings
	std::cout << std::setw(8) << "integer" << std::setw(8) << " sum"
		                      << std::setw(20) << " factorial" << std::endl;
	/*for (unsigned long long n{ 1ULL }, sum{}, factorial{ 1ULL }; n <= limit; ++n)
	{
		sum += n;							// Accumulate sum to current n
		factorial *= n;						// Calculate n! for current n
		std::cout << std::setw(8) << n << std::setw(8) << sum
			<< std::setw(20) << factorial << std::endl;
	} */

	// Using the comma operator
	for (unsigned long long n {1ULL}, sum {}, factorial {1ULL} ;
										sum += n, factorial *= n, n <= limit ; ++n)
	{
	std::cout << std::setw(8) << n << std::setw(8) << sum
	<< std::setw(20) << factorial << std::endl;
	}
}

